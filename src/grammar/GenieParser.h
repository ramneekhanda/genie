
// Generated from /Users/ramneekhanda/workspace/genie/grammar/GenieParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  GenieParser : public antlr4::Parser {
public:
  enum {
    FRAGMENT = 1, BACKGROUND = 2, FEATURE = 3, TAGS = 4, SCENARIO = 5, STRING_QUOTES_OPEN = 6, 
    DO = 7, ACT = 8, DONE = 9, WS = 10, EOLN = 11, COLN = 12, PACKAGE_VERSION_SPLITTER = 13, 
    LIST_ITEM = 14, SINGLE_LINE_COMMENT = 15, NOTE = 16, WORD = 17, ESC_QUOTE = 18, 
    ESC_BACKSLASH = 19, SIMPLE_QUOTE = 20, STRING_QUOTES_CLOSE = 21, EOT = 22, 
    TAG_WORD = 23, WS_TAGS = 24, EON = 25, NOTE_TEXT = 26, WS_NOTE = 27, 
    EOLN_NOTE = 28, COLN_NOTE = 29, EOA = 30, ACTION_TEXT = 31, EOC = 32, 
    COMMENT_TEXT = 33, INT = 34, TIMES = 35, WS_DO = 36
  };

  enum {
    RuleQuoted_words = 0, RuleFeature_defn = 1, RuleDo_start = 2, RuleDo_end = 3, 
    RuleDo_loop = 4, RuleDo_action = 5, RuleDo_statement = 6, RuleScenario_decl = 7, 
    RuleBackground_decl = 8, RuleFragment_decl = 9, RuleTag_defn = 10, RuleFragment_defn = 11, 
    RuleBackground_defn = 12, RuleScenario_defn = 13, RuleNote_decl = 14, 
    RuleNote_defn = 15, RuleNote_text = 16, RuleCommented_lines = 17, RuleFeature_file = 18
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
  class Do_startContext;
  class Do_endContext;
  class Do_loopContext;
  class Do_actionContext;
  class Do_statementContext;
  class Scenario_declContext;
  class Background_declContext;
  class Fragment_declContext;
  class Tag_defnContext;
  class Fragment_defnContext;
  class Background_defnContext;
  class Scenario_defnContext;
  class Note_declContext;
  class Note_defnContext;
  class Note_textContext;
  class Commented_linesContext;
  class Feature_fileContext; 

  class  Quoted_wordsContext : public antlr4::ParserRuleContext {
  public:
    Quoted_wordsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_QUOTES_OPEN();
    antlr4::tree::TerminalNode *STRING_QUOTES_CLOSE();
    std::vector<antlr4::tree::TerminalNode *> SIMPLE_QUOTE();
    antlr4::tree::TerminalNode* SIMPLE_QUOTE(size_t i);
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
    antlr4::tree::TerminalNode *COLN();
    Quoted_wordsContext *quoted_words();
    std::vector<Note_defnContext *> note_defn();
    Note_defnContext* note_defn(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Feature_defnContext* feature_defn();

  class  Do_startContext : public antlr4::ParserRuleContext {
  public:
    Do_startContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *TIMES();
    antlr4::tree::TerminalNode *COLN();
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
    antlr4::tree::TerminalNode *EOA();
    antlr4::tree::TerminalNode *ACT();
    std::vector<antlr4::tree::TerminalNode *> ACTION_TEXT();
    antlr4::tree::TerminalNode* ACTION_TEXT(size_t i);
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

  class  Scenario_declContext : public antlr4::ParserRuleContext {
  public:
    Scenario_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SCENARIO();
    antlr4::tree::TerminalNode *COLN();
    Quoted_wordsContext *quoted_words();
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Scenario_declContext* scenario_decl();

  class  Background_declContext : public antlr4::ParserRuleContext {
  public:
    Background_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BACKGROUND();
    antlr4::tree::TerminalNode *COLN();
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Background_declContext* background_decl();

  class  Fragment_declContext : public antlr4::ParserRuleContext {
  public:
    Fragment_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FRAGMENT();
    antlr4::tree::TerminalNode *COLN();
    Quoted_wordsContext *quoted_words();
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fragment_declContext* fragment_decl();

  class  Tag_defnContext : public antlr4::ParserRuleContext {
  public:
    Tag_defnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TAGS();
    antlr4::tree::TerminalNode *EOT();
    std::vector<antlr4::tree::TerminalNode *> TAG_WORD();
    antlr4::tree::TerminalNode* TAG_WORD(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Tag_defnContext* tag_defn();

  class  Fragment_defnContext : public antlr4::ParserRuleContext {
  public:
    Fragment_defnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Fragment_declContext *fragment_decl();
    std::vector<Note_defnContext *> note_defn();
    Note_defnContext* note_defn(size_t i);
    std::vector<Do_statementContext *> do_statement();
    Do_statementContext* do_statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fragment_defnContext* fragment_defn();

  class  Background_defnContext : public antlr4::ParserRuleContext {
  public:
    Background_defnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Background_declContext *background_decl();
    std::vector<Note_defnContext *> note_defn();
    Note_defnContext* note_defn(size_t i);
    std::vector<Do_statementContext *> do_statement();
    Do_statementContext* do_statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Background_defnContext* background_defn();

  class  Scenario_defnContext : public antlr4::ParserRuleContext {
  public:
    Scenario_defnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Scenario_declContext *scenario_decl();
    std::vector<Note_defnContext *> note_defn();
    Note_defnContext* note_defn(size_t i);
    std::vector<Tag_defnContext *> tag_defn();
    Tag_defnContext* tag_defn(size_t i);
    std::vector<Do_statementContext *> do_statement();
    Do_statementContext* do_statement(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Scenario_defnContext* scenario_defn();

  class  Note_declContext : public antlr4::ParserRuleContext {
  public:
    Note_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOTE();
    antlr4::tree::TerminalNode *COLN_NOTE();
    std::vector<Note_textContext *> note_text();
    Note_textContext* note_text(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Note_declContext* note_decl();

  class  Note_defnContext : public antlr4::ParserRuleContext {
  public:
    Note_defnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Note_declContext *note_decl();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Note_defnContext* note_defn();

  class  Note_textContext : public antlr4::ParserRuleContext {
  public:
    Note_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EON();
    std::vector<antlr4::tree::TerminalNode *> NOTE_TEXT();
    antlr4::tree::TerminalNode* NOTE_TEXT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOLN_NOTE();
    antlr4::tree::TerminalNode* EOLN_NOTE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Note_textContext* note_text();

  class  Commented_linesContext : public antlr4::ParserRuleContext {
  public:
    Commented_linesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> SINGLE_LINE_COMMENT();
    antlr4::tree::TerminalNode* SINGLE_LINE_COMMENT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOC();
    antlr4::tree::TerminalNode* EOC(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMENT_TEXT();
    antlr4::tree::TerminalNode* COMMENT_TEXT(size_t i);

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
    Background_defnContext *background_defn();
    std::vector<Fragment_defnContext *> fragment_defn();
    Fragment_defnContext* fragment_defn(size_t i);
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

