lexer grammar GenieLexer;

fragment DIGIT: '0'..'9';

FRAGMENT: 'fragment';
BACKGROUND: 'background';
FEATURE: 'feature';
TAGS: '@tags' -> pushMode(In_Tags);
SCENARIO: 'scenario';
STRING_QUOTES_OPEN: '"' -> pushMode(In_Quotes);
DO: 'do' -> pushMode(In_Do);
ACT: ('given'|'when'|'then'|'and'|'but'|'call') -> pushMode(In_Act);
DONE: 'done';
WS: ' ' -> channel(HIDDEN);
EOLN: '\n';
COLN: ':';
PACKAGE_VERSION_SPLITTER: '/';
LIST_ITEM: '-';
SINGLE_LINE_COMMENT: '#' -> pushMode(In_Comment);
NOTE: ('note' | 'requirement' | 'bugid')  -> pushMode(In_Note);
SET: 'set' -> pushMode(In_Set);

mode In_Set;
AS: 'as';
NUMBER: [0-9]+ ('.'? [0-9]+)? -> popMode;
START_MULTILINE_TEXT: '"""' -> pushMode(In_MultiLineText);
WS_SET: ' ' -> channel(HIDDEN);
EOLN_SET: '\r'? '\n';
IDENTIFIER: [a-zA-Z_][a-zA-Z0-9_-]*;

mode In_MultiLineText;
STR_TEXT: ( ~["\r\n\\] | ESC_SEQ )+ ;
ESC_SEQ : '\\' ( [btf"\\] );
EOL     : '\r'? '\n' ;
END_MULTILINE_TEXT: '"""' -> popMode, popMode;

mode In_Quotes;
WORD: ~[\r\n\\"]+;
ESC_QUOTE: '\\"';
ESC_BACKSLASH: '\\\\';
SIMPLE_QUOTE: '\\';
STRING_QUOTES_CLOSE: '"' -> popMode;

mode In_Tags;
EOT: '\n' -> popMode;
TAG_WORD: [a-zA-Z0-9]+;
WS_TAGS: ' ' -> channel(HIDDEN);

mode In_Note;
EON: '...' -> popMode;
NOTE_TEXT: [a-zA-Z0-9]*;
WS_NOTE: ' ' -> channel(HIDDEN);
EOLN_NOTE: '\n';
COLN_NOTE: ':';

mode In_Act;
EOA: '\n' -> popMode;
ACTION_TEXT: ~[\r\n]+;

mode In_Comment;
EOC: '\n' -> popMode;
COMMENT_TEXT: ~[\r\n"]+;

mode In_Do;
INT: DIGIT+;
TIMES: 'times' -> popMode;
WS_DO: ' ' -> channel(HIDDEN);
