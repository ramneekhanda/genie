
// Generated from /Users/ramneekhanda/workspace/genie/grammar/GenieLexer.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  GenieLexer : public antlr4::Lexer {
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
    In_Quotes = 1, In_Tags = 2, In_Note = 3, In_Act = 4, In_Comment = 5, 
    In_Do = 6
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

