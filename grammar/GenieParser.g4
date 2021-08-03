parser grammar GenieParser;

options {   tokenVocab = GenieLexer; }

quoted_string: SET_STRING_QUOTES_OPEN (ESC_QUOTE|ESC_STRING_NONL|ESC_BACKSLASH)* STRING_QUOTES_CLOSE;
featureName: STRING_QUOTES_OPEN (ESC_QUOTE|ESC_STRING_NONL|ESC_BACKSLASH)* STRING_QUOTES_CLOSE;
callSignature: STRING_QUOTES_OPEN (ESC_QUOTE|ESC_STRING_NONL|ESC_BACKSLASH)* STRING_QUOTES_CLOSE;

loopBegin: DO INT TIMES EOLN+;
loopEnd:  DONE EOLN+;
loop: loopBegin (statement)* loopEnd;
listFunction: EOA_LIST function;
callFunction: (ACT) ((listFunction)+ | function) EOA EOLN*;
callSet: SET IDENTIFIER AS (NUMBER|multilineString|quoted_string) EOLN_SET+;
statement: loop | callFunction | callSet;
tableHeader: TABLE_START (DATA COL_DELIM)+ ROW_EOLN EOLN*;
tableRow: TABLE_START (DATA? COL_DELIM)+ ROW_EOLN EOLN*;
table: tableHeader (tableRow)+;
withExamples: WITH_EXAMPLES table;
//withExamples: WITH_EXAMPLES_IN_FILE filename;

codeBlock: START_CODE (CODE)* END_CODE EOLN+;
multilineString: START_MULTILINE_TEXT (STR_TEXT|EOL)* END_MULTILINE_TEXT;
function: ACTION_TEXT;

scenarioDecl: SCENARIO callSignature EOLN+;
backgroundDecl: BACKGROUND EOLN+;
fragDecl: FRAGMENT (COLN_FRAG) callSignature EOLN+;
fragDecl2: FRAGMENT WS_FD+ LANG_ID COLN_FRAG callSignature EOLN+;

tag_defn: TAGS (TAG_WORD)* EOT EOLN*;

fragDefn: (note)* (fragDecl (statement)* | fragDecl2 codeBlock) END EOLN+;
backgroundDefn: (note)* backgroundDecl (statement)* END EOLN+;
scenarioDefn: (note)* (tag_defn)* scenarioDecl (statement)* withExamples? END EOLN+;
featureDefn: EOLN* (note)* FEATURE featureName EOLN+;

note: NOTE (NOTE_TEXT)* EON EOLN+;

featureFile: featureDefn backgroundDefn? (fragDefn|scenarioDefn)* EOF;
