
// Generated from /Users/ramneekhanda/workspace/genie/grammar/GenieParser.g4 by ANTLR 4.9.2


#include "GenieParserListener.h"

#include "GenieParser.h"


using namespace antlrcpp;
using namespace antlr4;

GenieParser::GenieParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

GenieParser::~GenieParser() {
  delete _interpreter;
}

std::string GenieParser::getGrammarFileName() const {
  return "GenieParser.g4";
}

const std::vector<std::string>& GenieParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& GenieParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- Quoted_wordsContext ------------------------------------------------------------------

GenieParser::Quoted_wordsContext::Quoted_wordsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GenieParser::Quoted_wordsContext::STRING_QUOTES_OPEN() {
  return getToken(GenieParser::STRING_QUOTES_OPEN, 0);
}

tree::TerminalNode* GenieParser::Quoted_wordsContext::STRING_QUOTES_CLOSE() {
  return getToken(GenieParser::STRING_QUOTES_CLOSE, 0);
}

std::vector<tree::TerminalNode *> GenieParser::Quoted_wordsContext::SIMPLE_QUOTE() {
  return getTokens(GenieParser::SIMPLE_QUOTE);
}

tree::TerminalNode* GenieParser::Quoted_wordsContext::SIMPLE_QUOTE(size_t i) {
  return getToken(GenieParser::SIMPLE_QUOTE, i);
}

std::vector<tree::TerminalNode *> GenieParser::Quoted_wordsContext::ESC_QUOTE() {
  return getTokens(GenieParser::ESC_QUOTE);
}

tree::TerminalNode* GenieParser::Quoted_wordsContext::ESC_QUOTE(size_t i) {
  return getToken(GenieParser::ESC_QUOTE, i);
}

std::vector<tree::TerminalNode *> GenieParser::Quoted_wordsContext::WORD() {
  return getTokens(GenieParser::WORD);
}

tree::TerminalNode* GenieParser::Quoted_wordsContext::WORD(size_t i) {
  return getToken(GenieParser::WORD, i);
}

std::vector<tree::TerminalNode *> GenieParser::Quoted_wordsContext::ESC_BACKSLASH() {
  return getTokens(GenieParser::ESC_BACKSLASH);
}

tree::TerminalNode* GenieParser::Quoted_wordsContext::ESC_BACKSLASH(size_t i) {
  return getToken(GenieParser::ESC_BACKSLASH, i);
}


size_t GenieParser::Quoted_wordsContext::getRuleIndex() const {
  return GenieParser::RuleQuoted_words;
}

void GenieParser::Quoted_wordsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuoted_words(this);
}

void GenieParser::Quoted_wordsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuoted_words(this);
}

GenieParser::Quoted_wordsContext* GenieParser::quoted_words() {
  Quoted_wordsContext *_localctx = _tracker.createInstance<Quoted_wordsContext>(_ctx, getState());
  enterRule(_localctx, 0, GenieParser::RuleQuoted_words);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(44);
    match(GenieParser::STRING_QUOTES_OPEN);
    setState(48);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GenieParser::WORD)
      | (1ULL << GenieParser::ESC_QUOTE)
      | (1ULL << GenieParser::ESC_BACKSLASH)
      | (1ULL << GenieParser::SIMPLE_QUOTE))) != 0)) {
      setState(45);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << GenieParser::WORD)
        | (1ULL << GenieParser::ESC_QUOTE)
        | (1ULL << GenieParser::ESC_BACKSLASH)
        | (1ULL << GenieParser::SIMPLE_QUOTE))) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(50);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(51);
    match(GenieParser::STRING_QUOTES_CLOSE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Feature_defnContext ------------------------------------------------------------------

GenieParser::Feature_defnContext::Feature_defnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GenieParser::Feature_defnContext::FEATURE() {
  return getToken(GenieParser::FEATURE, 0);
}

tree::TerminalNode* GenieParser::Feature_defnContext::COLN() {
  return getToken(GenieParser::COLN, 0);
}

GenieParser::Quoted_wordsContext* GenieParser::Feature_defnContext::quoted_words() {
  return getRuleContext<GenieParser::Quoted_wordsContext>(0);
}

std::vector<GenieParser::Note_defnContext *> GenieParser::Feature_defnContext::note_defn() {
  return getRuleContexts<GenieParser::Note_defnContext>();
}

GenieParser::Note_defnContext* GenieParser::Feature_defnContext::note_defn(size_t i) {
  return getRuleContext<GenieParser::Note_defnContext>(i);
}

std::vector<tree::TerminalNode *> GenieParser::Feature_defnContext::EOLN() {
  return getTokens(GenieParser::EOLN);
}

tree::TerminalNode* GenieParser::Feature_defnContext::EOLN(size_t i) {
  return getToken(GenieParser::EOLN, i);
}


size_t GenieParser::Feature_defnContext::getRuleIndex() const {
  return GenieParser::RuleFeature_defn;
}

void GenieParser::Feature_defnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFeature_defn(this);
}

void GenieParser::Feature_defnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFeature_defn(this);
}

GenieParser::Feature_defnContext* GenieParser::feature_defn() {
  Feature_defnContext *_localctx = _tracker.createInstance<Feature_defnContext>(_ctx, getState());
  enterRule(_localctx, 2, GenieParser::RuleFeature_defn);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GenieParser::NOTE) {
      setState(53);
      note_defn();
      setState(58);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(59);
    match(GenieParser::FEATURE);
    setState(60);
    match(GenieParser::COLN);
    setState(61);
    quoted_words();
    setState(63); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(62);
      match(GenieParser::EOLN);
      setState(65); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == GenieParser::EOLN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Do_startContext ------------------------------------------------------------------

GenieParser::Do_startContext::Do_startContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GenieParser::Do_startContext::DO() {
  return getToken(GenieParser::DO, 0);
}

tree::TerminalNode* GenieParser::Do_startContext::INT() {
  return getToken(GenieParser::INT, 0);
}

tree::TerminalNode* GenieParser::Do_startContext::TIMES() {
  return getToken(GenieParser::TIMES, 0);
}

tree::TerminalNode* GenieParser::Do_startContext::COLN() {
  return getToken(GenieParser::COLN, 0);
}

std::vector<tree::TerminalNode *> GenieParser::Do_startContext::EOLN() {
  return getTokens(GenieParser::EOLN);
}

tree::TerminalNode* GenieParser::Do_startContext::EOLN(size_t i) {
  return getToken(GenieParser::EOLN, i);
}


size_t GenieParser::Do_startContext::getRuleIndex() const {
  return GenieParser::RuleDo_start;
}

void GenieParser::Do_startContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDo_start(this);
}

void GenieParser::Do_startContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDo_start(this);
}

GenieParser::Do_startContext* GenieParser::do_start() {
  Do_startContext *_localctx = _tracker.createInstance<Do_startContext>(_ctx, getState());
  enterRule(_localctx, 4, GenieParser::RuleDo_start);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    match(GenieParser::DO);
    setState(68);
    match(GenieParser::INT);
    setState(69);
    match(GenieParser::TIMES);
    setState(70);
    match(GenieParser::COLN);
    setState(72); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(71);
      match(GenieParser::EOLN);
      setState(74); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == GenieParser::EOLN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Do_endContext ------------------------------------------------------------------

GenieParser::Do_endContext::Do_endContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GenieParser::Do_endContext::DONE() {
  return getToken(GenieParser::DONE, 0);
}

std::vector<tree::TerminalNode *> GenieParser::Do_endContext::EOLN() {
  return getTokens(GenieParser::EOLN);
}

tree::TerminalNode* GenieParser::Do_endContext::EOLN(size_t i) {
  return getToken(GenieParser::EOLN, i);
}


size_t GenieParser::Do_endContext::getRuleIndex() const {
  return GenieParser::RuleDo_end;
}

void GenieParser::Do_endContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDo_end(this);
}

void GenieParser::Do_endContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDo_end(this);
}

GenieParser::Do_endContext* GenieParser::do_end() {
  Do_endContext *_localctx = _tracker.createInstance<Do_endContext>(_ctx, getState());
  enterRule(_localctx, 6, GenieParser::RuleDo_end);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(76);
    match(GenieParser::DONE);
    setState(78); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(77);
      match(GenieParser::EOLN);
      setState(80); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == GenieParser::EOLN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Do_loopContext ------------------------------------------------------------------

GenieParser::Do_loopContext::Do_loopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GenieParser::Do_startContext* GenieParser::Do_loopContext::do_start() {
  return getRuleContext<GenieParser::Do_startContext>(0);
}

GenieParser::Do_endContext* GenieParser::Do_loopContext::do_end() {
  return getRuleContext<GenieParser::Do_endContext>(0);
}

std::vector<GenieParser::Do_statementContext *> GenieParser::Do_loopContext::do_statement() {
  return getRuleContexts<GenieParser::Do_statementContext>();
}

GenieParser::Do_statementContext* GenieParser::Do_loopContext::do_statement(size_t i) {
  return getRuleContext<GenieParser::Do_statementContext>(i);
}


size_t GenieParser::Do_loopContext::getRuleIndex() const {
  return GenieParser::RuleDo_loop;
}

void GenieParser::Do_loopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDo_loop(this);
}

void GenieParser::Do_loopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDo_loop(this);
}

GenieParser::Do_loopContext* GenieParser::do_loop() {
  Do_loopContext *_localctx = _tracker.createInstance<Do_loopContext>(_ctx, getState());
  enterRule(_localctx, 8, GenieParser::RuleDo_loop);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    do_start();
    setState(86);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GenieParser::DO)
      | (1ULL << GenieParser::ACT)
      | (1ULL << GenieParser::SET))) != 0)) {
      setState(83);
      do_statement();
      setState(88);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(89);
    do_end();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Do_actionContext ------------------------------------------------------------------

GenieParser::Do_actionContext::Do_actionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GenieParser::Action_textContext* GenieParser::Do_actionContext::action_text() {
  return getRuleContext<GenieParser::Action_textContext>(0);
}

tree::TerminalNode* GenieParser::Do_actionContext::EOA() {
  return getToken(GenieParser::EOA, 0);
}

tree::TerminalNode* GenieParser::Do_actionContext::ACT() {
  return getToken(GenieParser::ACT, 0);
}

std::vector<tree::TerminalNode *> GenieParser::Do_actionContext::EOLN() {
  return getTokens(GenieParser::EOLN);
}

tree::TerminalNode* GenieParser::Do_actionContext::EOLN(size_t i) {
  return getToken(GenieParser::EOLN, i);
}


size_t GenieParser::Do_actionContext::getRuleIndex() const {
  return GenieParser::RuleDo_action;
}

void GenieParser::Do_actionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDo_action(this);
}

void GenieParser::Do_actionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDo_action(this);
}

GenieParser::Do_actionContext* GenieParser::do_action() {
  Do_actionContext *_localctx = _tracker.createInstance<Do_actionContext>(_ctx, getState());
  enterRule(_localctx, 10, GenieParser::RuleDo_action);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(91);
    match(GenieParser::ACT);
    setState(92);
    action_text();
    setState(93);
    match(GenieParser::EOA);
    setState(97);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GenieParser::EOLN) {
      setState(94);
      match(GenieParser::EOLN);
      setState(99);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Do_setContext ------------------------------------------------------------------

GenieParser::Do_setContext::Do_setContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GenieParser::Do_setContext::SET() {
  return getToken(GenieParser::SET, 0);
}

tree::TerminalNode* GenieParser::Do_setContext::IDENTIFIER() {
  return getToken(GenieParser::IDENTIFIER, 0);
}

tree::TerminalNode* GenieParser::Do_setContext::AS() {
  return getToken(GenieParser::AS, 0);
}

tree::TerminalNode* GenieParser::Do_setContext::NUMBER() {
  return getToken(GenieParser::NUMBER, 0);
}

GenieParser::Do_multiline_stringContext* GenieParser::Do_setContext::do_multiline_string() {
  return getRuleContext<GenieParser::Do_multiline_stringContext>(0);
}

std::vector<tree::TerminalNode *> GenieParser::Do_setContext::EOLN() {
  return getTokens(GenieParser::EOLN);
}

tree::TerminalNode* GenieParser::Do_setContext::EOLN(size_t i) {
  return getToken(GenieParser::EOLN, i);
}


size_t GenieParser::Do_setContext::getRuleIndex() const {
  return GenieParser::RuleDo_set;
}

void GenieParser::Do_setContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDo_set(this);
}

void GenieParser::Do_setContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDo_set(this);
}

GenieParser::Do_setContext* GenieParser::do_set() {
  Do_setContext *_localctx = _tracker.createInstance<Do_setContext>(_ctx, getState());
  enterRule(_localctx, 12, GenieParser::RuleDo_set);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    match(GenieParser::SET);
    setState(101);
    match(GenieParser::IDENTIFIER);
    setState(102);
    match(GenieParser::AS);
    setState(105);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GenieParser::NUMBER: {
        setState(103);
        match(GenieParser::NUMBER);
        break;
      }

      case GenieParser::START_MULTILINE_TEXT:
      case GenieParser::EOLN_SET: {
        setState(104);
        do_multiline_string();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(108); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(107);
      match(GenieParser::EOLN);
      setState(110); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == GenieParser::EOLN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Do_statementContext ------------------------------------------------------------------

GenieParser::Do_statementContext::Do_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GenieParser::Do_loopContext* GenieParser::Do_statementContext::do_loop() {
  return getRuleContext<GenieParser::Do_loopContext>(0);
}

GenieParser::Do_actionContext* GenieParser::Do_statementContext::do_action() {
  return getRuleContext<GenieParser::Do_actionContext>(0);
}

GenieParser::Do_setContext* GenieParser::Do_statementContext::do_set() {
  return getRuleContext<GenieParser::Do_setContext>(0);
}


size_t GenieParser::Do_statementContext::getRuleIndex() const {
  return GenieParser::RuleDo_statement;
}

void GenieParser::Do_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDo_statement(this);
}

void GenieParser::Do_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDo_statement(this);
}

GenieParser::Do_statementContext* GenieParser::do_statement() {
  Do_statementContext *_localctx = _tracker.createInstance<Do_statementContext>(_ctx, getState());
  enterRule(_localctx, 14, GenieParser::RuleDo_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(115);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GenieParser::DO: {
        enterOuterAlt(_localctx, 1);
        setState(112);
        do_loop();
        break;
      }

      case GenieParser::ACT: {
        enterOuterAlt(_localctx, 2);
        setState(113);
        do_action();
        break;
      }

      case GenieParser::SET: {
        enterOuterAlt(_localctx, 3);
        setState(114);
        do_set();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Do_multiline_stringContext ------------------------------------------------------------------

GenieParser::Do_multiline_stringContext::Do_multiline_stringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GenieParser::Do_multiline_stringContext::START_MULTILINE_TEXT() {
  return getToken(GenieParser::START_MULTILINE_TEXT, 0);
}

tree::TerminalNode* GenieParser::Do_multiline_stringContext::END_MULTILINE_TEXT() {
  return getToken(GenieParser::END_MULTILINE_TEXT, 0);
}

tree::TerminalNode* GenieParser::Do_multiline_stringContext::EOLN_SET() {
  return getToken(GenieParser::EOLN_SET, 0);
}

std::vector<tree::TerminalNode *> GenieParser::Do_multiline_stringContext::STR_TEXT() {
  return getTokens(GenieParser::STR_TEXT);
}

tree::TerminalNode* GenieParser::Do_multiline_stringContext::STR_TEXT(size_t i) {
  return getToken(GenieParser::STR_TEXT, i);
}

std::vector<tree::TerminalNode *> GenieParser::Do_multiline_stringContext::EOL() {
  return getTokens(GenieParser::EOL);
}

tree::TerminalNode* GenieParser::Do_multiline_stringContext::EOL(size_t i) {
  return getToken(GenieParser::EOL, i);
}


size_t GenieParser::Do_multiline_stringContext::getRuleIndex() const {
  return GenieParser::RuleDo_multiline_string;
}

void GenieParser::Do_multiline_stringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDo_multiline_string(this);
}

void GenieParser::Do_multiline_stringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDo_multiline_string(this);
}

GenieParser::Do_multiline_stringContext* GenieParser::do_multiline_string() {
  Do_multiline_stringContext *_localctx = _tracker.createInstance<Do_multiline_stringContext>(_ctx, getState());
  enterRule(_localctx, 16, GenieParser::RuleDo_multiline_string);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(118);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GenieParser::EOLN_SET) {
      setState(117);
      match(GenieParser::EOLN_SET);
    }
    setState(120);
    match(GenieParser::START_MULTILINE_TEXT);
    setState(124);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GenieParser::STR_TEXT

    || _la == GenieParser::EOL) {
      setState(121);
      _la = _input->LA(1);
      if (!(_la == GenieParser::STR_TEXT

      || _la == GenieParser::EOL)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(126);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(127);
    match(GenieParser::END_MULTILINE_TEXT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Action_textContext ------------------------------------------------------------------

GenieParser::Action_textContext::Action_textContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GenieParser::Action_textContext::ACTION_TEXT() {
  return getToken(GenieParser::ACTION_TEXT, 0);
}


size_t GenieParser::Action_textContext::getRuleIndex() const {
  return GenieParser::RuleAction_text;
}

void GenieParser::Action_textContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAction_text(this);
}

void GenieParser::Action_textContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAction_text(this);
}

GenieParser::Action_textContext* GenieParser::action_text() {
  Action_textContext *_localctx = _tracker.createInstance<Action_textContext>(_ctx, getState());
  enterRule(_localctx, 18, GenieParser::RuleAction_text);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    match(GenieParser::ACTION_TEXT);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Scenario_declContext ------------------------------------------------------------------

GenieParser::Scenario_declContext::Scenario_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GenieParser::Scenario_declContext::SCENARIO() {
  return getToken(GenieParser::SCENARIO, 0);
}

tree::TerminalNode* GenieParser::Scenario_declContext::COLN() {
  return getToken(GenieParser::COLN, 0);
}

GenieParser::Quoted_wordsContext* GenieParser::Scenario_declContext::quoted_words() {
  return getRuleContext<GenieParser::Quoted_wordsContext>(0);
}

std::vector<tree::TerminalNode *> GenieParser::Scenario_declContext::EOLN() {
  return getTokens(GenieParser::EOLN);
}

tree::TerminalNode* GenieParser::Scenario_declContext::EOLN(size_t i) {
  return getToken(GenieParser::EOLN, i);
}


size_t GenieParser::Scenario_declContext::getRuleIndex() const {
  return GenieParser::RuleScenario_decl;
}

void GenieParser::Scenario_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScenario_decl(this);
}

void GenieParser::Scenario_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScenario_decl(this);
}

GenieParser::Scenario_declContext* GenieParser::scenario_decl() {
  Scenario_declContext *_localctx = _tracker.createInstance<Scenario_declContext>(_ctx, getState());
  enterRule(_localctx, 20, GenieParser::RuleScenario_decl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(GenieParser::SCENARIO);
    setState(132);
    match(GenieParser::COLN);
    setState(133);
    quoted_words();
    setState(135); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(134);
      match(GenieParser::EOLN);
      setState(137); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == GenieParser::EOLN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Background_declContext ------------------------------------------------------------------

GenieParser::Background_declContext::Background_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GenieParser::Background_declContext::BACKGROUND() {
  return getToken(GenieParser::BACKGROUND, 0);
}

tree::TerminalNode* GenieParser::Background_declContext::COLN() {
  return getToken(GenieParser::COLN, 0);
}

std::vector<tree::TerminalNode *> GenieParser::Background_declContext::EOLN() {
  return getTokens(GenieParser::EOLN);
}

tree::TerminalNode* GenieParser::Background_declContext::EOLN(size_t i) {
  return getToken(GenieParser::EOLN, i);
}


size_t GenieParser::Background_declContext::getRuleIndex() const {
  return GenieParser::RuleBackground_decl;
}

void GenieParser::Background_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBackground_decl(this);
}

void GenieParser::Background_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBackground_decl(this);
}

GenieParser::Background_declContext* GenieParser::background_decl() {
  Background_declContext *_localctx = _tracker.createInstance<Background_declContext>(_ctx, getState());
  enterRule(_localctx, 22, GenieParser::RuleBackground_decl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    match(GenieParser::BACKGROUND);
    setState(140);
    match(GenieParser::COLN);
    setState(142); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(141);
      match(GenieParser::EOLN);
      setState(144); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == GenieParser::EOLN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fragment_declContext ------------------------------------------------------------------

GenieParser::Fragment_declContext::Fragment_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GenieParser::Fragment_declContext::FRAGMENT() {
  return getToken(GenieParser::FRAGMENT, 0);
}

tree::TerminalNode* GenieParser::Fragment_declContext::COLN() {
  return getToken(GenieParser::COLN, 0);
}

GenieParser::Quoted_wordsContext* GenieParser::Fragment_declContext::quoted_words() {
  return getRuleContext<GenieParser::Quoted_wordsContext>(0);
}

std::vector<tree::TerminalNode *> GenieParser::Fragment_declContext::EOLN() {
  return getTokens(GenieParser::EOLN);
}

tree::TerminalNode* GenieParser::Fragment_declContext::EOLN(size_t i) {
  return getToken(GenieParser::EOLN, i);
}


size_t GenieParser::Fragment_declContext::getRuleIndex() const {
  return GenieParser::RuleFragment_decl;
}

void GenieParser::Fragment_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFragment_decl(this);
}

void GenieParser::Fragment_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFragment_decl(this);
}

GenieParser::Fragment_declContext* GenieParser::fragment_decl() {
  Fragment_declContext *_localctx = _tracker.createInstance<Fragment_declContext>(_ctx, getState());
  enterRule(_localctx, 24, GenieParser::RuleFragment_decl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(146);
    match(GenieParser::FRAGMENT);
    setState(147);
    match(GenieParser::COLN);
    setState(148);
    quoted_words();
    setState(150); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(149);
      match(GenieParser::EOLN);
      setState(152); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == GenieParser::EOLN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Tag_defnContext ------------------------------------------------------------------

GenieParser::Tag_defnContext::Tag_defnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GenieParser::Tag_defnContext::TAGS() {
  return getToken(GenieParser::TAGS, 0);
}

tree::TerminalNode* GenieParser::Tag_defnContext::EOT() {
  return getToken(GenieParser::EOT, 0);
}

std::vector<tree::TerminalNode *> GenieParser::Tag_defnContext::TAG_WORD() {
  return getTokens(GenieParser::TAG_WORD);
}

tree::TerminalNode* GenieParser::Tag_defnContext::TAG_WORD(size_t i) {
  return getToken(GenieParser::TAG_WORD, i);
}

std::vector<tree::TerminalNode *> GenieParser::Tag_defnContext::EOLN() {
  return getTokens(GenieParser::EOLN);
}

tree::TerminalNode* GenieParser::Tag_defnContext::EOLN(size_t i) {
  return getToken(GenieParser::EOLN, i);
}


size_t GenieParser::Tag_defnContext::getRuleIndex() const {
  return GenieParser::RuleTag_defn;
}

void GenieParser::Tag_defnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTag_defn(this);
}

void GenieParser::Tag_defnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTag_defn(this);
}

GenieParser::Tag_defnContext* GenieParser::tag_defn() {
  Tag_defnContext *_localctx = _tracker.createInstance<Tag_defnContext>(_ctx, getState());
  enterRule(_localctx, 26, GenieParser::RuleTag_defn);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(154);
    match(GenieParser::TAGS);
    setState(158);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GenieParser::TAG_WORD) {
      setState(155);
      match(GenieParser::TAG_WORD);
      setState(160);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(161);
    match(GenieParser::EOT);
    setState(165);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GenieParser::EOLN) {
      setState(162);
      match(GenieParser::EOLN);
      setState(167);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Fragment_defnContext ------------------------------------------------------------------

GenieParser::Fragment_defnContext::Fragment_defnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GenieParser::Fragment_declContext* GenieParser::Fragment_defnContext::fragment_decl() {
  return getRuleContext<GenieParser::Fragment_declContext>(0);
}

std::vector<GenieParser::Note_defnContext *> GenieParser::Fragment_defnContext::note_defn() {
  return getRuleContexts<GenieParser::Note_defnContext>();
}

GenieParser::Note_defnContext* GenieParser::Fragment_defnContext::note_defn(size_t i) {
  return getRuleContext<GenieParser::Note_defnContext>(i);
}

std::vector<GenieParser::Do_statementContext *> GenieParser::Fragment_defnContext::do_statement() {
  return getRuleContexts<GenieParser::Do_statementContext>();
}

GenieParser::Do_statementContext* GenieParser::Fragment_defnContext::do_statement(size_t i) {
  return getRuleContext<GenieParser::Do_statementContext>(i);
}


size_t GenieParser::Fragment_defnContext::getRuleIndex() const {
  return GenieParser::RuleFragment_defn;
}

void GenieParser::Fragment_defnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFragment_defn(this);
}

void GenieParser::Fragment_defnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFragment_defn(this);
}

GenieParser::Fragment_defnContext* GenieParser::fragment_defn() {
  Fragment_defnContext *_localctx = _tracker.createInstance<Fragment_defnContext>(_ctx, getState());
  enterRule(_localctx, 28, GenieParser::RuleFragment_defn);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GenieParser::NOTE) {
      setState(168);
      note_defn();
      setState(173);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(174);
    fragment_decl();
    setState(178);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GenieParser::DO)
      | (1ULL << GenieParser::ACT)
      | (1ULL << GenieParser::SET))) != 0)) {
      setState(175);
      do_statement();
      setState(180);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Background_defnContext ------------------------------------------------------------------

GenieParser::Background_defnContext::Background_defnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GenieParser::Background_declContext* GenieParser::Background_defnContext::background_decl() {
  return getRuleContext<GenieParser::Background_declContext>(0);
}

std::vector<GenieParser::Note_defnContext *> GenieParser::Background_defnContext::note_defn() {
  return getRuleContexts<GenieParser::Note_defnContext>();
}

GenieParser::Note_defnContext* GenieParser::Background_defnContext::note_defn(size_t i) {
  return getRuleContext<GenieParser::Note_defnContext>(i);
}

std::vector<GenieParser::Do_statementContext *> GenieParser::Background_defnContext::do_statement() {
  return getRuleContexts<GenieParser::Do_statementContext>();
}

GenieParser::Do_statementContext* GenieParser::Background_defnContext::do_statement(size_t i) {
  return getRuleContext<GenieParser::Do_statementContext>(i);
}


size_t GenieParser::Background_defnContext::getRuleIndex() const {
  return GenieParser::RuleBackground_defn;
}

void GenieParser::Background_defnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBackground_defn(this);
}

void GenieParser::Background_defnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBackground_defn(this);
}

GenieParser::Background_defnContext* GenieParser::background_defn() {
  Background_defnContext *_localctx = _tracker.createInstance<Background_defnContext>(_ctx, getState());
  enterRule(_localctx, 30, GenieParser::RuleBackground_defn);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(184);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GenieParser::NOTE) {
      setState(181);
      note_defn();
      setState(186);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(187);
    background_decl();
    setState(191);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GenieParser::DO)
      | (1ULL << GenieParser::ACT)
      | (1ULL << GenieParser::SET))) != 0)) {
      setState(188);
      do_statement();
      setState(193);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Scenario_defnContext ------------------------------------------------------------------

GenieParser::Scenario_defnContext::Scenario_defnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GenieParser::Scenario_declContext* GenieParser::Scenario_defnContext::scenario_decl() {
  return getRuleContext<GenieParser::Scenario_declContext>(0);
}

std::vector<GenieParser::Note_defnContext *> GenieParser::Scenario_defnContext::note_defn() {
  return getRuleContexts<GenieParser::Note_defnContext>();
}

GenieParser::Note_defnContext* GenieParser::Scenario_defnContext::note_defn(size_t i) {
  return getRuleContext<GenieParser::Note_defnContext>(i);
}

std::vector<GenieParser::Tag_defnContext *> GenieParser::Scenario_defnContext::tag_defn() {
  return getRuleContexts<GenieParser::Tag_defnContext>();
}

GenieParser::Tag_defnContext* GenieParser::Scenario_defnContext::tag_defn(size_t i) {
  return getRuleContext<GenieParser::Tag_defnContext>(i);
}

std::vector<GenieParser::Do_statementContext *> GenieParser::Scenario_defnContext::do_statement() {
  return getRuleContexts<GenieParser::Do_statementContext>();
}

GenieParser::Do_statementContext* GenieParser::Scenario_defnContext::do_statement(size_t i) {
  return getRuleContext<GenieParser::Do_statementContext>(i);
}


size_t GenieParser::Scenario_defnContext::getRuleIndex() const {
  return GenieParser::RuleScenario_defn;
}

void GenieParser::Scenario_defnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScenario_defn(this);
}

void GenieParser::Scenario_defnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScenario_defn(this);
}

GenieParser::Scenario_defnContext* GenieParser::scenario_defn() {
  Scenario_defnContext *_localctx = _tracker.createInstance<Scenario_defnContext>(_ctx, getState());
  enterRule(_localctx, 32, GenieParser::RuleScenario_defn);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(197);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GenieParser::NOTE) {
      setState(194);
      note_defn();
      setState(199);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(203);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GenieParser::TAGS) {
      setState(200);
      tag_defn();
      setState(205);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(206);
    scenario_decl();
    setState(210);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GenieParser::DO)
      | (1ULL << GenieParser::ACT)
      | (1ULL << GenieParser::SET))) != 0)) {
      setState(207);
      do_statement();
      setState(212);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Note_declContext ------------------------------------------------------------------

GenieParser::Note_declContext::Note_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GenieParser::Note_declContext::NOTE() {
  return getToken(GenieParser::NOTE, 0);
}

tree::TerminalNode* GenieParser::Note_declContext::COLN_NOTE() {
  return getToken(GenieParser::COLN_NOTE, 0);
}

std::vector<GenieParser::Note_textContext *> GenieParser::Note_declContext::note_text() {
  return getRuleContexts<GenieParser::Note_textContext>();
}

GenieParser::Note_textContext* GenieParser::Note_declContext::note_text(size_t i) {
  return getRuleContext<GenieParser::Note_textContext>(i);
}

std::vector<tree::TerminalNode *> GenieParser::Note_declContext::EOLN() {
  return getTokens(GenieParser::EOLN);
}

tree::TerminalNode* GenieParser::Note_declContext::EOLN(size_t i) {
  return getToken(GenieParser::EOLN, i);
}


size_t GenieParser::Note_declContext::getRuleIndex() const {
  return GenieParser::RuleNote_decl;
}

void GenieParser::Note_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNote_decl(this);
}

void GenieParser::Note_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNote_decl(this);
}

GenieParser::Note_declContext* GenieParser::note_decl() {
  Note_declContext *_localctx = _tracker.createInstance<Note_declContext>(_ctx, getState());
  enterRule(_localctx, 34, GenieParser::RuleNote_decl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(213);
    match(GenieParser::NOTE);
    setState(214);
    match(GenieParser::COLN_NOTE);
    setState(216); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(215);
      note_text();
      setState(218); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GenieParser::EON)
      | (1ULL << GenieParser::NOTE_TEXT)
      | (1ULL << GenieParser::EOLN_NOTE))) != 0));
    setState(221); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(220);
      match(GenieParser::EOLN);
      setState(223); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == GenieParser::EOLN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Note_defnContext ------------------------------------------------------------------

GenieParser::Note_defnContext::Note_defnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GenieParser::Note_declContext* GenieParser::Note_defnContext::note_decl() {
  return getRuleContext<GenieParser::Note_declContext>(0);
}


size_t GenieParser::Note_defnContext::getRuleIndex() const {
  return GenieParser::RuleNote_defn;
}

void GenieParser::Note_defnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNote_defn(this);
}

void GenieParser::Note_defnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNote_defn(this);
}

GenieParser::Note_defnContext* GenieParser::note_defn() {
  Note_defnContext *_localctx = _tracker.createInstance<Note_defnContext>(_ctx, getState());
  enterRule(_localctx, 36, GenieParser::RuleNote_defn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(225);
    note_decl();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Note_textContext ------------------------------------------------------------------

GenieParser::Note_textContext::Note_textContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GenieParser::Note_textContext::EON() {
  return getToken(GenieParser::EON, 0);
}

std::vector<tree::TerminalNode *> GenieParser::Note_textContext::NOTE_TEXT() {
  return getTokens(GenieParser::NOTE_TEXT);
}

tree::TerminalNode* GenieParser::Note_textContext::NOTE_TEXT(size_t i) {
  return getToken(GenieParser::NOTE_TEXT, i);
}

std::vector<tree::TerminalNode *> GenieParser::Note_textContext::EOLN_NOTE() {
  return getTokens(GenieParser::EOLN_NOTE);
}

tree::TerminalNode* GenieParser::Note_textContext::EOLN_NOTE(size_t i) {
  return getToken(GenieParser::EOLN_NOTE, i);
}


size_t GenieParser::Note_textContext::getRuleIndex() const {
  return GenieParser::RuleNote_text;
}

void GenieParser::Note_textContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNote_text(this);
}

void GenieParser::Note_textContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNote_text(this);
}

GenieParser::Note_textContext* GenieParser::note_text() {
  Note_textContext *_localctx = _tracker.createInstance<Note_textContext>(_ctx, getState());
  enterRule(_localctx, 38, GenieParser::RuleNote_text);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(230);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GenieParser::NOTE_TEXT

    || _la == GenieParser::EOLN_NOTE) {
      setState(227);
      _la = _input->LA(1);
      if (!(_la == GenieParser::NOTE_TEXT

      || _la == GenieParser::EOLN_NOTE)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(232);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(233);
    match(GenieParser::EON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Commented_linesContext ------------------------------------------------------------------

GenieParser::Commented_linesContext::Commented_linesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> GenieParser::Commented_linesContext::SINGLE_LINE_COMMENT() {
  return getTokens(GenieParser::SINGLE_LINE_COMMENT);
}

tree::TerminalNode* GenieParser::Commented_linesContext::SINGLE_LINE_COMMENT(size_t i) {
  return getToken(GenieParser::SINGLE_LINE_COMMENT, i);
}

std::vector<tree::TerminalNode *> GenieParser::Commented_linesContext::EOC() {
  return getTokens(GenieParser::EOC);
}

tree::TerminalNode* GenieParser::Commented_linesContext::EOC(size_t i) {
  return getToken(GenieParser::EOC, i);
}

std::vector<tree::TerminalNode *> GenieParser::Commented_linesContext::EOLN() {
  return getTokens(GenieParser::EOLN);
}

tree::TerminalNode* GenieParser::Commented_linesContext::EOLN(size_t i) {
  return getToken(GenieParser::EOLN, i);
}

std::vector<tree::TerminalNode *> GenieParser::Commented_linesContext::COMMENT_TEXT() {
  return getTokens(GenieParser::COMMENT_TEXT);
}

tree::TerminalNode* GenieParser::Commented_linesContext::COMMENT_TEXT(size_t i) {
  return getToken(GenieParser::COMMENT_TEXT, i);
}


size_t GenieParser::Commented_linesContext::getRuleIndex() const {
  return GenieParser::RuleCommented_lines;
}

void GenieParser::Commented_linesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommented_lines(this);
}

void GenieParser::Commented_linesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommented_lines(this);
}

GenieParser::Commented_linesContext* GenieParser::commented_lines() {
  Commented_linesContext *_localctx = _tracker.createInstance<Commented_linesContext>(_ctx, getState());
  enterRule(_localctx, 40, GenieParser::RuleCommented_lines);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(243); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(235);
      match(GenieParser::SINGLE_LINE_COMMENT);
      setState(239);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == GenieParser::COMMENT_TEXT) {
        setState(236);
        match(GenieParser::COMMENT_TEXT);
        setState(241);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(242);
      match(GenieParser::EOC);
      setState(245); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == GenieParser::SINGLE_LINE_COMMENT);
    setState(250);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GenieParser::EOLN) {
      setState(247);
      match(GenieParser::EOLN);
      setState(252);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Feature_fileContext ------------------------------------------------------------------

GenieParser::Feature_fileContext::Feature_fileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GenieParser::Feature_defnContext* GenieParser::Feature_fileContext::feature_defn() {
  return getRuleContext<GenieParser::Feature_defnContext>(0);
}

tree::TerminalNode* GenieParser::Feature_fileContext::EOF() {
  return getToken(GenieParser::EOF, 0);
}

GenieParser::Background_defnContext* GenieParser::Feature_fileContext::background_defn() {
  return getRuleContext<GenieParser::Background_defnContext>(0);
}

std::vector<GenieParser::Fragment_defnContext *> GenieParser::Feature_fileContext::fragment_defn() {
  return getRuleContexts<GenieParser::Fragment_defnContext>();
}

GenieParser::Fragment_defnContext* GenieParser::Feature_fileContext::fragment_defn(size_t i) {
  return getRuleContext<GenieParser::Fragment_defnContext>(i);
}

std::vector<GenieParser::Scenario_defnContext *> GenieParser::Feature_fileContext::scenario_defn() {
  return getRuleContexts<GenieParser::Scenario_defnContext>();
}

GenieParser::Scenario_defnContext* GenieParser::Feature_fileContext::scenario_defn(size_t i) {
  return getRuleContext<GenieParser::Scenario_defnContext>(i);
}


size_t GenieParser::Feature_fileContext::getRuleIndex() const {
  return GenieParser::RuleFeature_file;
}

void GenieParser::Feature_fileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFeature_file(this);
}

void GenieParser::Feature_fileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFeature_file(this);
}

GenieParser::Feature_fileContext* GenieParser::feature_file() {
  Feature_fileContext *_localctx = _tracker.createInstance<Feature_fileContext>(_ctx, getState());
  enterRule(_localctx, 42, GenieParser::RuleFeature_file);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(253);
    feature_defn();
    setState(255);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx)) {
    case 1: {
      setState(254);
      background_defn();
      break;
    }

    default:
      break;
    }
    setState(260);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(257);
        fragment_defn(); 
      }
      setState(262);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    }
    setState(266);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GenieParser::TAGS)
      | (1ULL << GenieParser::SCENARIO)
      | (1ULL << GenieParser::NOTE))) != 0)) {
      setState(263);
      scenario_defn();
      setState(268);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(269);
    match(GenieParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> GenieParser::_decisionToDFA;
atn::PredictionContextCache GenieParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN GenieParser::_atn;
std::vector<uint16_t> GenieParser::_serializedATN;

std::vector<std::string> GenieParser::_ruleNames = {
  "quoted_words", "feature_defn", "do_start", "do_end", "do_loop", "do_action", 
  "do_set", "do_statement", "do_multiline_string", "action_text", "scenario_decl", 
  "background_decl", "fragment_decl", "tag_defn", "fragment_defn", "background_defn", 
  "scenario_defn", "note_decl", "note_defn", "note_text", "commented_lines", 
  "feature_file"
};

std::vector<std::string> GenieParser::_literalNames = {
  "", "'fragment'", "'background'", "'feature'", "'@tags'", "'scenario'", 
  "", "'do'", "", "'done'", "", "", "", "'/'", "'-'", "'#'", "", "'set'", 
  "'as'", "", "", "", "", "", "", "", "", "", "", "'\\\"'", "'\\\\'", "'\\'", 
  "", "", "", "", "'...'", "", "", "", "", "", "", "", "", "", "'times'"
};

std::vector<std::string> GenieParser::_symbolicNames = {
  "", "FRAGMENT", "BACKGROUND", "FEATURE", "TAGS", "SCENARIO", "STRING_QUOTES_OPEN", 
  "DO", "ACT", "DONE", "WS", "EOLN", "COLN", "PACKAGE_VERSION_SPLITTER", 
  "LIST_ITEM", "SINGLE_LINE_COMMENT", "NOTE", "SET", "AS", "NUMBER", "START_MULTILINE_TEXT", 
  "WS_SET", "EOLN_SET", "IDENTIFIER", "STR_TEXT", "ESC_SEQ", "EOL", "END_MULTILINE_TEXT", 
  "WORD", "ESC_QUOTE", "ESC_BACKSLASH", "SIMPLE_QUOTE", "STRING_QUOTES_CLOSE", 
  "EOT", "TAG_WORD", "WS_TAGS", "EON", "NOTE_TEXT", "WS_NOTE", "EOLN_NOTE", 
  "COLN_NOTE", "EOA", "ACTION_TEXT", "EOC", "COMMENT_TEXT", "INT", "TIMES", 
  "WS_DO"
};

dfa::Vocabulary GenieParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> GenieParser::_tokenNames;

GenieParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x31, 0x112, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x31, 0xa, 0x2, 0xc, 0x2, 
       0xe, 0x2, 0x34, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x7, 0x3, 
       0x39, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x3c, 0xb, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x3, 0x3, 0x6, 0x3, 0x42, 0xa, 0x3, 0xd, 0x3, 0xe, 
       0x3, 0x43, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x6, 
       0x4, 0x4b, 0xa, 0x4, 0xd, 0x4, 0xe, 0x4, 0x4c, 0x3, 0x5, 0x3, 0x5, 
       0x6, 0x5, 0x51, 0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x52, 0x3, 0x6, 0x3, 
       0x6, 0x7, 0x6, 0x57, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x5a, 0xb, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x7, 
       0x7, 0x62, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x65, 0xb, 0x7, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x6c, 0xa, 0x8, 
       0x3, 0x8, 0x6, 0x8, 0x6f, 0xa, 0x8, 0xd, 0x8, 0xe, 0x8, 0x70, 0x3, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x76, 0xa, 0x9, 0x3, 0xa, 0x5, 
       0xa, 0x79, 0xa, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x7d, 0xa, 0xa, 
       0xc, 0xa, 0xe, 0xa, 0x80, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
       0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x6, 0xc, 0x8a, 
       0xa, 0xc, 0xd, 0xc, 0xe, 0xc, 0x8b, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
       0x6, 0xd, 0x91, 0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0x92, 0x3, 0xe, 0x3, 
       0xe, 0x3, 0xe, 0x3, 0xe, 0x6, 0xe, 0x99, 0xa, 0xe, 0xd, 0xe, 0xe, 
       0xe, 0x9a, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0x9f, 0xa, 0xf, 0xc, 0xf, 
       0xe, 0xf, 0xa2, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xa6, 0xa, 
       0xf, 0xc, 0xf, 0xe, 0xf, 0xa9, 0xb, 0xf, 0x3, 0x10, 0x7, 0x10, 0xac, 
       0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xaf, 0xb, 0x10, 0x3, 0x10, 0x3, 
       0x10, 0x7, 0x10, 0xb3, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xb6, 0xb, 
       0x10, 0x3, 0x11, 0x7, 0x11, 0xb9, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 
       0xbc, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0xc0, 0xa, 0x11, 
       0xc, 0x11, 0xe, 0x11, 0xc3, 0xb, 0x11, 0x3, 0x12, 0x7, 0x12, 0xc6, 
       0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0xc9, 0xb, 0x12, 0x3, 0x12, 0x7, 
       0x12, 0xcc, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 0xcf, 0xb, 0x12, 0x3, 
       0x12, 0x3, 0x12, 0x7, 0x12, 0xd3, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 
       0xd6, 0xb, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x6, 0x13, 0xdb, 
       0xa, 0x13, 0xd, 0x13, 0xe, 0x13, 0xdc, 0x3, 0x13, 0x6, 0x13, 0xe0, 
       0xa, 0x13, 0xd, 0x13, 0xe, 0x13, 0xe1, 0x3, 0x14, 0x3, 0x14, 0x3, 
       0x15, 0x7, 0x15, 0xe7, 0xa, 0x15, 0xc, 0x15, 0xe, 0x15, 0xea, 0xb, 
       0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x7, 0x16, 0xf0, 
       0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0xf3, 0xb, 0x16, 0x3, 0x16, 0x6, 
       0x16, 0xf6, 0xa, 0x16, 0xd, 0x16, 0xe, 0x16, 0xf7, 0x3, 0x16, 0x7, 
       0x16, 0xfb, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0xfe, 0xb, 0x16, 0x3, 
       0x17, 0x3, 0x17, 0x5, 0x17, 0x102, 0xa, 0x17, 0x3, 0x17, 0x7, 0x17, 
       0x105, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x108, 0xb, 0x17, 0x3, 0x17, 
       0x7, 0x17, 0x10b, 0xa, 0x17, 0xc, 0x17, 0xe, 0x17, 0x10e, 0xb, 0x17, 
       0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x2, 0x2, 0x18, 0x2, 0x4, 0x6, 0x8, 
       0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 
       0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2, 0x5, 0x3, 0x2, 0x1e, 0x21, 
       0x4, 0x2, 0x1a, 0x1a, 0x1c, 0x1c, 0x4, 0x2, 0x27, 0x27, 0x29, 0x29, 
       0x2, 0x11d, 0x2, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x4, 0x3a, 0x3, 0x2, 0x2, 
       0x2, 0x6, 0x45, 0x3, 0x2, 0x2, 0x2, 0x8, 0x4e, 0x3, 0x2, 0x2, 0x2, 
       0xa, 0x54, 0x3, 0x2, 0x2, 0x2, 0xc, 0x5d, 0x3, 0x2, 0x2, 0x2, 0xe, 
       0x66, 0x3, 0x2, 0x2, 0x2, 0x10, 0x75, 0x3, 0x2, 0x2, 0x2, 0x12, 0x78, 
       0x3, 0x2, 0x2, 0x2, 0x14, 0x83, 0x3, 0x2, 0x2, 0x2, 0x16, 0x85, 0x3, 
       0x2, 0x2, 0x2, 0x18, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x94, 0x3, 0x2, 
       0x2, 0x2, 0x1c, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xad, 0x3, 0x2, 0x2, 
       0x2, 0x20, 0xba, 0x3, 0x2, 0x2, 0x2, 0x22, 0xc7, 0x3, 0x2, 0x2, 0x2, 
       0x24, 0xd7, 0x3, 0x2, 0x2, 0x2, 0x26, 0xe3, 0x3, 0x2, 0x2, 0x2, 0x28, 
       0xe8, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xf5, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xff, 
       0x3, 0x2, 0x2, 0x2, 0x2e, 0x32, 0x7, 0x8, 0x2, 0x2, 0x2f, 0x31, 0x9, 
       0x2, 0x2, 0x2, 0x30, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x31, 0x34, 0x3, 0x2, 
       0x2, 0x2, 0x32, 0x30, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x3, 0x2, 0x2, 
       0x2, 0x33, 0x35, 0x3, 0x2, 0x2, 0x2, 0x34, 0x32, 0x3, 0x2, 0x2, 0x2, 
       0x35, 0x36, 0x7, 0x22, 0x2, 0x2, 0x36, 0x3, 0x3, 0x2, 0x2, 0x2, 0x37, 
       0x39, 0x5, 0x26, 0x14, 0x2, 0x38, 0x37, 0x3, 0x2, 0x2, 0x2, 0x39, 
       0x3c, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x38, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3b, 
       0x3, 0x2, 0x2, 0x2, 0x3b, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3a, 0x3, 
       0x2, 0x2, 0x2, 0x3d, 0x3e, 0x7, 0x5, 0x2, 0x2, 0x3e, 0x3f, 0x7, 0xe, 
       0x2, 0x2, 0x3f, 0x41, 0x5, 0x2, 0x2, 0x2, 0x40, 0x42, 0x7, 0xd, 0x2, 
       0x2, 0x41, 0x40, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 
       0x43, 0x41, 0x3, 0x2, 0x2, 0x2, 0x43, 0x44, 0x3, 0x2, 0x2, 0x2, 0x44, 
       0x5, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x7, 0x9, 0x2, 0x2, 0x46, 0x47, 
       0x7, 0x2f, 0x2, 0x2, 0x47, 0x48, 0x7, 0x30, 0x2, 0x2, 0x48, 0x4a, 
       0x7, 0xe, 0x2, 0x2, 0x49, 0x4b, 0x7, 0xd, 0x2, 0x2, 0x4a, 0x49, 0x3, 
       0x2, 0x2, 0x2, 0x4b, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4a, 0x3, 0x2, 
       0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x7, 0x3, 0x2, 0x2, 
       0x2, 0x4e, 0x50, 0x7, 0xb, 0x2, 0x2, 0x4f, 0x51, 0x7, 0xd, 0x2, 0x2, 
       0x50, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x3, 0x2, 0x2, 0x2, 0x52, 
       0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0x9, 
       0x3, 0x2, 0x2, 0x2, 0x54, 0x58, 0x5, 0x6, 0x4, 0x2, 0x55, 0x57, 0x5, 
       0x10, 0x9, 0x2, 0x56, 0x55, 0x3, 0x2, 0x2, 0x2, 0x57, 0x5a, 0x3, 
       0x2, 0x2, 0x2, 0x58, 0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 0x3, 0x2, 
       0x2, 0x2, 0x59, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x58, 0x3, 0x2, 0x2, 
       0x2, 0x5b, 0x5c, 0x5, 0x8, 0x5, 0x2, 0x5c, 0xb, 0x3, 0x2, 0x2, 0x2, 
       0x5d, 0x5e, 0x7, 0xa, 0x2, 0x2, 0x5e, 0x5f, 0x5, 0x14, 0xb, 0x2, 
       0x5f, 0x63, 0x7, 0x2b, 0x2, 0x2, 0x60, 0x62, 0x7, 0xd, 0x2, 0x2, 
       0x61, 0x60, 0x3, 0x2, 0x2, 0x2, 0x62, 0x65, 0x3, 0x2, 0x2, 0x2, 0x63, 
       0x61, 0x3, 0x2, 0x2, 0x2, 0x63, 0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 0xd, 
       0x3, 0x2, 0x2, 0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x7, 
       0x13, 0x2, 0x2, 0x67, 0x68, 0x7, 0x19, 0x2, 0x2, 0x68, 0x6b, 0x7, 
       0x14, 0x2, 0x2, 0x69, 0x6c, 0x7, 0x15, 0x2, 0x2, 0x6a, 0x6c, 0x5, 
       0x12, 0xa, 0x2, 0x6b, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6a, 0x3, 
       0x2, 0x2, 0x2, 0x6c, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6f, 0x7, 0xd, 
       0x2, 0x2, 0x6e, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x3, 0x2, 0x2, 
       0x2, 0x70, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x70, 0x71, 0x3, 0x2, 0x2, 0x2, 
       0x71, 0xf, 0x3, 0x2, 0x2, 0x2, 0x72, 0x76, 0x5, 0xa, 0x6, 0x2, 0x73, 
       0x76, 0x5, 0xc, 0x7, 0x2, 0x74, 0x76, 0x5, 0xe, 0x8, 0x2, 0x75, 0x72, 
       0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0x74, 0x3, 
       0x2, 0x2, 0x2, 0x76, 0x11, 0x3, 0x2, 0x2, 0x2, 0x77, 0x79, 0x7, 0x18, 
       0x2, 0x2, 0x78, 0x77, 0x3, 0x2, 0x2, 0x2, 0x78, 0x79, 0x3, 0x2, 0x2, 
       0x2, 0x79, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x7e, 0x7, 0x16, 0x2, 
       0x2, 0x7b, 0x7d, 0x9, 0x3, 0x2, 0x2, 0x7c, 0x7b, 0x3, 0x2, 0x2, 0x2, 
       0x7d, 0x80, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7c, 0x3, 0x2, 0x2, 0x2, 0x7e, 
       0x7f, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x81, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7e, 
       0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x7, 0x1d, 0x2, 0x2, 0x82, 0x13, 
       0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x7, 0x2c, 0x2, 0x2, 0x84, 0x15, 
       0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x7, 0x7, 0x2, 0x2, 0x86, 0x87, 0x7, 
       0xe, 0x2, 0x2, 0x87, 0x89, 0x5, 0x2, 0x2, 0x2, 0x88, 0x8a, 0x7, 0xd, 
       0x2, 0x2, 0x89, 0x88, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 
       0x2, 0x8b, 0x89, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8c, 0x3, 0x2, 0x2, 0x2, 
       0x8c, 0x17, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0x4, 0x2, 0x2, 0x8e, 
       0x90, 0x7, 0xe, 0x2, 0x2, 0x8f, 0x91, 0x7, 0xd, 0x2, 0x2, 0x90, 0x8f, 
       0x3, 0x2, 0x2, 0x2, 0x91, 0x92, 0x3, 0x2, 0x2, 0x2, 0x92, 0x90, 0x3, 
       0x2, 0x2, 0x2, 0x92, 0x93, 0x3, 0x2, 0x2, 0x2, 0x93, 0x19, 0x3, 0x2, 
       0x2, 0x2, 0x94, 0x95, 0x7, 0x3, 0x2, 0x2, 0x95, 0x96, 0x7, 0xe, 0x2, 
       0x2, 0x96, 0x98, 0x5, 0x2, 0x2, 0x2, 0x97, 0x99, 0x7, 0xd, 0x2, 0x2, 
       0x98, 0x97, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 
       0x98, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x1b, 
       0x3, 0x2, 0x2, 0x2, 0x9c, 0xa0, 0x7, 0x6, 0x2, 0x2, 0x9d, 0x9f, 0x7, 
       0x24, 0x2, 0x2, 0x9e, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa2, 0x3, 
       0x2, 0x2, 0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 0x2, 
       0x2, 0x2, 0xa1, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa0, 0x3, 0x2, 0x2, 
       0x2, 0xa3, 0xa7, 0x7, 0x23, 0x2, 0x2, 0xa4, 0xa6, 0x7, 0xd, 0x2, 
       0x2, 0xa5, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa9, 0x3, 0x2, 0x2, 0x2, 
       0xa7, 0xa5, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa8, 
       0x1d, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xac, 
       0x5, 0x26, 0x14, 0x2, 0xab, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaf, 
       0x3, 0x2, 0x2, 0x2, 0xad, 0xab, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x3, 
       0x2, 0x2, 0x2, 0xae, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xad, 0x3, 0x2, 
       0x2, 0x2, 0xb0, 0xb4, 0x5, 0x1a, 0xe, 0x2, 0xb1, 0xb3, 0x5, 0x10, 
       0x9, 0x2, 0xb2, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb6, 0x3, 0x2, 0x2, 
       0x2, 0xb4, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x3, 0x2, 0x2, 0x2, 
       0xb5, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb7, 
       0xb9, 0x5, 0x26, 0x14, 0x2, 0xb8, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb9, 
       0xbc, 0x3, 0x2, 0x2, 0x2, 0xba, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 
       0x3, 0x2, 0x2, 0x2, 0xbb, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xba, 0x3, 
       0x2, 0x2, 0x2, 0xbd, 0xc1, 0x5, 0x18, 0xd, 0x2, 0xbe, 0xc0, 0x5, 
       0x10, 0x9, 0x2, 0xbf, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc3, 0x3, 
       0x2, 0x2, 0x2, 0xc1, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc2, 0x3, 0x2, 
       0x2, 0x2, 0xc2, 0x21, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc1, 0x3, 0x2, 0x2, 
       0x2, 0xc4, 0xc6, 0x5, 0x26, 0x14, 0x2, 0xc5, 0xc4, 0x3, 0x2, 0x2, 
       0x2, 0xc6, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 
       0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xc9, 
       0xc7, 0x3, 0x2, 0x2, 0x2, 0xca, 0xcc, 0x5, 0x1c, 0xf, 0x2, 0xcb, 
       0xca, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcb, 
       0x3, 0x2, 0x2, 0x2, 0xcd, 0xce, 0x3, 0x2, 0x2, 0x2, 0xce, 0xd0, 0x3, 
       0x2, 0x2, 0x2, 0xcf, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xd4, 0x5, 0x16, 
       0xc, 0x2, 0xd1, 0xd3, 0x5, 0x10, 0x9, 0x2, 0xd2, 0xd1, 0x3, 0x2, 
       0x2, 0x2, 0xd3, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd2, 0x3, 0x2, 0x2, 
       0x2, 0xd4, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd5, 0x23, 0x3, 0x2, 0x2, 0x2, 
       0xd6, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x7, 0x12, 0x2, 0x2, 
       0xd8, 0xda, 0x7, 0x2a, 0x2, 0x2, 0xd9, 0xdb, 0x5, 0x28, 0x15, 0x2, 
       0xda, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdc, 
       0xda, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdf, 
       0x3, 0x2, 0x2, 0x2, 0xde, 0xe0, 0x7, 0xd, 0x2, 0x2, 0xdf, 0xde, 0x3, 
       0x2, 0x2, 0x2, 0xe0, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xdf, 0x3, 0x2, 
       0x2, 0x2, 0xe1, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xe2, 0x25, 0x3, 0x2, 0x2, 
       0x2, 0xe3, 0xe4, 0x5, 0x24, 0x13, 0x2, 0xe4, 0x27, 0x3, 0x2, 0x2, 
       0x2, 0xe5, 0xe7, 0x9, 0x4, 0x2, 0x2, 0xe6, 0xe5, 0x3, 0x2, 0x2, 0x2, 
       0xe7, 0xea, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe8, 
       0xe9, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xea, 0xe8, 
       0x3, 0x2, 0x2, 0x2, 0xeb, 0xec, 0x7, 0x26, 0x2, 0x2, 0xec, 0x29, 
       0x3, 0x2, 0x2, 0x2, 0xed, 0xf1, 0x7, 0x11, 0x2, 0x2, 0xee, 0xf0, 
       0x7, 0x2e, 0x2, 0x2, 0xef, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf3, 
       0x3, 0x2, 0x2, 0x2, 0xf1, 0xef, 0x3, 0x2, 0x2, 0x2, 0xf1, 0xf2, 0x3, 
       0x2, 0x2, 0x2, 0xf2, 0xf4, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf1, 0x3, 0x2, 
       0x2, 0x2, 0xf4, 0xf6, 0x7, 0x2d, 0x2, 0x2, 0xf5, 0xed, 0x3, 0x2, 
       0x2, 0x2, 0xf6, 0xf7, 0x3, 0x2, 0x2, 0x2, 0xf7, 0xf5, 0x3, 0x2, 0x2, 
       0x2, 0xf7, 0xf8, 0x3, 0x2, 0x2, 0x2, 0xf8, 0xfc, 0x3, 0x2, 0x2, 0x2, 
       0xf9, 0xfb, 0x7, 0xd, 0x2, 0x2, 0xfa, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xfb, 
       0xfe, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 
       0x3, 0x2, 0x2, 0x2, 0xfd, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xfc, 0x3, 
       0x2, 0x2, 0x2, 0xff, 0x101, 0x5, 0x4, 0x3, 0x2, 0x100, 0x102, 0x5, 
       0x20, 0x11, 0x2, 0x101, 0x100, 0x3, 0x2, 0x2, 0x2, 0x101, 0x102, 
       0x3, 0x2, 0x2, 0x2, 0x102, 0x106, 0x3, 0x2, 0x2, 0x2, 0x103, 0x105, 
       0x5, 0x1e, 0x10, 0x2, 0x104, 0x103, 0x3, 0x2, 0x2, 0x2, 0x105, 0x108, 
       0x3, 0x2, 0x2, 0x2, 0x106, 0x104, 0x3, 0x2, 0x2, 0x2, 0x106, 0x107, 
       0x3, 0x2, 0x2, 0x2, 0x107, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x108, 0x106, 
       0x3, 0x2, 0x2, 0x2, 0x109, 0x10b, 0x5, 0x22, 0x12, 0x2, 0x10a, 0x109, 
       0x3, 0x2, 0x2, 0x2, 0x10b, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x10c, 0x10a, 
       0x3, 0x2, 0x2, 0x2, 0x10c, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10d, 0x10f, 
       0x3, 0x2, 0x2, 0x2, 0x10e, 0x10c, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x110, 
       0x7, 0x2, 0x2, 0x3, 0x110, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x23, 0x32, 
       0x3a, 0x43, 0x4c, 0x52, 0x58, 0x63, 0x6b, 0x70, 0x75, 0x78, 0x7e, 
       0x8b, 0x92, 0x9a, 0xa0, 0xa7, 0xad, 0xb4, 0xba, 0xc1, 0xc7, 0xcd, 
       0xd4, 0xdc, 0xe1, 0xe8, 0xf1, 0xf7, 0xfc, 0x101, 0x106, 0x10c, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

GenieParser::Initializer GenieParser::_init;
