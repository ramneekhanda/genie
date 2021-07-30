
// Generated from /Users/ramneekhanda/workspace/genie/grammar/GenieLexer.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  GenieLexer : public antlr4::Lexer {
public:
  enum {
    FRAGMENT = 1, BACKGROUND = 2, FEATURE = 3, TAGS = 4, SCENARIO = 5, STRING_QUOTES_OPEN = 6, 
    DO = 7, ACT = 8, DONE = 9, WS = 10, EOLN = 11, END = 12, COLN = 13, 
    PACKAGE_VERSION_SPLITTER = 14, LIST_ITEM = 15, SINGLE_LINE_COMMENT = 16, 
    NOTE = 17, SET = 18, LANG_ID = 19, START_CODE = 20, CODE = 21, ESC_SEQ_CODE = 22, 
    EOL_CODE = 23, END_CODE = 24, AS = 25, NUMBER = 26, START_MULTILINE_TEXT = 27, 
    WS_SET = 28, EOLN_SET = 29, IDENTIFIER = 30, STR_TEXT = 31, ESC_SEQ = 32, 
    EOL = 33, END_MULTILINE_TEXT = 34, WORD = 35, ESC_QUOTE = 36, ESC_BACKSLASH = 37, 
    SIMPLE_QUOTE = 38, STRING_QUOTES_CLOSE = 39, EOT = 40, TAG_WORD = 41, 
    WS_TAGS = 42, EON = 43, NOTE_TEXT = 44, WS_NOTE = 45, EOLN_NOTE = 46, 
    COLN_NOTE = 47, EOA = 48, ACTION_TEXT = 49, EOC = 50, COMMENT_TEXT = 51, 
    INT = 52, TIMES = 53, WS_DO = 54
  };

  enum {
    In_Code = 1, In_Set = 2, In_MultiLineText = 3, In_Quotes = 4, In_Tags = 5, 
    In_Note = 6, In_Act = 7, In_Comment = 8, In_Do = 9
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

