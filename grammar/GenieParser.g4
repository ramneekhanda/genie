parser grammar GenieParser;

options {   tokenVocab = GenieLexer; }

quoted_string: (SET_STRING_QUOTES_OPEN|STRING_QUOTES_OPEN) (ESC_QUOTE|ESC_STRING_NONL|ESC_BACKSLASH)* STRING_QUOTES_CLOSE;
featureName: (SET_STRING_QUOTES_OPEN|STRING_QUOTES_OPEN) (ESC_QUOTE|ESC_STRING_NONL|ESC_BACKSLASH)* STRING_QUOTES_CLOSE;
callSignature: (SET_STRING_QUOTES_OPEN|STRING_QUOTES_OPEN) (ESC_QUOTE|ESC_STRING_NONL|ESC_BACKSLASH)* STRING_QUOTES_CLOSE;

loopBegin: DO INT TIMES COLN EOLN+;
loopEnd:  DONE EOLN+;
loop: loopBegin (statement)* loopEnd;
callFunction: (ACT) function EOA EOLN*;
callSet: SET IDENTIFIER AS (NUMBER|multilineString|quoted_string) EOLN+;
statement: loop | callFunction | callSet;

codeBlock: START_CODE (CODE)* END_CODE EOLN+;
multilineString: (EOLN_SET)? START_MULTILINE_TEXT (STR_TEXT|EOL)* END_MULTILINE_TEXT;
function: ACTION_TEXT;

scenarioDecl: SCENARIO COLN callSignature EOLN+;
backgroundDecl: BACKGROUND COLN EOLN+;
fragmentDecl: FRAGMENT (COLN) callSignature EOLN+;
fragmentDecl2: FRAGMENT (LANG_ID COLN) callSignature EOLN+;

tag_defn: TAGS (TAG_WORD)* EOT EOLN*;

fragmentDefn: (note)* (fragmentDecl (statement)* | fragmentDecl2 codeBlock) END EOLN+;
backgroundDefn: (note)* backgroundDecl (statement)* END EOLN+;
scenarioDefn: (note)* (tag_defn)* scenarioDecl (statement)* END EOLN+;
featureDefn: EOLN* (note)* FEATURE COLN featureName EOLN+;

note: NOTE (NOTE_TEXT)* EON EOLN+;

featureFile: featureDefn backgroundDefn? (fragmentDefn|scenarioDefn)* EOF;
