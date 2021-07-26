
// Generated from grammar/Genie.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "GenieListener.h"


/**
 * This class provides an empty implementation of GenieListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  GenieBaseListener : public GenieListener {
public:

  virtual void enterQuoted_words(GenieParser::Quoted_wordsContext * /*ctx*/) override { }
  virtual void exitQuoted_words(GenieParser::Quoted_wordsContext * /*ctx*/) override { }

  virtual void enterFeature_defn(GenieParser::Feature_defnContext * /*ctx*/) override { }
  virtual void exitFeature_defn(GenieParser::Feature_defnContext * /*ctx*/) override { }

  virtual void enterPackage_defn(GenieParser::Package_defnContext * /*ctx*/) override { }
  virtual void exitPackage_defn(GenieParser::Package_defnContext * /*ctx*/) override { }

  virtual void enterRequires_single_line(GenieParser::Requires_single_lineContext * /*ctx*/) override { }
  virtual void exitRequires_single_line(GenieParser::Requires_single_lineContext * /*ctx*/) override { }

  virtual void enterRequires_multi_line(GenieParser::Requires_multi_lineContext * /*ctx*/) override { }
  virtual void exitRequires_multi_line(GenieParser::Requires_multi_lineContext * /*ctx*/) override { }

  virtual void enterRequires_defn(GenieParser::Requires_defnContext * /*ctx*/) override { }
  virtual void exitRequires_defn(GenieParser::Requires_defnContext * /*ctx*/) override { }

  virtual void enterParallelism_defn(GenieParser::Parallelism_defnContext * /*ctx*/) override { }
  virtual void exitParallelism_defn(GenieParser::Parallelism_defnContext * /*ctx*/) override { }

  virtual void enterScenario_decl(GenieParser::Scenario_declContext * /*ctx*/) override { }
  virtual void exitScenario_decl(GenieParser::Scenario_declContext * /*ctx*/) override { }

  virtual void enterDo_start(GenieParser::Do_startContext * /*ctx*/) override { }
  virtual void exitDo_start(GenieParser::Do_startContext * /*ctx*/) override { }

  virtual void enterDo_end(GenieParser::Do_endContext * /*ctx*/) override { }
  virtual void exitDo_end(GenieParser::Do_endContext * /*ctx*/) override { }

  virtual void enterDo_loop(GenieParser::Do_loopContext * /*ctx*/) override { }
  virtual void exitDo_loop(GenieParser::Do_loopContext * /*ctx*/) override { }

  virtual void enterDo_action(GenieParser::Do_actionContext * /*ctx*/) override { }
  virtual void exitDo_action(GenieParser::Do_actionContext * /*ctx*/) override { }

  virtual void enterDo_statement(GenieParser::Do_statementContext * /*ctx*/) override { }
  virtual void exitDo_statement(GenieParser::Do_statementContext * /*ctx*/) override { }

  virtual void enterScenario_defn(GenieParser::Scenario_defnContext * /*ctx*/) override { }
  virtual void exitScenario_defn(GenieParser::Scenario_defnContext * /*ctx*/) override { }

  virtual void enterCommented_lines(GenieParser::Commented_linesContext * /*ctx*/) override { }
  virtual void exitCommented_lines(GenieParser::Commented_linesContext * /*ctx*/) override { }

  virtual void enterFeature_file(GenieParser::Feature_fileContext * /*ctx*/) override { }
  virtual void exitFeature_file(GenieParser::Feature_fileContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

