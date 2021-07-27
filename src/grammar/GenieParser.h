
// Generated from /Users/ramneekhanda/workspace/genie/grammar/Genie.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  GenieParser : public antlr4::Parser {
public:
  enum {
    FEATURE = 1, REQUIRES = 2, PARALLELISM = 3, AT = 4, ATTR = 5, SCENARIO = 6, 
    STRING_QUOTES = 7, DO = 8, TIMES = 9, GIVEN = 10, WHEN = 11, THEN = 12, 
    AND = 13, BUT = 14, CALL = 15, DONE = 16, INT = 17, WORD = 18, WS = 19, 
    EOLN = 20, PACKAGE_VERSION_SPLITTER = 21, LIST_ITEM = 22, SINGLE_LINE_COMMENT = 23, 
    ESC_QUOTE = 24, ESC_BACKSLASH = 25
  };

  enum {
    RuleQuoted_words = 0, RuleFeature_defn = 1, RulePackage_defn = 2, RuleRequires_single_line = 3, 
    RuleRequires_multi_line = 4, RuleRequires_defn = 5, RuleParallelism_defn = 6, 
    RuleScenario_decl = 7, RuleDo_start = 8, RuleDo_end = 9, RuleDo_loop = 10, 
    RuleDo_action = 11, RuleDo_statement = 12, RuleScenario_defn = 13, RuleCommented_lines = 14, 
    RuleFeature_file = 15
  };

  explicit GenieParser(antlr4::TokenStream *input);
  ~GenieParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class Quoted_wordsContext;
  class Feature_defnContext;
  class Package_defnContext;
  class Requires_single_lineContext;
  class Requires_multi_lineContext;
  class Requires_defnContext;
  class Parallelism_defnContext;
  class Scenario_declContext;
  class Do_startContext;
  class Do_endContext;
  class Do_loopContext;
  class Do_actionContext;
  class Do_statementContext;
  class Scenario_defnContext;
  class Commented_linesContext;
  class Feature_fileContext; 

  class  Quoted_wordsContext : public antlr4::ParserRuleContext {
  public:
    Quoted_wordsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> STRING_QUOTES();
    antlr4::tree::TerminalNode* STRING_QUOTES(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ESC_QUOTE();
    antlr4::tree::TerminalNode* ESC_QUOTE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WORD();
    antlr4::tree::TerminalNode* WORD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ESC_BACKSLASH();
    antlr4::tree::TerminalNode* ESC_BACKSLASH(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Quoted_wordsContext* quoted_words();

  class  Feature_defnContext : public antlr4::ParserRuleContext {
  public:
    Feature_defnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FEATURE();
    Quoted_wordsContext *quoted_words();
    std::vector<Commented_linesContext *> commented_lines();
    Commented_linesContext* commented_lines(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Feature_defnContext* feature_defn();

  class  Package_defnContext : public antlr4::ParserRuleContext {
  public:
    Package_defnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> WORD();
    antlr4::tree::TerminalNode* WORD(size_t i);
    antlr4::tree::TerminalNode *PACKAGE_VERSION_SPLITTER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Package_defnContext* package_defn();

  class  Requires_single_lineContext : public antlr4::ParserRuleContext {
  public:
    Requires_single_lineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REQUIRES();
    Package_defnContext *package_defn();
    std::vector<Commented_linesContext *> commented_lines();
    Commented_linesContext* commented_lines(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Requires_single_lineContext* requires_single_line();

  class  Requires_multi_lineContext : public antlr4::ParserRuleContext {
  public:
    Requires_multi_lineContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REQUIRES();
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);
    std::vector<Commented_linesContext *> commented_lines();
    Commented_linesContext* commented_lines(size_t i);
    std::vector<antlr4::tree::TerminalNode *> LIST_ITEM();
    antlr4::tree::TerminalNode* LIST_ITEM(size_t i);
    std::vector<Package_defnContext *> package_defn();
    Package_defnContext* package_defn(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Requires_multi_lineContext* requires_multi_line();

  class  Requires_defnContext : public antlr4::ParserRuleContext {
  public:
    Requires_defnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Requires_single_lineContext *requires_single_line();
    Requires_multi_lineContext *requires_multi_line();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Requires_defnContext* requires_defn();

  class  Parallelism_defnContext : public antlr4::ParserRuleContext {
  public:
    Parallelism_defnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PARALLELISM();
    antlr4::tree::TerminalNode *SCENARIO();
    std::vector<Commented_linesContext *> commented_lines();
    Commented_linesContext* commented_lines(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Parallelism_defnContext* parallelism_defn();

  class  Scenario_declContext : public antlr4::ParserRuleContext {
  public:
    Scenario_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SCENARIO();
    Quoted_wordsContext *quoted_words();
    std::vector<Commented_linesContext *> commented_lines();
    Commented_linesContext* commented_lines(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Scenario_declContext* scenario_decl();

  class  Do_startContext : public antlr4::ParserRuleContext {
  public:
    Do_startContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *TIMES();
    std::vector<Commented_linesContext *> commented_lines();
    Commented_linesContext* commented_lines(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Do_startContext* do_start();

  class  Do_endContext : public antlr4::ParserRuleContext {
  public:
    Do_endContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DONE();
    std::vector<Commented_linesContext *> commented_lines();
    Commented_linesContext* commented_lines(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Do_endContext* do_end();

  class  Do_loopContext : public antlr4::ParserRuleContext {
  public:
    Do_loopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Do_startContext *do_start();
    Do_endContext *do_end();
    std::vector<Do_statementContext *> do_statement();
    Do_statementContext* do_statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Do_loopContext* do_loop();

  class  Do_actionContext : public antlr4::ParserRuleContext {
  public:
    Do_actionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GIVEN();
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *THEN();
    antlr4::tree::TerminalNode *BUT();
    antlr4::tree::TerminalNode *CALL();
    antlr4::tree::TerminalNode *AND();
    std::vector<Commented_linesContext *> commented_lines();
    Commented_linesContext* commented_lines(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WORD();
    antlr4::tree::TerminalNode* WORD(size_t i);
    std::vector<Quoted_wordsContext *> quoted_words();
    Quoted_wordsContext* quoted_words(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Do_actionContext* do_action();

  class  Do_statementContext : public antlr4::ParserRuleContext {
  public:
    Do_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Do_loopContext *do_loop();
    Do_actionContext *do_action();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Do_statementContext* do_statement();

  class  Scenario_defnContext : public antlr4::ParserRuleContext {
  public:
    Scenario_defnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Scenario_declContext *scenario_decl();
    std::vector<Commented_linesContext *> commented_lines();
    Commented_linesContext* commented_lines(size_t i);
    std::vector<Do_statementContext *> do_statement();
    Do_statementContext* do_statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Scenario_defnContext* scenario_defn();

  class  Commented_linesContext : public antlr4::ParserRuleContext {
  public:
    Commented_linesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SINGLE_LINE_COMMENT();
    antlr4::tree::TerminalNode* SINGLE_LINE_COMMENT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> WORD();
    antlr4::tree::TerminalNode* WORD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Commented_linesContext* commented_lines();

  class  Feature_fileContext : public antlr4::ParserRuleContext {
  public:
    Feature_fileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Feature_defnContext *feature_defn();
    antlr4::tree::TerminalNode *EOF();
    std::vector<Requires_defnContext *> requires_defn();
    Requires_defnContext* requires_defn(size_t i);
    std::vector<Parallelism_defnContext *> parallelism_defn();
    Parallelism_defnContext* parallelism_defn(size_t i);
    std::vector<Scenario_defnContext *> scenario_defn();
    Scenario_defnContext* scenario_defn(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Feature_fileContext* feature_file();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

