
// Generated from /Users/ramneekhanda/workspace/genie/grammar/GenieParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "GenieParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by GenieParser.
 */
class  GenieParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterQuoted_string(GenieParser::Quoted_stringContext *ctx) = 0;
  virtual void exitQuoted_string(GenieParser::Quoted_stringContext *ctx) = 0;

  virtual void enterFeature_defn(GenieParser::Feature_defnContext *ctx) = 0;
  virtual void exitFeature_defn(GenieParser::Feature_defnContext *ctx) = 0;

  virtual void enterDo_start(GenieParser::Do_startContext *ctx) = 0;
  virtual void exitDo_start(GenieParser::Do_startContext *ctx) = 0;

  virtual void enterDo_end(GenieParser::Do_endContext *ctx) = 0;
  virtual void exitDo_end(GenieParser::Do_endContext *ctx) = 0;

  virtual void enterDo_loop(GenieParser::Do_loopContext *ctx) = 0;
  virtual void exitDo_loop(GenieParser::Do_loopContext *ctx) = 0;

  virtual void enterDo_action(GenieParser::Do_actionContext *ctx) = 0;
  virtual void exitDo_action(GenieParser::Do_actionContext *ctx) = 0;

  virtual void enterDo_set(GenieParser::Do_setContext *ctx) = 0;
  virtual void exitDo_set(GenieParser::Do_setContext *ctx) = 0;

  virtual void enterDo_statement(GenieParser::Do_statementContext *ctx) = 0;
  virtual void exitDo_statement(GenieParser::Do_statementContext *ctx) = 0;

  virtual void enterDo_ffi(GenieParser::Do_ffiContext *ctx) = 0;
  virtual void exitDo_ffi(GenieParser::Do_ffiContext *ctx) = 0;

  virtual void enterDo_code(GenieParser::Do_codeContext *ctx) = 0;
  virtual void exitDo_code(GenieParser::Do_codeContext *ctx) = 0;

  virtual void enterDo_multiline_string(GenieParser::Do_multiline_stringContext *ctx) = 0;
  virtual void exitDo_multiline_string(GenieParser::Do_multiline_stringContext *ctx) = 0;

  virtual void enterAction_text(GenieParser::Action_textContext *ctx) = 0;
  virtual void exitAction_text(GenieParser::Action_textContext *ctx) = 0;

  virtual void enterScenario_decl(GenieParser::Scenario_declContext *ctx) = 0;
  virtual void exitScenario_decl(GenieParser::Scenario_declContext *ctx) = 0;

  virtual void enterBackground_decl(GenieParser::Background_declContext *ctx) = 0;
  virtual void exitBackground_decl(GenieParser::Background_declContext *ctx) = 0;

  virtual void enterFragment_decl(GenieParser::Fragment_declContext *ctx) = 0;
  virtual void exitFragment_decl(GenieParser::Fragment_declContext *ctx) = 0;

  virtual void enterFragment_decl2(GenieParser::Fragment_decl2Context *ctx) = 0;
  virtual void exitFragment_decl2(GenieParser::Fragment_decl2Context *ctx) = 0;

  virtual void enterTag_defn(GenieParser::Tag_defnContext *ctx) = 0;
  virtual void exitTag_defn(GenieParser::Tag_defnContext *ctx) = 0;

  virtual void enterFragment_defn(GenieParser::Fragment_defnContext *ctx) = 0;
  virtual void exitFragment_defn(GenieParser::Fragment_defnContext *ctx) = 0;

  virtual void enterBackground_defn(GenieParser::Background_defnContext *ctx) = 0;
  virtual void exitBackground_defn(GenieParser::Background_defnContext *ctx) = 0;

  virtual void enterScenario_defn(GenieParser::Scenario_defnContext *ctx) = 0;
  virtual void exitScenario_defn(GenieParser::Scenario_defnContext *ctx) = 0;

  virtual void enterNote_decl(GenieParser::Note_declContext *ctx) = 0;
  virtual void exitNote_decl(GenieParser::Note_declContext *ctx) = 0;

  virtual void enterNote_defn(GenieParser::Note_defnContext *ctx) = 0;
  virtual void exitNote_defn(GenieParser::Note_defnContext *ctx) = 0;

  virtual void enterNote_text(GenieParser::Note_textContext *ctx) = 0;
  virtual void exitNote_text(GenieParser::Note_textContext *ctx) = 0;

  virtual void enterCommented_lines(GenieParser::Commented_linesContext *ctx) = 0;
  virtual void exitCommented_lines(GenieParser::Commented_linesContext *ctx) = 0;

  virtual void enterFeature_file(GenieParser::Feature_fileContext *ctx) = 0;
  virtual void exitFeature_file(GenieParser::Feature_fileContext *ctx) = 0;


};

