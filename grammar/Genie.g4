grammar Genie;

fragment A : [aA]; // match either an 'a' or 'A'
fragment B : [bB];
fragment C : [cC];
fragment D : [dD];
fragment E : [eE];
fragment F : [fF];
fragment G : [gG];
fragment H : [hH];
fragment I : [iI];
fragment J : [jJ];
fragment K : [kK];
fragment L : [lL];
fragment M : [mM];
fragment N : [nN];
fragment O : [oO];
fragment P : [pP];
fragment Q : [qQ];
fragment R : [rR];
fragment S : [sS];
fragment T : [tT];
fragment U : [uU];
fragment V : [vV];
fragment W : [wW];
fragment X : [xX];
fragment Y : [yY];
fragment Z : [zZ];
fragment DIGIT: '0'..'9';
fragment LETTERS: 'a'..'z';
fragment CLETTERS: 'A'..'Z';
fragment SYMBOLS: '~'|'!'|'@'|'$'|'%'|'^'|'&'
    |'*'|'('|')'|'-'|'+'|'_'|','|'.'|'/'
    |'?'|';'|'\''|'['|']'|'{'|'}'|':';

FEATURE: F E A T U R E;
REQUIRES: R E Q U I R E S;
PARALLELISM: P A R A L L E L I S M;
AT: '@';
ATTR: A T T R;
SCENARIO: S C E N A R I O;
STRING_QUOTES: '"';
DO: D O;
TIMES: T I M E S;
GIVEN: G I V E N;
WHEN: W H E N;
THEN: T H E N;
AND: A N D;
BUT: B U T;
CALL: C A L L;
DONE: D O N E;
INT: DIGIT+;
WORD: (LETTERS|CLETTERS|DIGIT|SYMBOLS)+;
WS: ' ' -> channel(HIDDEN);
EOLN: '\n'|'\r\n';
PACKAGE_VERSION_SPLITTER: '/';
LIST_ITEM: '-';
SINGLE_LINE_COMMENT: '#';
ESC_QUOTE: '\\"';
ESC_BACKSLASH: '\\\\';

quoted_words: STRING_QUOTES (ESC_QUOTE|WORD|ESC_BACKSLASH)* STRING_QUOTES;
feature_defn: (commented_lines)* FEATURE quoted_words EOLN+;
package_defn: WORD PACKAGE_VERSION_SPLITTER WORD;
requires_single_line: (commented_lines)* REQUIRES package_defn EOLN+;
requires_multi_line: (commented_lines)* REQUIRES EOLN ((commented_lines)* LIST_ITEM package_defn EOLN)+;
requires_defn: requires_single_line | requires_multi_line;
parallelism_defn: (commented_lines)* PARALLELISM SCENARIO EOLN+;
scenario_decl: (commented_lines)* SCENARIO quoted_words EOLN+;
do_start: (commented_lines)* DO INT TIMES EOLN+;
do_end: (commented_lines)* DONE EOLN+;
do_loop: do_start (do_statement)* do_end;
do_action: (commented_lines)* (GIVEN | WHEN | THEN | BUT | CALL | AND) (WORD | quoted_words)* EOLN+;
do_statement: do_loop | do_action;
scenario_defn: (commented_lines)* scenario_decl (do_statement)*;
commented_lines: (SINGLE_LINE_COMMENT (WORD)* EOLN+)+;

feature_file: feature_defn (requires_defn)* (parallelism_defn)* (scenario_defn)* EOF;

