
// Generated from /Users/ramneekhanda/workspace/genie/grammar/GenieParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  GenieParser : public antlr4::Parser {
public:
  enum {
    FRAGMENT = 1, BACKGROUND = 2, FEATURE = 3, SCENARIO = 4, TAGS = 5, STRING_QUOTES_OPEN = 6, 
    DO = 7, ACT = 8, DONE = 9, WS = 10, EOLN = 11, END = 12, COLN = 13, 
    LIST_ITEM = 14, NOTE = 15, SET = 16, LANG_ID = 17, START_CODE = 18, 
    CODE = 19, ESC_SEQ_CODE = 20, EOL_CODE = 21, END_CODE = 22, AS = 23, 
    NUMBER = 24, START_MULTILINE_TEXT = 25, SET_STRING_QUOTES_OPEN = 26, 
    WS_SET = 27, EOLN_SET = 28, IDENTIFIER = 29, STR_TEXT = 30, ESC_SEQ = 31, 
    EOL = 32, END_MULTILINE_TEXT = 33, WORD = 34, ESC_QUOTE = 35, ESC_BACKSLASH = 36, 
    SIMPLE_QUOTE = 37, STRING_QUOTES_CLOSE = 38, EOT = 39, TAG_WORD = 40, 
    WS_TAGS = 41, EON = 42, NOTE_TEXT = 43, WS_NOTE = 44, EOLN_NOTE = 45, 
    EOA = 46, ACTION_TEXT = 47, INT = 48, TIMES = 49, WS_DO = 50
  };

  enum {
    RuleQuoted_string = 0, RuleDo_start = 1, RuleDo_end = 2, RuleDo_loop = 3, 
    RuleDo_action = 4, RuleDo_set = 5, RuleDo_statement = 6, RuleDo_ffi = 7, 
    RuleDo_code = 8, RuleDo_multiline_string = 9, RuleAction_text = 10, 
    RuleScenario_decl = 11, RuleBackground_decl = 12, RuleFragment_decl = 13, 
    RuleFragment_decl2 = 14, RuleTag_defn = 15, RuleFragment_defn = 16, 
    RuleBackground_defn = 17, RuleScenario_defn = 18, RuleNote_decl = 19, 
    RuleNote_defn = 20, RuleNote_text = 21, RuleFeature_defn = 22, RuleFeature_file = 23
  };

  explicit GenieParser(antlr4::TokenStream *input);
  ~GenieParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class Quoted_stringContext;
  class Do_startContext;
  class Do_endContext;
  class Do_loopContext;
  class Do_actionContext;
  class Do_setContext;
  class Do_statementContext;
  class Do_ffiContext;
  class Do_codeContext;
  class Do_multiline_stringContext;
  class Action_textContext;
  class Scenario_declContext;
  class Background_declContext;
  class Fragment_declContext;
  class Fragment_decl2Context;
  class Tag_defnContext;
  class Fragment_defnContext;
  class Background_defnContext;
  class Scenario_defnContext;
  class Note_declContext;
  class Note_defnContext;
  class Note_textContext;
  class Feature_defnContext;
  class Feature_fileContext; 

  class  Quoted_stringContext : public antlr4::ParserRuleContext {
  public:
    Quoted_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING_QUOTES_CLOSE();
    antlr4::tree::TerminalNode *SET_STRING_QUOTES_OPEN();
    antlr4::tree::TerminalNode *STRING_QUOTES_OPEN();
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

  Quoted_stringContext* quoted_string();

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
    Action_textContext *action_text();
    antlr4::tree::TerminalNode *EOA();
    antlr4::tree::TerminalNode *ACT();
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Do_actionContext* do_action();

  class  Do_setContext : public antlr4::ParserRuleContext {
  public:
    Do_setContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *AS();
    antlr4::tree::TerminalNode *NUMBER();
    Do_multiline_stringContext *do_multiline_string();
    Quoted_stringContext *quoted_string();
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Do_setContext* do_set();

  class  Do_statementContext : public antlr4::ParserRuleContext {
  public:
    Do_statementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Do_loopContext *do_loop();
    Do_actionContext *do_action();
    Do_setContext *do_set();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Do_statementContext* do_statement();

  class  Do_ffiContext : public antlr4::ParserRuleContext {
  public:
    Do_ffiContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Do_codeContext *do_code();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Do_ffiContext* do_ffi();

  class  Do_codeContext : public antlr4::ParserRuleContext {
  public:
    Do_codeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START_CODE();
    antlr4::tree::TerminalNode *END_CODE();
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CODE();
    antlr4::tree::TerminalNode* CODE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOL_CODE();
    antlr4::tree::TerminalNode* EOL_CODE(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Do_codeContext* do_code();

  class  Do_multiline_stringContext : public antlr4::ParserRuleContext {
  public:
    Do_multiline_stringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START_MULTILINE_TEXT();
    antlr4::tree::TerminalNode *END_MULTILINE_TEXT();
    antlr4::tree::TerminalNode *EOLN_SET();
    std::vector<antlr4::tree::TerminalNode *> STR_TEXT();
    antlr4::tree::TerminalNode* STR_TEXT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOL();
    antlr4::tree::TerminalNode* EOL(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Do_multiline_stringContext* do_multiline_string();

  class  Action_textContext : public antlr4::ParserRuleContext {
  public:
    Action_textContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACTION_TEXT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Action_textContext* action_text();

  class  Scenario_declContext : public antlr4::ParserRuleContext {
  public:
    Scenario_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SCENARIO();
    antlr4::tree::TerminalNode *COLN();
    Quoted_stringContext *quoted_string();
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
    Quoted_stringContext *quoted_string();
    antlr4::tree::TerminalNode *COLN();
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fragment_declContext* fragment_decl();

  class  Fragment_decl2Context : public antlr4::ParserRuleContext {
  public:
    Fragment_decl2Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FRAGMENT();
    Quoted_stringContext *quoted_string();
    antlr4::tree::TerminalNode *LANG_ID();
    antlr4::tree::TerminalNode *COLN();
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Fragment_decl2Context* fragment_decl2();

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
    antlr4::tree::TerminalNode *END();
    Fragment_declContext *fragment_decl();
    Fragment_decl2Context *fragment_decl2();
    Do_ffiContext *do_ffi();
    std::vector<Note_defnContext *> note_defn();
    Note_defnContext* note_defn(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);
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
    antlr4::tree::TerminalNode *END();
    std::vector<Note_defnContext *> note_defn();
    Note_defnContext* note_defn(size_t i);
    std::vector<Do_statementContext *> do_statement();
    Do_statementContext* do_statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Background_defnContext* background_defn();

  class  Scenario_defnContext : public antlr4::ParserRuleContext {
  public:
    Scenario_defnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Scenario_declContext *scenario_decl();
    antlr4::tree::TerminalNode *END();
    std::vector<Note_defnContext *> note_defn();
    Note_defnContext* note_defn(size_t i);
    std::vector<Tag_defnContext *> tag_defn();
    Tag_defnContext* tag_defn(size_t i);
    std::vector<Do_statementContext *> do_statement();
    Do_statementContext* do_statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Scenario_defnContext* scenario_defn();

  class  Note_declContext : public antlr4::ParserRuleContext {
  public:
    Note_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NOTE();
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

  class  Feature_defnContext : public antlr4::ParserRuleContext {
  public:
    Feature_defnContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FEATURE();
    antlr4::tree::TerminalNode *COLN();
    Quoted_stringContext *quoted_string();
    std::vector<Note_defnContext *> note_defn();
    Note_defnContext* note_defn(size_t i);
    std::vector<antlr4::tree::TerminalNode *> EOLN();
    antlr4::tree::TerminalNode* EOLN(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Feature_defnContext* feature_defn();

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

