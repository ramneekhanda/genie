parser grammar GenieParser;

options {   tokenVocab = GenieLexer; }

quoted_words: STRING_QUOTES_OPEN (SIMPLE_QUOTE|ESC_QUOTE|WORD|ESC_BACKSLASH)* STRING_QUOTES_CLOSE;
feature_defn: (note_defn)* FEATURE COLN quoted_words EOLN+;

do_start: DO INT TIMES COLN EOLN+;
do_end:  DONE EOLN+;
do_loop: do_start (do_statement)* do_end;
do_action: (ACT) action_text EOA EOLN*;
do_set: SET IDENTIFIER AS (NUMBER|do_multiline_string) EOLN+;
do_statement: do_loop | do_action | do_set;

do_multiline_string: (EOLN_SET)? START_MULTILINE_TEXT (STR_TEXT|EOL)* END_MULTILINE_TEXT;
action_text: ACTION_TEXT;

scenario_decl: SCENARIO COLN quoted_words EOLN+;
background_decl: BACKGROUND COLN EOLN+;
fragment_decl: FRAGMENT COLN quoted_words EOLN+;

tag_defn: TAGS (TAG_WORD)* EOT EOLN*;

fragment_defn: (note_defn)* fragment_decl (do_statement)*;
background_defn: (note_defn)* background_decl (do_statement)*;
scenario_defn: (note_defn)* (tag_defn)* scenario_decl (do_statement)*;

note_decl: NOTE COLN_NOTE (note_text)+ EOLN+;
note_defn: note_decl;
note_text: (NOTE_TEXT | EOLN_NOTE)* EON;

commented_lines: (SINGLE_LINE_COMMENT (COMMENT_TEXT)* EOC)+ EOLN*;

feature_file: feature_defn background_defn? (fragment_defn)* (scenario_defn)* EOF;
