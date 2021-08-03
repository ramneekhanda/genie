lexer grammar GenieLexer;

fragment COLN: ':';
fragment DIGIT: '0'..'9';
// top level keywords
FRAGMENT: 'fragment' -> pushMode(In_Frag_Decl);
BACKGROUND: 'background' WS* COLN ;
FEATURE: 'feature' WS* COLN ;
SCENARIO: 'scenario' WS* COLN ;
USES_FRAGMENT: 'uses' WS* 'fragment' WS+ -> pushMode (In_Uses_Frag);
USING_FRAGMENT: 'using' WS* 'fragment' -> pushMode (In_Using_Frag);

NOTE: ('note' | 'requirement' | 'description' | 'desc' | 'explanation' | 'summary') WS* COLN -> pushMode(In_Note);
WITH_EXAMPLES: 'with' WS* 'examples' WS* COLN EOLN+;
TAGS: '@tags' -> pushMode(In_Tags);
STRING_QUOTES_OPEN: '"' -> pushMode(In_Quotes);
DO: 'do' -> pushMode(In_Do);
ACT: ('given'|'when'|'then'|'and'|'but'|'call') -> pushMode(In_Act);
DONE: 'done';
WS: ' ' -> channel(HIDDEN);
EOLN: '\r'? '\n';
END: 'end';
SET: 'set' -> pushMode(In_Set);
START_CODE: '```' -> pushMode(In_Code);
TABLE_START: '|' ->pushMode(In_Table_Row);
ERROR_TOKEN: .;

mode In_Using_Frag;
FRAGNAME_USING: [a-zA-Z]+;
EOLN_USING: '\r'? '\n' -> popMode;
WS_USNG_FRAG: ' ' -> skip;

mode In_Uses_Frag;
STRING_QUOTES_OPEN_UF: '"' -> pushMode(In_Quotes);
AS_UF: 'as';
EOLN_UF: '\r'? '\n' -> popMode;
FRAGNAME: [a-zA-Z]+;
WS_USES_FRAG: ' ' -> skip;

mode In_Table_Row;
COL_DELIM: '|';
DATA: ( ~[|(\r\n)] | ESC_DELIM )+;
ESC_DELIM: '\\|';
ROW_EOLN: '\r'? '\n' -> popMode;

mode In_Frag_Decl;
LANG_ID: [a-z0-9]+;
COLN_FRAG: ':' -> popMode;
WS_FD: ' ';

mode In_Code;
CODE: ( ~[`] | ESC_SEQ_CODE )+ ;
ESC_SEQ_CODE : '\\`';
END_CODE: '```' -> popMode;

mode In_Set;
AS: 'as';
NUMBER: DIGIT+ ('.'? DIGIT+)?;
START_MULTILINE_TEXT: '"""' -> pushMode(In_MultiLineText);
SET_STRING_QUOTES_OPEN: '"' -> pushMode(In_Quotes);
WS_SET: ' ' -> channel(HIDDEN);
EOLN_SET: '\r'? '\n' -> popMode;
IDENTIFIER: [a-zA-Z_][a-zA-Z0-9_-]*;

mode In_MultiLineText;
STR_TEXT: ( ~["\r\n\\] | ESC_SEQ )+ ;
ESC_SEQ : '\\' ( [btf"\\] );
EOL     : '\r'? '\n' ;
END_MULTILINE_TEXT: '"""' -> popMode;

mode In_Quotes;
ESC_STRING_NONL: (~[\r\n\\"]+|WS_INQUOTES);
ESC_QUOTE: '\\"';
ESC_BACKSLASH: '\\\\';
STRING_QUOTES_CLOSE: '"' -> popMode;
WS_INQUOTES: ' ';

mode In_Tags;
EOT: '\n' -> popMode;
TAG_WORD: [a-zA-Z0-9_-]+;
WS_TAGS: ' ' -> channel(HIDDEN);

mode In_Note;
EON: '...' -> popMode;
NOTE_TEXT: (~[.]|ESC_DOT)+;
ESC_DOT: '\\.';
ERROR_TOKEN_NOTE: .;

mode In_Act;
EOA_LIST: ('\r'? '\n')+ WS_ACT* LIST_ITEM;
EOA: '\r'? '\n' -> popMode;
ACTION_TEXT: (~[\r\n])+;
LIST_ITEM: '-';
WS_ACT: ' ';

mode In_Do;
INT: DIGIT+;
DO_COLN: ':';
TIMES: 'times' WS_DO* DO_COLN -> popMode;
WS_DO: ' ' -> channel(HIDDEN);
