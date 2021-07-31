
// Generated from /Users/ramneekhanda/workspace/genie/grammar/GenieParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "GenieParserListener.h"


/**
 * This class provides an empty implementation of GenieParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  GenieParserBaseListener : public GenieParserListener {
public:

  virtual void enterQuoted_string(GenieParser::Quoted_stringContext * /*ctx*/) override { }
  virtual void exitQuoted_string(GenieParser::Quoted_stringContext * /*ctx*/) override { }

  virtual void enterDo_start(GenieParser::Do_startContext * /*ctx*/) override { }
  virtual void exitDo_start(GenieParser::Do_startContext * /*ctx*/) override { }

  virtual void enterDo_end(GenieParser::Do_endContext * /*ctx*/) override { }
  virtual void exitDo_end(GenieParser::Do_endContext * /*ctx*/) override { }

  virtual void enterDo_loop(GenieParser::Do_loopContext * /*ctx*/) override { }
  virtual void exitDo_loop(GenieParser::Do_loopContext * /*ctx*/) override { }

  virtual void enterDo_action(GenieParser::Do_actionContext * /*ctx*/) override { }
  virtual void exitDo_action(GenieParser::Do_actionContext * /*ctx*/) override { }

  virtual void enterDo_set(GenieParser::Do_setContext * /*ctx*/) override { }
  virtual void exitDo_set(GenieParser::Do_setContext * /*ctx*/) override { }

  virtual void enterDo_statement(GenieParser::Do_statementContext * /*ctx*/) override { }
  virtual void exitDo_statement(GenieParser::Do_statementContext * /*ctx*/) override { }

  virtual void enterDo_ffi(GenieParser::Do_ffiContext * /*ctx*/) override { }
  virtual void exitDo_ffi(GenieParser::Do_ffiContext * /*ctx*/) override { }

  virtual void enterDo_code(GenieParser::Do_codeContext * /*ctx*/) override { }
  virtual void exitDo_code(GenieParser::Do_codeContext * /*ctx*/) override { }

  virtual void enterDo_multiline_string(GenieParser::Do_multiline_stringContext * /*ctx*/) override { }
  virtual void exitDo_multiline_string(GenieParser::Do_multiline_stringContext * /*ctx*/) override { }

  virtual void enterAction_text(GenieParser::Action_textContext * /*ctx*/) override { }
  virtual void exitAction_text(GenieParser::Action_textContext * /*ctx*/) override { }

  virtual void enterScenario_decl(GenieParser::Scenario_declContext * /*ctx*/) override { }
  virtual void exitScenario_decl(GenieParser::Scenario_declContext * /*ctx*/) override { }

  virtual void enterBackground_decl(GenieParser::Background_declContext * /*ctx*/) override { }
  virtual void exitBackground_decl(GenieParser::Background_declContext * /*ctx*/) override { }

  virtual void enterFragment_decl(GenieParser::Fragment_declContext * /*ctx*/) override { }
  virtual void exitFragment_decl(GenieParser::Fragment_declContext * /*ctx*/) override { }

  virtual void enterFragment_decl2(GenieParser::Fragment_decl2Context * /*ctx*/) override { }
  virtual void exitFragment_decl2(GenieParser::Fragment_decl2Context * /*ctx*/) override { }

  virtual void enterTag_defn(GenieParser::Tag_defnContext * /*ctx*/) override { }
  virtual void exitTag_defn(GenieParser::Tag_defnContext * /*ctx*/) override { }

  virtual void enterFragment_defn(GenieParser::Fragment_defnContext * /*ctx*/) override { }
  virtual void exitFragment_defn(GenieParser::Fragment_defnContext * /*ctx*/) override { }

  virtual void enterBackground_defn(GenieParser::Background_defnContext * /*ctx*/) override { }
  virtual void exitBackground_defn(GenieParser::Background_defnContext * /*ctx*/) override { }

  virtual void enterScenario_defn(GenieParser::Scenario_defnContext * /*ctx*/) override { }
  virtual void exitScenario_defn(GenieParser::Scenario_defnContext * /*ctx*/) override { }

  virtual void enterNote_decl(GenieParser::Note_declContext * /*ctx*/) override { }
  virtual void exitNote_decl(GenieParser::Note_declContext * /*ctx*/) override { }

  virtual void enterNote_defn(GenieParser::Note_defnContext * /*ctx*/) override { }
  virtual void exitNote_defn(GenieParser::Note_defnContext * /*ctx*/) override { }

  virtual void enterNote_text(GenieParser::Note_textContext * /*ctx*/) override { }
  virtual void exitNote_text(GenieParser::Note_textContext * /*ctx*/) override { }

  virtual void enterFeature_defn(GenieParser::Feature_defnContext * /*ctx*/) override { }
  virtual void exitFeature_defn(GenieParser::Feature_defnContext * /*ctx*/) override { }

  virtual void enterFeature_file(GenieParser::Feature_fileContext * /*ctx*/) override { }
  virtual void exitFeature_file(GenieParser::Feature_fileContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

