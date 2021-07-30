
// Generated from /Users/ramneekhanda/workspace/genie/grammar/GenieLexer.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  GenieLexer : public antlr4::Lexer {
public:
  enum {
    FRAGMENT = 1, BACKGROUND = 2, FEATURE = 3, TAGS = 4, SCENARIO = 5, STRING_QUOTES_OPEN = 6, 
    DO = 7, ACT = 8, DONE = 9, WS = 10, EOLN = 11, COLN = 12, PACKAGE_VERSION_SPLITTER = 13, 
    LIST_ITEM = 14, SINGLE_LINE_COMMENT = 15, NOTE = 16, SET = 17, AS = 18, 
    NUMBER = 19, START_MULTILINE_TEXT = 20, WS_SET = 21, EOLN_SET = 22, 
    IDENTIFIER = 23, STR_TEXT = 24, ESC_SEQ = 25, EOL = 26, END_MULTILINE_TEXT = 27, 
    WORD = 28, ESC_QUOTE = 29, ESC_BACKSLASH = 30, SIMPLE_QUOTE = 31, STRING_QUOTES_CLOSE = 32, 
    EOT = 33, TAG_WORD = 34, WS_TAGS = 35, EON = 36, NOTE_TEXT = 37, WS_NOTE = 38, 
    EOLN_NOTE = 39, COLN_NOTE = 40, EOA = 41, ACTION_TEXT = 42, EOC = 43, 
    COMMENT_TEXT = 44, INT = 45, TIMES = 46, WS_DO = 47
  };

  enum {
    In_Set = 1, In_MultiLineText = 2, In_Quotes = 3, In_Tags = 4, In_Note = 5, 
    In_Act = 6, In_Comment = 7, In_Do = 8
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

