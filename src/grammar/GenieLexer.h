
// Generated from /Users/ramneekhanda/workspace/genie/grammar/GenieLexer.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  GenieLexer : public antlr4::Lexer {
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
    In_Code = 1, In_Set = 2, In_MultiLineText = 3, In_Quotes = 4, In_Tags = 5, 
    In_Note = 6, In_Act = 7, In_Do = 8
  };

  explicit GenieLexer(antlr4::CharStream *input);
  ~GenieLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

