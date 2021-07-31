parser grammar GenieParser;

options {   tokenVocab = GenieLexer; }

quoted_string: (SET_STRING_QUOTES_OPEN|STRING_QUOTES_OPEN) (SIMPLE_QUOTE|ESC_QUOTE|WORD|ESC_BACKSLASH)* STRING_QUOTES_CLOSE;

do_start: DO INT TIMES COLN EOLN+;
do_end:  DONE EOLN+;
do_loop: do_start (do_statement)* do_end;
do_action: (ACT) action_text EOA EOLN*;
do_set: SET IDENTIFIER AS (NUMBER|do_multiline_string|quoted_string) EOLN+;
do_statement: do_loop | do_action | do_set;
do_ffi: do_code;

do_code: START_CODE (CODE|EOL_CODE)* END_CODE EOLN+;
do_multiline_string: (EOLN_SET)? START_MULTILINE_TEXT (STR_TEXT|EOL)* END_MULTILINE_TEXT;
action_text: ACTION_TEXT;

scenario_decl: SCENARIO COLN quoted_string EOLN+;
background_decl: BACKGROUND COLN EOLN+;
fragment_decl: FRAGMENT (COLN) quoted_string EOLN+;
fragment_decl2: FRAGMENT (LANG_ID COLN) quoted_string EOLN+;

tag_defn: TAGS (TAG_WORD)* EOT EOLN*;

fragment_defn: (note_defn)* (fragment_decl (do_statement)* | fragment_decl2 do_ffi) END EOLN+;
background_defn: (note_defn)* background_decl (do_statement)* END EOLN+;
scenario_defn: (note_defn)* (tag_defn)* scenario_decl (do_statement)* END EOLN+;

note_decl: NOTE (note_text)+ EOLN+;
note_defn: note_decl;
note_text: (NOTE_TEXT | EOLN_NOTE)* EON;

feature_defn: (note_defn)* FEATURE COLN quoted_string EOLN+;
feature_file: feature_defn background_defn? (fragment_defn|scenario_defn)* EOF;
