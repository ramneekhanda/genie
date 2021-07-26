
// Generated from grammar/Genie.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "GenieParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by GenieParser.
 */
class  GenieListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterQuoted_words(GenieParser::Quoted_wordsContext *ctx) = 0;
  virtual void exitQuoted_words(GenieParser::Quoted_wordsContext *ctx) = 0;

  virtual void enterFeature_defn(GenieParser::Feature_defnContext *ctx) = 0;
  virtual void exitFeature_defn(GenieParser::Feature_defnContext *ctx) = 0;

  virtual void enterPackage_defn(GenieParser::Package_defnContext *ctx) = 0;
  virtual void exitPackage_defn(GenieParser::Package_defnContext *ctx) = 0;

  virtual void enterRequires_single_line(GenieParser::Requires_single_lineContext *ctx) = 0;
  virtual void exitRequires_single_line(GenieParser::Requires_single_lineContext *ctx) = 0;

  virtual void enterRequires_multi_line(GenieParser::Requires_multi_lineContext *ctx) = 0;
  virtual void exitRequires_multi_line(GenieParser::Requires_multi_lineContext *ctx) = 0;

  virtual void enterRequires_defn(GenieParser::Requires_defnContext *ctx) = 0;
  virtual void exitRequires_defn(GenieParser::Requires_defnContext *ctx) = 0;

  virtual void enterParallelism_defn(GenieParser::Parallelism_defnContext *ctx) = 0;
  virtual void exitParallelism_defn(GenieParser::Parallelism_defnContext *ctx) = 0;

  virtual void enterScenario_decl(GenieParser::Scenario_declContext *ctx) = 0;
  virtual void exitScenario_decl(GenieParser::Scenario_declContext *ctx) = 0;

  virtual void enterDo_start(GenieParser::Do_startContext *ctx) = 0;
  virtual void exitDo_start(GenieParser::Do_startContext *ctx) = 0;

  virtual void enterDo_end(GenieParser::Do_endContext *ctx) = 0;
  virtual void exitDo_end(GenieParser::Do_endContext *ctx) = 0;

  virtual void enterDo_loop(GenieParser::Do_loopContext *ctx) = 0;
  virtual void exitDo_loop(GenieParser::Do_loopContext *ctx) = 0;

  virtual void enterDo_action(GenieParser::Do_actionContext *ctx) = 0;
  virtual void exitDo_action(GenieParser::Do_actionContext *ctx) = 0;

  virtual void enterDo_statement(GenieParser::Do_statementContext *ctx) = 0;
  virtual void exitDo_statement(GenieParser::Do_statementContext *ctx) = 0;

  virtual void enterScenario_defn(GenieParser::Scenario_defnContext *ctx) = 0;
  virtual void exitScenario_defn(GenieParser::Scenario_defnContext *ctx) = 0;

  virtual void enterCommented_lines(GenieParser::Commented_linesContext *ctx) = 0;
  virtual void exitCommented_lines(GenieParser::Commented_linesContext *ctx) = 0;

  virtual void enterFeature_file(GenieParser::Feature_fileContext *ctx) = 0;
  virtual void exitFeature_file(GenieParser::Feature_fileContext *ctx) = 0;


};

