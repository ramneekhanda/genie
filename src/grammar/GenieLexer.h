
// Generated from grammar/Genie.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"




class  GenieLexer : public antlr4::Lexer {
public:
  enum {
    FEATURE = 1, REQUIRES = 2, PARALLELISM = 3, AT = 4, ATTR = 5, SCENARIO = 6, 
    STRING_QUOTES = 7, DO = 8, TIMES = 9, GIVEN = 10, WHEN = 11, NON_ALPHANUM = 12, 
    THEN = 13, AND = 14, BUT = 15, CALL = 16, DONE = 17, INT = 18, WORD = 19, 
    WS = 20, EOLN = 21, PACKAGE_VERSION_SPLITTER = 22, LIST_ITEM = 23, SINGLE_LINE_COMMENT = 24
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

