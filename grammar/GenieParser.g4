parser grammar GenieParser;

options {   tokenVocab = GenieLexer; }

quoted_string: SET_STRING_QUOTES_OPEN (ESC_QUOTE|ESC_STRING_NONL|ESC_BACKSLASH)* STRING_QUOTES_CLOSE;
featureName: STRING_QUOTES_OPEN (ESC_QUOTE|ESC_STRING_NONL|ESC_BACKSLASH)* STRING_QUOTES_CLOSE;
callSignature: STRING_QUOTES_OPEN (ESC_QUOTE|ESC_STRING_NONL|ESC_BACKSLASH)* STRING_QUOTES_CLOSE;
fragName: STRING_QUOTES_OPEN (ESC_QUOTE|ESC_STRING_NONL|ESC_BACKSLASH)* STRING_QUOTES_CLOSE;
fragPath: (ESC_QUOTE|ESC_STRING_NONL|ESC_BACKSLASH)*;
qFragPath: STRING_QUOTES_OPEN_UF fragPath STRING_QUOTES_CLOSE;

usingFragment: USING_FRAGMENT FRAGNAME_USING EOLN_USING EOLN*;
loopBegin: DO INT TIMES EOLN+;
loopEnd:  DONE EOLN+;
loop: loopBegin (statement)* loopEnd;
listFunction: EOA_LIST function;
callFunction: (ACT) ((listFunction)+ | function) EOA EOLN*;
callSet: SET IDENTIFIER AS (NUMBER|multilineString|quoted_string) EOLN_SET EOLN*;
statement: loop | callFunction | callSet | usingFragment;

tableHeader: (IN_ACT_TABLE_START | TABLE_START) (DATA COL_DELIM)+ ROW_EOLN;
tableRow: (IN_ACT_TABLE_START | TABLE_START) (DATA? COL_DELIM)+ ROW_EOLN;
table: tableHeader (tableRow)+;

withExamples: WITH_EXAMPLES table;
//withExamples: WITH_EXAMPLES_IN_FILE filename;

codeBlock: START_CODE (CODE)* END_CODE EOLN+;
multilineString: START_MULTILINE_TEXT (STR_TEXT|EOL)* END_MULTILINE_TEXT;
function: ACTION_TEXT table?;

scenarioDecl: SCENARIO callSignature EOLN+;
backgroundDecl: BACKGROUND EOLN+;
fragDecl: FRAGMENT (COLN_FRAG) callSignature EOLN+;
fragDecl2: FRAGMENT WS_FD+ LANG_ID COLN_FRAG callSignature EOLN+;

tag_defn: TAGS (TAG_WORD)* EOT EOLN*;

fragDefn: (note)* (fragDecl (statement)* | fragDecl2 codeBlock) END EOLN+;
backgroundDefn: (note)* backgroundDecl (statement)* END EOLN+;
scenarioDefn: (note)* (tag_defn)* scenarioDecl (statement)* withExamples? EOLN* END EOLN+;
featureDefn: EOLN* (note)* FEATURE featureName EOLN+;
fragFileDefn: EOLN* (note)* FRAGMENT_FILE fragName EOLN+;
usesFragment: (note)* USES_FRAGMENT qFragPath AS_UF FRAGNAME EOLN_UF EOLN*;

note: NOTE (NOTE_TEXT)* EON EOLN+;

featureFile: featureDefn (usesFragment)* backgroundDefn? (fragDefn|scenarioDefn)* EOF;
fragmentsFile: fragFileDefn (usesFragment)* (fragDefn)* EOF;

genieFile: (featureFile | fragmentsFile) EOF;