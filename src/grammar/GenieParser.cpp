
// Generated from grammar/Genie.g4 by ANTLR 4.9.2


#include "GenieListener.h"

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
  return "Genie.g4";
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

std::vector<tree::TerminalNode *> GenieParser::Quoted_wordsContext::STRING_QUOTES() {
  return getTokens(GenieParser::STRING_QUOTES);
}

tree::TerminalNode* GenieParser::Quoted_wordsContext::STRING_QUOTES(size_t i) {
  return getToken(GenieParser::STRING_QUOTES, i);
}

std::vector<tree::TerminalNode *> GenieParser::Quoted_wordsContext::WORD() {
  return getTokens(GenieParser::WORD);
}

tree::TerminalNode* GenieParser::Quoted_wordsContext::WORD(size_t i) {
  return getToken(GenieParser::WORD, i);
}


size_t GenieParser::Quoted_wordsContext::getRuleIndex() const {
  return GenieParser::RuleQuoted_words;
}

void GenieParser::Quoted_wordsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuoted_words(this);
}

void GenieParser::Quoted_wordsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
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
    setState(32);
    match(GenieParser::STRING_QUOTES);
    setState(36);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GenieParser::WORD) {
      setState(33);
      match(GenieParser::WORD);
      setState(38);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(39);
    match(GenieParser::STRING_QUOTES);
   
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

GenieParser::Quoted_wordsContext* GenieParser::Feature_defnContext::quoted_words() {
  return getRuleContext<GenieParser::Quoted_wordsContext>(0);
}

std::vector<GenieParser::Commented_linesContext *> GenieParser::Feature_defnContext::commented_lines() {
  return getRuleContexts<GenieParser::Commented_linesContext>();
}

GenieParser::Commented_linesContext* GenieParser::Feature_defnContext::commented_lines(size_t i) {
  return getRuleContext<GenieParser::Commented_linesContext>(i);
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
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFeature_defn(this);
}

void GenieParser::Feature_defnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
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
    setState(44);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GenieParser::SINGLE_LINE_COMMENT) {
      setState(41);
      commented_lines();
      setState(46);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(47);
    match(GenieParser::FEATURE);
    setState(48);
    quoted_words();
    setState(50); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(49);
      match(GenieParser::EOLN);
      setState(52); 
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

//----------------- Package_defnContext ------------------------------------------------------------------

GenieParser::Package_defnContext::Package_defnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> GenieParser::Package_defnContext::WORD() {
  return getTokens(GenieParser::WORD);
}

tree::TerminalNode* GenieParser::Package_defnContext::WORD(size_t i) {
  return getToken(GenieParser::WORD, i);
}

tree::TerminalNode* GenieParser::Package_defnContext::PACKAGE_VERSION_SPLITTER() {
  return getToken(GenieParser::PACKAGE_VERSION_SPLITTER, 0);
}


size_t GenieParser::Package_defnContext::getRuleIndex() const {
  return GenieParser::RulePackage_defn;
}

void GenieParser::Package_defnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPackage_defn(this);
}

void GenieParser::Package_defnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPackage_defn(this);
}

GenieParser::Package_defnContext* GenieParser::package_defn() {
  Package_defnContext *_localctx = _tracker.createInstance<Package_defnContext>(_ctx, getState());
  enterRule(_localctx, 4, GenieParser::RulePackage_defn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(54);
    match(GenieParser::WORD);
    setState(55);
    match(GenieParser::PACKAGE_VERSION_SPLITTER);
    setState(56);
    match(GenieParser::WORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Requires_single_lineContext ------------------------------------------------------------------

GenieParser::Requires_single_lineContext::Requires_single_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GenieParser::Requires_single_lineContext::REQUIRES() {
  return getToken(GenieParser::REQUIRES, 0);
}

GenieParser::Package_defnContext* GenieParser::Requires_single_lineContext::package_defn() {
  return getRuleContext<GenieParser::Package_defnContext>(0);
}

std::vector<GenieParser::Commented_linesContext *> GenieParser::Requires_single_lineContext::commented_lines() {
  return getRuleContexts<GenieParser::Commented_linesContext>();
}

GenieParser::Commented_linesContext* GenieParser::Requires_single_lineContext::commented_lines(size_t i) {
  return getRuleContext<GenieParser::Commented_linesContext>(i);
}

std::vector<tree::TerminalNode *> GenieParser::Requires_single_lineContext::EOLN() {
  return getTokens(GenieParser::EOLN);
}

tree::TerminalNode* GenieParser::Requires_single_lineContext::EOLN(size_t i) {
  return getToken(GenieParser::EOLN, i);
}


size_t GenieParser::Requires_single_lineContext::getRuleIndex() const {
  return GenieParser::RuleRequires_single_line;
}

void GenieParser::Requires_single_lineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRequires_single_line(this);
}

void GenieParser::Requires_single_lineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRequires_single_line(this);
}

GenieParser::Requires_single_lineContext* GenieParser::requires_single_line() {
  Requires_single_lineContext *_localctx = _tracker.createInstance<Requires_single_lineContext>(_ctx, getState());
  enterRule(_localctx, 6, GenieParser::RuleRequires_single_line);
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
    setState(61);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GenieParser::SINGLE_LINE_COMMENT) {
      setState(58);
      commented_lines();
      setState(63);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(64);
    match(GenieParser::REQUIRES);
    setState(65);
    package_defn();
    setState(67); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(66);
      match(GenieParser::EOLN);
      setState(69); 
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

//----------------- Requires_multi_lineContext ------------------------------------------------------------------

GenieParser::Requires_multi_lineContext::Requires_multi_lineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GenieParser::Requires_multi_lineContext::REQUIRES() {
  return getToken(GenieParser::REQUIRES, 0);
}

std::vector<tree::TerminalNode *> GenieParser::Requires_multi_lineContext::EOLN() {
  return getTokens(GenieParser::EOLN);
}

tree::TerminalNode* GenieParser::Requires_multi_lineContext::EOLN(size_t i) {
  return getToken(GenieParser::EOLN, i);
}

std::vector<GenieParser::Commented_linesContext *> GenieParser::Requires_multi_lineContext::commented_lines() {
  return getRuleContexts<GenieParser::Commented_linesContext>();
}

GenieParser::Commented_linesContext* GenieParser::Requires_multi_lineContext::commented_lines(size_t i) {
  return getRuleContext<GenieParser::Commented_linesContext>(i);
}

std::vector<tree::TerminalNode *> GenieParser::Requires_multi_lineContext::LIST_ITEM() {
  return getTokens(GenieParser::LIST_ITEM);
}

tree::TerminalNode* GenieParser::Requires_multi_lineContext::LIST_ITEM(size_t i) {
  return getToken(GenieParser::LIST_ITEM, i);
}

std::vector<GenieParser::Package_defnContext *> GenieParser::Requires_multi_lineContext::package_defn() {
  return getRuleContexts<GenieParser::Package_defnContext>();
}

GenieParser::Package_defnContext* GenieParser::Requires_multi_lineContext::package_defn(size_t i) {
  return getRuleContext<GenieParser::Package_defnContext>(i);
}


size_t GenieParser::Requires_multi_lineContext::getRuleIndex() const {
  return GenieParser::RuleRequires_multi_line;
}

void GenieParser::Requires_multi_lineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRequires_multi_line(this);
}

void GenieParser::Requires_multi_lineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRequires_multi_line(this);
}

GenieParser::Requires_multi_lineContext* GenieParser::requires_multi_line() {
  Requires_multi_lineContext *_localctx = _tracker.createInstance<Requires_multi_lineContext>(_ctx, getState());
  enterRule(_localctx, 8, GenieParser::RuleRequires_multi_line);
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
    setState(74);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GenieParser::SINGLE_LINE_COMMENT) {
      setState(71);
      commented_lines();
      setState(76);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(77);
    match(GenieParser::REQUIRES);
    setState(78);
    match(GenieParser::EOLN);
    setState(89); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(82);
              _errHandler->sync(this);
              _la = _input->LA(1);
              while (_la == GenieParser::SINGLE_LINE_COMMENT) {
                setState(79);
                commented_lines();
                setState(84);
                _errHandler->sync(this);
                _la = _input->LA(1);
              }
              setState(85);
              match(GenieParser::LIST_ITEM);
              setState(86);
              package_defn();
              setState(87);
              match(GenieParser::EOLN);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(91); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Requires_defnContext ------------------------------------------------------------------

GenieParser::Requires_defnContext::Requires_defnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GenieParser::Requires_single_lineContext* GenieParser::Requires_defnContext::requires_single_line() {
  return getRuleContext<GenieParser::Requires_single_lineContext>(0);
}

GenieParser::Requires_multi_lineContext* GenieParser::Requires_defnContext::requires_multi_line() {
  return getRuleContext<GenieParser::Requires_multi_lineContext>(0);
}


size_t GenieParser::Requires_defnContext::getRuleIndex() const {
  return GenieParser::RuleRequires_defn;
}

void GenieParser::Requires_defnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRequires_defn(this);
}

void GenieParser::Requires_defnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRequires_defn(this);
}

GenieParser::Requires_defnContext* GenieParser::requires_defn() {
  Requires_defnContext *_localctx = _tracker.createInstance<Requires_defnContext>(_ctx, getState());
  enterRule(_localctx, 10, GenieParser::RuleRequires_defn);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(95);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(93);
      requires_single_line();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(94);
      requires_multi_line();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Parallelism_defnContext ------------------------------------------------------------------

GenieParser::Parallelism_defnContext::Parallelism_defnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GenieParser::Parallelism_defnContext::PARALLELISM() {
  return getToken(GenieParser::PARALLELISM, 0);
}

tree::TerminalNode* GenieParser::Parallelism_defnContext::SCENARIO() {
  return getToken(GenieParser::SCENARIO, 0);
}

std::vector<GenieParser::Commented_linesContext *> GenieParser::Parallelism_defnContext::commented_lines() {
  return getRuleContexts<GenieParser::Commented_linesContext>();
}

GenieParser::Commented_linesContext* GenieParser::Parallelism_defnContext::commented_lines(size_t i) {
  return getRuleContext<GenieParser::Commented_linesContext>(i);
}

std::vector<tree::TerminalNode *> GenieParser::Parallelism_defnContext::EOLN() {
  return getTokens(GenieParser::EOLN);
}

tree::TerminalNode* GenieParser::Parallelism_defnContext::EOLN(size_t i) {
  return getToken(GenieParser::EOLN, i);
}


size_t GenieParser::Parallelism_defnContext::getRuleIndex() const {
  return GenieParser::RuleParallelism_defn;
}

void GenieParser::Parallelism_defnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParallelism_defn(this);
}

void GenieParser::Parallelism_defnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParallelism_defn(this);
}

GenieParser::Parallelism_defnContext* GenieParser::parallelism_defn() {
  Parallelism_defnContext *_localctx = _tracker.createInstance<Parallelism_defnContext>(_ctx, getState());
  enterRule(_localctx, 12, GenieParser::RuleParallelism_defn);
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
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GenieParser::SINGLE_LINE_COMMENT) {
      setState(97);
      commented_lines();
      setState(102);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(103);
    match(GenieParser::PARALLELISM);
    setState(104);
    match(GenieParser::SCENARIO);
    setState(106); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(105);
      match(GenieParser::EOLN);
      setState(108); 
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

//----------------- Scenario_declContext ------------------------------------------------------------------

GenieParser::Scenario_declContext::Scenario_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GenieParser::Scenario_declContext::SCENARIO() {
  return getToken(GenieParser::SCENARIO, 0);
}

std::vector<tree::TerminalNode *> GenieParser::Scenario_declContext::STRING_QUOTES() {
  return getTokens(GenieParser::STRING_QUOTES);
}

tree::TerminalNode* GenieParser::Scenario_declContext::STRING_QUOTES(size_t i) {
  return getToken(GenieParser::STRING_QUOTES, i);
}

std::vector<GenieParser::Commented_linesContext *> GenieParser::Scenario_declContext::commented_lines() {
  return getRuleContexts<GenieParser::Commented_linesContext>();
}

GenieParser::Commented_linesContext* GenieParser::Scenario_declContext::commented_lines(size_t i) {
  return getRuleContext<GenieParser::Commented_linesContext>(i);
}

std::vector<tree::TerminalNode *> GenieParser::Scenario_declContext::WORD() {
  return getTokens(GenieParser::WORD);
}

tree::TerminalNode* GenieParser::Scenario_declContext::WORD(size_t i) {
  return getToken(GenieParser::WORD, i);
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
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScenario_decl(this);
}

void GenieParser::Scenario_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScenario_decl(this);
}

GenieParser::Scenario_declContext* GenieParser::scenario_decl() {
  Scenario_declContext *_localctx = _tracker.createInstance<Scenario_declContext>(_ctx, getState());
  enterRule(_localctx, 14, GenieParser::RuleScenario_decl);
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
    setState(113);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GenieParser::SINGLE_LINE_COMMENT) {
      setState(110);
      commented_lines();
      setState(115);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(116);
    match(GenieParser::SCENARIO);
    setState(117);
    match(GenieParser::STRING_QUOTES);
    setState(119); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(118);
      match(GenieParser::WORD);
      setState(121); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == GenieParser::WORD);
    setState(123);
    match(GenieParser::STRING_QUOTES);
    setState(125); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(124);
      match(GenieParser::EOLN);
      setState(127); 
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

std::vector<GenieParser::Commented_linesContext *> GenieParser::Do_startContext::commented_lines() {
  return getRuleContexts<GenieParser::Commented_linesContext>();
}

GenieParser::Commented_linesContext* GenieParser::Do_startContext::commented_lines(size_t i) {
  return getRuleContext<GenieParser::Commented_linesContext>(i);
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
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDo_start(this);
}

void GenieParser::Do_startContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDo_start(this);
}

GenieParser::Do_startContext* GenieParser::do_start() {
  Do_startContext *_localctx = _tracker.createInstance<Do_startContext>(_ctx, getState());
  enterRule(_localctx, 16, GenieParser::RuleDo_start);
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
    setState(132);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GenieParser::SINGLE_LINE_COMMENT) {
      setState(129);
      commented_lines();
      setState(134);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(135);
    match(GenieParser::DO);
    setState(136);
    match(GenieParser::INT);
    setState(137);
    match(GenieParser::TIMES);
    setState(139); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(138);
      match(GenieParser::EOLN);
      setState(141); 
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

std::vector<GenieParser::Commented_linesContext *> GenieParser::Do_endContext::commented_lines() {
  return getRuleContexts<GenieParser::Commented_linesContext>();
}

GenieParser::Commented_linesContext* GenieParser::Do_endContext::commented_lines(size_t i) {
  return getRuleContext<GenieParser::Commented_linesContext>(i);
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
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDo_end(this);
}

void GenieParser::Do_endContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDo_end(this);
}

GenieParser::Do_endContext* GenieParser::do_end() {
  Do_endContext *_localctx = _tracker.createInstance<Do_endContext>(_ctx, getState());
  enterRule(_localctx, 18, GenieParser::RuleDo_end);
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
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GenieParser::SINGLE_LINE_COMMENT) {
      setState(143);
      commented_lines();
      setState(148);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(149);
    match(GenieParser::DONE);
    setState(151); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(150);
      match(GenieParser::EOLN);
      setState(153); 
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
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDo_loop(this);
}

void GenieParser::Do_loopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDo_loop(this);
}

GenieParser::Do_loopContext* GenieParser::do_loop() {
  Do_loopContext *_localctx = _tracker.createInstance<Do_loopContext>(_ctx, getState());
  enterRule(_localctx, 20, GenieParser::RuleDo_loop);

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
    setState(155);
    do_start();
    setState(159);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(156);
        do_statement(); 
      }
      setState(161);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx);
    }
    setState(162);
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

tree::TerminalNode* GenieParser::Do_actionContext::GIVEN() {
  return getToken(GenieParser::GIVEN, 0);
}

tree::TerminalNode* GenieParser::Do_actionContext::WHEN() {
  return getToken(GenieParser::WHEN, 0);
}

tree::TerminalNode* GenieParser::Do_actionContext::THEN() {
  return getToken(GenieParser::THEN, 0);
}

tree::TerminalNode* GenieParser::Do_actionContext::BUT() {
  return getToken(GenieParser::BUT, 0);
}

tree::TerminalNode* GenieParser::Do_actionContext::CALL() {
  return getToken(GenieParser::CALL, 0);
}

tree::TerminalNode* GenieParser::Do_actionContext::AND() {
  return getToken(GenieParser::AND, 0);
}

std::vector<GenieParser::Commented_linesContext *> GenieParser::Do_actionContext::commented_lines() {
  return getRuleContexts<GenieParser::Commented_linesContext>();
}

GenieParser::Commented_linesContext* GenieParser::Do_actionContext::commented_lines(size_t i) {
  return getRuleContext<GenieParser::Commented_linesContext>(i);
}

std::vector<tree::TerminalNode *> GenieParser::Do_actionContext::WORD() {
  return getTokens(GenieParser::WORD);
}

tree::TerminalNode* GenieParser::Do_actionContext::WORD(size_t i) {
  return getToken(GenieParser::WORD, i);
}

std::vector<GenieParser::Quoted_wordsContext *> GenieParser::Do_actionContext::quoted_words() {
  return getRuleContexts<GenieParser::Quoted_wordsContext>();
}

GenieParser::Quoted_wordsContext* GenieParser::Do_actionContext::quoted_words(size_t i) {
  return getRuleContext<GenieParser::Quoted_wordsContext>(i);
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
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDo_action(this);
}

void GenieParser::Do_actionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDo_action(this);
}

GenieParser::Do_actionContext* GenieParser::do_action() {
  Do_actionContext *_localctx = _tracker.createInstance<Do_actionContext>(_ctx, getState());
  enterRule(_localctx, 22, GenieParser::RuleDo_action);
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
    setState(167);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GenieParser::SINGLE_LINE_COMMENT) {
      setState(164);
      commented_lines();
      setState(169);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(170);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GenieParser::GIVEN)
      | (1ULL << GenieParser::WHEN)
      | (1ULL << GenieParser::THEN)
      | (1ULL << GenieParser::AND)
      | (1ULL << GenieParser::BUT)
      | (1ULL << GenieParser::CALL))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(175);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GenieParser::STRING_QUOTES

    || _la == GenieParser::WORD) {
      setState(173);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case GenieParser::WORD: {
          setState(171);
          match(GenieParser::WORD);
          break;
        }

        case GenieParser::STRING_QUOTES: {
          setState(172);
          quoted_words();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(177);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(179); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(178);
      match(GenieParser::EOLN);
      setState(181); 
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


size_t GenieParser::Do_statementContext::getRuleIndex() const {
  return GenieParser::RuleDo_statement;
}

void GenieParser::Do_statementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDo_statement(this);
}

void GenieParser::Do_statementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDo_statement(this);
}

GenieParser::Do_statementContext* GenieParser::do_statement() {
  Do_statementContext *_localctx = _tracker.createInstance<Do_statementContext>(_ctx, getState());
  enterRule(_localctx, 24, GenieParser::RuleDo_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(185);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(183);
      do_loop();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(184);
      do_action();
      break;
    }

    default:
      break;
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

std::vector<GenieParser::Commented_linesContext *> GenieParser::Scenario_defnContext::commented_lines() {
  return getRuleContexts<GenieParser::Commented_linesContext>();
}

GenieParser::Commented_linesContext* GenieParser::Scenario_defnContext::commented_lines(size_t i) {
  return getRuleContext<GenieParser::Commented_linesContext>(i);
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
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterScenario_defn(this);
}

void GenieParser::Scenario_defnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitScenario_defn(this);
}

GenieParser::Scenario_defnContext* GenieParser::scenario_defn() {
  Scenario_defnContext *_localctx = _tracker.createInstance<Scenario_defnContext>(_ctx, getState());
  enterRule(_localctx, 26, GenieParser::RuleScenario_defn);

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
    setState(190);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(187);
        commented_lines(); 
      }
      setState(192);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    }
    setState(193);
    scenario_decl();
    setState(197);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(194);
        do_statement(); 
      }
      setState(199);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    }
   
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

std::vector<tree::TerminalNode *> GenieParser::Commented_linesContext::WORD() {
  return getTokens(GenieParser::WORD);
}

tree::TerminalNode* GenieParser::Commented_linesContext::WORD(size_t i) {
  return getToken(GenieParser::WORD, i);
}

std::vector<tree::TerminalNode *> GenieParser::Commented_linesContext::EOLN() {
  return getTokens(GenieParser::EOLN);
}

tree::TerminalNode* GenieParser::Commented_linesContext::EOLN(size_t i) {
  return getToken(GenieParser::EOLN, i);
}


size_t GenieParser::Commented_linesContext::getRuleIndex() const {
  return GenieParser::RuleCommented_lines;
}

void GenieParser::Commented_linesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCommented_lines(this);
}

void GenieParser::Commented_linesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCommented_lines(this);
}

GenieParser::Commented_linesContext* GenieParser::commented_lines() {
  Commented_linesContext *_localctx = _tracker.createInstance<Commented_linesContext>(_ctx, getState());
  enterRule(_localctx, 28, GenieParser::RuleCommented_lines);
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
    setState(212); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(200);
              match(GenieParser::SINGLE_LINE_COMMENT);
              setState(204);
              _errHandler->sync(this);
              _la = _input->LA(1);
              while (_la == GenieParser::WORD) {
                setState(201);
                match(GenieParser::WORD);
                setState(206);
                _errHandler->sync(this);
                _la = _input->LA(1);
              }
              setState(208); 
              _errHandler->sync(this);
              _la = _input->LA(1);
              do {
                setState(207);
                match(GenieParser::EOLN);
                setState(210); 
                _errHandler->sync(this);
                _la = _input->LA(1);
              } while (_la == GenieParser::EOLN);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(214); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
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

std::vector<GenieParser::Requires_defnContext *> GenieParser::Feature_fileContext::requires_defn() {
  return getRuleContexts<GenieParser::Requires_defnContext>();
}

GenieParser::Requires_defnContext* GenieParser::Feature_fileContext::requires_defn(size_t i) {
  return getRuleContext<GenieParser::Requires_defnContext>(i);
}

std::vector<GenieParser::Parallelism_defnContext *> GenieParser::Feature_fileContext::parallelism_defn() {
  return getRuleContexts<GenieParser::Parallelism_defnContext>();
}

GenieParser::Parallelism_defnContext* GenieParser::Feature_fileContext::parallelism_defn(size_t i) {
  return getRuleContext<GenieParser::Parallelism_defnContext>(i);
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
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFeature_file(this);
}

void GenieParser::Feature_fileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GenieListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFeature_file(this);
}

GenieParser::Feature_fileContext* GenieParser::feature_file() {
  Feature_fileContext *_localctx = _tracker.createInstance<Feature_fileContext>(_ctx, getState());
  enterRule(_localctx, 30, GenieParser::RuleFeature_file);
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
    setState(216);
    feature_defn();
    setState(220);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(217);
        requires_defn(); 
      }
      setState(222);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 29, _ctx);
    }
    setState(226);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(223);
        parallelism_defn(); 
      }
      setState(228);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 30, _ctx);
    }
    setState(232);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GenieParser::SCENARIO

    || _la == GenieParser::SINGLE_LINE_COMMENT) {
      setState(229);
      scenario_defn();
      setState(234);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(235);
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
  "quoted_words", "feature_defn", "package_defn", "requires_single_line", 
  "requires_multi_line", "requires_defn", "parallelism_defn", "scenario_decl", 
  "do_start", "do_end", "do_loop", "do_action", "do_statement", "scenario_defn", 
  "commented_lines", "feature_file"
};

std::vector<std::string> GenieParser::_literalNames = {
  "", "", "", "", "'@'", "", "", "'\"'", "", "", "", "", "", "", "", "", 
  "", "", "", "", "' '", "'\n'", "'/'", "'-'", "'#'"
};

std::vector<std::string> GenieParser::_symbolicNames = {
  "", "FEATURE", "REQUIRES", "PARALLELISM", "AT", "ATTR", "SCENARIO", "STRING_QUOTES", 
  "DO", "TIMES", "GIVEN", "WHEN", "NON_ALPHANUM", "THEN", "AND", "BUT", 
  "CALL", "DONE", "INT", "WORD", "WS", "EOLN", "PACKAGE_VERSION_SPLITTER", 
  "LIST_ITEM", "SINGLE_LINE_COMMENT"
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
       0x3, 0x1a, 0xf0, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x3, 0x2, 0x3, 0x2, 0x7, 0x2, 0x25, 0xa, 0x2, 0xc, 0x2, 
       0xe, 0x2, 0x28, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x7, 0x3, 
       0x2d, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x30, 0xb, 0x3, 0x3, 0x3, 0x3, 
       0x3, 0x3, 0x3, 0x6, 0x3, 0x35, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x36, 
       0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x7, 0x5, 0x3e, 
       0xa, 0x5, 0xc, 0x5, 0xe, 0x5, 0x41, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x6, 0x5, 0x46, 0xa, 0x5, 0xd, 0x5, 0xe, 0x5, 0x47, 0x3, 
       0x6, 0x7, 0x6, 0x4b, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0x4e, 0xb, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x53, 0xa, 0x6, 0xc, 0x6, 
       0xe, 0x6, 0x56, 0xb, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x6, 0x6, 0x5c, 0xa, 0x6, 0xd, 0x6, 0xe, 0x6, 0x5d, 0x3, 0x7, 0x3, 
       0x7, 0x5, 0x7, 0x62, 0xa, 0x7, 0x3, 0x8, 0x7, 0x8, 0x65, 0xa, 0x8, 
       0xc, 0x8, 0xe, 0x8, 0x68, 0xb, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x6, 0x8, 0x6d, 0xa, 0x8, 0xd, 0x8, 0xe, 0x8, 0x6e, 0x3, 0x9, 0x7, 
       0x9, 0x72, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x75, 0xb, 0x9, 0x3, 0x9, 
       0x3, 0x9, 0x3, 0x9, 0x6, 0x9, 0x7a, 0xa, 0x9, 0xd, 0x9, 0xe, 0x9, 
       0x7b, 0x3, 0x9, 0x3, 0x9, 0x6, 0x9, 0x80, 0xa, 0x9, 0xd, 0x9, 0xe, 
       0x9, 0x81, 0x3, 0xa, 0x7, 0xa, 0x85, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 
       0x88, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x6, 0xa, 
       0x8e, 0xa, 0xa, 0xd, 0xa, 0xe, 0xa, 0x8f, 0x3, 0xb, 0x7, 0xb, 0x93, 
       0xa, 0xb, 0xc, 0xb, 0xe, 0xb, 0x96, 0xb, 0xb, 0x3, 0xb, 0x3, 0xb, 
       0x6, 0xb, 0x9a, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0x9b, 0x3, 0xc, 0x3, 
       0xc, 0x7, 0xc, 0xa0, 0xa, 0xc, 0xc, 0xc, 0xe, 0xc, 0xa3, 0xb, 0xc, 
       0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x7, 0xd, 0xa8, 0xa, 0xd, 0xc, 0xd, 
       0xe, 0xd, 0xab, 0xb, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 0xd, 
       0xb0, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0xb3, 0xb, 0xd, 0x3, 0xd, 0x6, 
       0xd, 0xb6, 0xa, 0xd, 0xd, 0xd, 0xe, 0xd, 0xb7, 0x3, 0xe, 0x3, 0xe, 
       0x5, 0xe, 0xbc, 0xa, 0xe, 0x3, 0xf, 0x7, 0xf, 0xbf, 0xa, 0xf, 0xc, 
       0xf, 0xe, 0xf, 0xc2, 0xb, 0xf, 0x3, 0xf, 0x3, 0xf, 0x7, 0xf, 0xc6, 
       0xa, 0xf, 0xc, 0xf, 0xe, 0xf, 0xc9, 0xb, 0xf, 0x3, 0x10, 0x3, 0x10, 
       0x7, 0x10, 0xcd, 0xa, 0x10, 0xc, 0x10, 0xe, 0x10, 0xd0, 0xb, 0x10, 
       0x3, 0x10, 0x6, 0x10, 0xd3, 0xa, 0x10, 0xd, 0x10, 0xe, 0x10, 0xd4, 
       0x6, 0x10, 0xd7, 0xa, 0x10, 0xd, 0x10, 0xe, 0x10, 0xd8, 0x3, 0x11, 
       0x3, 0x11, 0x7, 0x11, 0xdd, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0xe0, 
       0xb, 0x11, 0x3, 0x11, 0x7, 0x11, 0xe3, 0xa, 0x11, 0xc, 0x11, 0xe, 
       0x11, 0xe6, 0xb, 0x11, 0x3, 0x11, 0x7, 0x11, 0xe9, 0xa, 0x11, 0xc, 
       0x11, 0xe, 0x11, 0xec, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
       0x2, 0x2, 0x12, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 
       0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x2, 0x3, 0x4, 0x2, 0xc, 0xd, 
       0xf, 0x12, 0x2, 0xff, 0x2, 0x22, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2e, 0x3, 
       0x2, 0x2, 0x2, 0x6, 0x38, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3f, 0x3, 0x2, 
       0x2, 0x2, 0xa, 0x4c, 0x3, 0x2, 0x2, 0x2, 0xc, 0x61, 0x3, 0x2, 0x2, 
       0x2, 0xe, 0x66, 0x3, 0x2, 0x2, 0x2, 0x10, 0x73, 0x3, 0x2, 0x2, 0x2, 
       0x12, 0x86, 0x3, 0x2, 0x2, 0x2, 0x14, 0x94, 0x3, 0x2, 0x2, 0x2, 0x16, 
       0x9d, 0x3, 0x2, 0x2, 0x2, 0x18, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xbb, 
       0x3, 0x2, 0x2, 0x2, 0x1c, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xd6, 0x3, 
       0x2, 0x2, 0x2, 0x20, 0xda, 0x3, 0x2, 0x2, 0x2, 0x22, 0x26, 0x7, 0x9, 
       0x2, 0x2, 0x23, 0x25, 0x7, 0x15, 0x2, 0x2, 0x24, 0x23, 0x3, 0x2, 
       0x2, 0x2, 0x25, 0x28, 0x3, 0x2, 0x2, 0x2, 0x26, 0x24, 0x3, 0x2, 0x2, 
       0x2, 0x26, 0x27, 0x3, 0x2, 0x2, 0x2, 0x27, 0x29, 0x3, 0x2, 0x2, 0x2, 
       0x28, 0x26, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x7, 0x9, 0x2, 0x2, 0x2a, 
       0x3, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2d, 0x5, 0x1e, 0x10, 0x2, 0x2c, 
       0x2b, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x30, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2c, 
       0x3, 0x2, 0x2, 0x2, 0x2e, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x31, 0x3, 
       0x2, 0x2, 0x2, 0x30, 0x2e, 0x3, 0x2, 0x2, 0x2, 0x31, 0x32, 0x7, 0x3, 
       0x2, 0x2, 0x32, 0x34, 0x5, 0x2, 0x2, 0x2, 0x33, 0x35, 0x7, 0x17, 
       0x2, 0x2, 0x34, 0x33, 0x3, 0x2, 0x2, 0x2, 0x35, 0x36, 0x3, 0x2, 0x2, 
       0x2, 0x36, 0x34, 0x3, 0x2, 0x2, 0x2, 0x36, 0x37, 0x3, 0x2, 0x2, 0x2, 
       0x37, 0x5, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x7, 0x15, 0x2, 0x2, 0x39, 
       0x3a, 0x7, 0x18, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x15, 0x2, 0x2, 0x3b, 
       0x7, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3e, 0x5, 0x1e, 0x10, 0x2, 0x3d, 
       0x3c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 
       0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x42, 0x3, 
       0x2, 0x2, 0x2, 0x41, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x42, 0x43, 0x7, 0x4, 
       0x2, 0x2, 0x43, 0x45, 0x5, 0x6, 0x4, 0x2, 0x44, 0x46, 0x7, 0x17, 
       0x2, 0x2, 0x45, 0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 0x47, 0x3, 0x2, 0x2, 
       0x2, 0x47, 0x45, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x3, 0x2, 0x2, 0x2, 
       0x48, 0x9, 0x3, 0x2, 0x2, 0x2, 0x49, 0x4b, 0x5, 0x1e, 0x10, 0x2, 
       0x4a, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x4c, 
       0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x4f, 
       0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x50, 0x7, 
       0x4, 0x2, 0x2, 0x50, 0x5b, 0x7, 0x17, 0x2, 0x2, 0x51, 0x53, 0x5, 
       0x1e, 0x10, 0x2, 0x52, 0x51, 0x3, 0x2, 0x2, 0x2, 0x53, 0x56, 0x3, 
       0x2, 0x2, 0x2, 0x54, 0x52, 0x3, 0x2, 0x2, 0x2, 0x54, 0x55, 0x3, 0x2, 
       0x2, 0x2, 0x55, 0x57, 0x3, 0x2, 0x2, 0x2, 0x56, 0x54, 0x3, 0x2, 0x2, 
       0x2, 0x57, 0x58, 0x7, 0x19, 0x2, 0x2, 0x58, 0x59, 0x5, 0x6, 0x4, 
       0x2, 0x59, 0x5a, 0x7, 0x17, 0x2, 0x2, 0x5a, 0x5c, 0x3, 0x2, 0x2, 
       0x2, 0x5b, 0x54, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5d, 0x3, 0x2, 0x2, 0x2, 
       0x5d, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x5e, 
       0xb, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x62, 0x5, 0x8, 0x5, 0x2, 0x60, 0x62, 
       0x5, 0xa, 0x6, 0x2, 0x61, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x61, 0x60, 0x3, 
       0x2, 0x2, 0x2, 0x62, 0xd, 0x3, 0x2, 0x2, 0x2, 0x63, 0x65, 0x5, 0x1e, 
       0x10, 0x2, 0x64, 0x63, 0x3, 0x2, 0x2, 0x2, 0x65, 0x68, 0x3, 0x2, 
       0x2, 0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x3, 0x2, 0x2, 
       0x2, 0x67, 0x69, 0x3, 0x2, 0x2, 0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 0x2, 
       0x69, 0x6a, 0x7, 0x5, 0x2, 0x2, 0x6a, 0x6c, 0x7, 0x8, 0x2, 0x2, 0x6b, 
       0x6d, 0x7, 0x17, 0x2, 0x2, 0x6c, 0x6b, 0x3, 0x2, 0x2, 0x2, 0x6d, 
       0x6e, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 
       0x3, 0x2, 0x2, 0x2, 0x6f, 0xf, 0x3, 0x2, 0x2, 0x2, 0x70, 0x72, 0x5, 
       0x1e, 0x10, 0x2, 0x71, 0x70, 0x3, 0x2, 0x2, 0x2, 0x72, 0x75, 0x3, 
       0x2, 0x2, 0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 
       0x2, 0x2, 0x74, 0x76, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 
       0x2, 0x76, 0x77, 0x7, 0x8, 0x2, 0x2, 0x77, 0x79, 0x7, 0x9, 0x2, 0x2, 
       0x78, 0x7a, 0x7, 0x15, 0x2, 0x2, 0x79, 0x78, 0x3, 0x2, 0x2, 0x2, 
       0x7a, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x79, 0x3, 0x2, 0x2, 0x2, 0x7b, 
       0x7c, 0x3, 0x2, 0x2, 0x2, 0x7c, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7d, 0x7f, 
       0x7, 0x9, 0x2, 0x2, 0x7e, 0x80, 0x7, 0x17, 0x2, 0x2, 0x7f, 0x7e, 
       0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x3, 0x2, 0x2, 0x2, 0x81, 0x7f, 0x3, 
       0x2, 0x2, 0x2, 0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 0x82, 0x11, 0x3, 0x2, 
       0x2, 0x2, 0x83, 0x85, 0x5, 0x1e, 0x10, 0x2, 0x84, 0x83, 0x3, 0x2, 
       0x2, 0x2, 0x85, 0x88, 0x3, 0x2, 0x2, 0x2, 0x86, 0x84, 0x3, 0x2, 0x2, 
       0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x89, 0x3, 0x2, 0x2, 0x2, 
       0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x89, 0x8a, 0x7, 0xa, 0x2, 0x2, 0x8a, 
       0x8b, 0x7, 0x14, 0x2, 0x2, 0x8b, 0x8d, 0x7, 0xb, 0x2, 0x2, 0x8c, 
       0x8e, 0x7, 0x17, 0x2, 0x2, 0x8d, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8e, 
       0x8f, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x90, 
       0x3, 0x2, 0x2, 0x2, 0x90, 0x13, 0x3, 0x2, 0x2, 0x2, 0x91, 0x93, 0x5, 
       0x1e, 0x10, 0x2, 0x92, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 0x96, 0x3, 
       0x2, 0x2, 0x2, 0x94, 0x92, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x3, 0x2, 
       0x2, 0x2, 0x95, 0x97, 0x3, 0x2, 0x2, 0x2, 0x96, 0x94, 0x3, 0x2, 0x2, 
       0x2, 0x97, 0x99, 0x7, 0x13, 0x2, 0x2, 0x98, 0x9a, 0x7, 0x17, 0x2, 
       0x2, 0x99, 0x98, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x3, 0x2, 0x2, 0x2, 
       0x9b, 0x99, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9c, 
       0x15, 0x3, 0x2, 0x2, 0x2, 0x9d, 0xa1, 0x5, 0x12, 0xa, 0x2, 0x9e, 
       0xa0, 0x5, 0x1a, 0xe, 0x2, 0x9f, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa0, 
       0xa3, 0x3, 0x2, 0x2, 0x2, 0xa1, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 
       0x3, 0x2, 0x2, 0x2, 0xa2, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa3, 0xa1, 0x3, 
       0x2, 0x2, 0x2, 0xa4, 0xa5, 0x5, 0x14, 0xb, 0x2, 0xa5, 0x17, 0x3, 
       0x2, 0x2, 0x2, 0xa6, 0xa8, 0x5, 0x1e, 0x10, 0x2, 0xa7, 0xa6, 0x3, 
       0x2, 0x2, 0x2, 0xa8, 0xab, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xa7, 0x3, 0x2, 
       0x2, 0x2, 0xa9, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xac, 0x3, 0x2, 0x2, 
       0x2, 0xab, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xac, 0xb1, 0x9, 0x2, 0x2, 0x2, 
       0xad, 0xb0, 0x7, 0x15, 0x2, 0x2, 0xae, 0xb0, 0x5, 0x2, 0x2, 0x2, 
       0xaf, 0xad, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb0, 
       0xb3, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 
       0x3, 0x2, 0x2, 0x2, 0xb2, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb1, 0x3, 
       0x2, 0x2, 0x2, 0xb4, 0xb6, 0x7, 0x17, 0x2, 0x2, 0xb5, 0xb4, 0x3, 
       0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb5, 0x3, 0x2, 
       0x2, 0x2, 0xb7, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x19, 0x3, 0x2, 0x2, 
       0x2, 0xb9, 0xbc, 0x5, 0x16, 0xc, 0x2, 0xba, 0xbc, 0x5, 0x18, 0xd, 
       0x2, 0xbb, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xba, 0x3, 0x2, 0x2, 0x2, 
       0xbc, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbf, 0x5, 0x1e, 0x10, 0x2, 
       0xbe, 0xbd, 0x3, 0x2, 0x2, 0x2, 0xbf, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc0, 
       0xbe, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc3, 
       0x3, 0x2, 0x2, 0x2, 0xc2, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xc3, 0xc7, 0x5, 
       0x10, 0x9, 0x2, 0xc4, 0xc6, 0x5, 0x1a, 0xe, 0x2, 0xc5, 0xc4, 0x3, 
       0x2, 0x2, 0x2, 0xc6, 0xc9, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc5, 0x3, 0x2, 
       0x2, 0x2, 0xc7, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xc8, 0x1d, 0x3, 0x2, 0x2, 
       0x2, 0xc9, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xca, 0xce, 0x7, 0x1a, 0x2, 
       0x2, 0xcb, 0xcd, 0x7, 0x15, 0x2, 0x2, 0xcc, 0xcb, 0x3, 0x2, 0x2, 
       0x2, 0xcd, 0xd0, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 
       0xce, 0xcf, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd0, 
       0xce, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd3, 0x7, 0x17, 0x2, 0x2, 0xd2, 
       0xd1, 0x3, 0x2, 0x2, 0x2, 0xd3, 0xd4, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd2, 
       0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd7, 0x3, 
       0x2, 0x2, 0x2, 0xd6, 0xca, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x3, 0x2, 
       0x2, 0x2, 0xd8, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x3, 0x2, 0x2, 
       0x2, 0xd9, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xda, 0xde, 0x5, 0x4, 0x3, 0x2, 
       0xdb, 0xdd, 0x5, 0xc, 0x7, 0x2, 0xdc, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdd, 
       0xe0, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 
       0x3, 0x2, 0x2, 0x2, 0xdf, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xde, 0x3, 
       0x2, 0x2, 0x2, 0xe1, 0xe3, 0x5, 0xe, 0x8, 0x2, 0xe2, 0xe1, 0x3, 0x2, 
       0x2, 0x2, 0xe3, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe2, 0x3, 0x2, 0x2, 
       0x2, 0xe4, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xea, 0x3, 0x2, 0x2, 0x2, 
       0xe6, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe7, 0xe9, 0x5, 0x1c, 0xf, 0x2, 
       0xe8, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xec, 0x3, 0x2, 0x2, 0x2, 0xea, 
       0xe8, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xed, 
       0x3, 0x2, 0x2, 0x2, 0xec, 0xea, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0x7, 
       0x2, 0x2, 0x3, 0xee, 0x21, 0x3, 0x2, 0x2, 0x2, 0x22, 0x26, 0x2e, 
       0x36, 0x3f, 0x47, 0x4c, 0x54, 0x5d, 0x61, 0x66, 0x6e, 0x73, 0x7b, 
       0x81, 0x86, 0x8f, 0x94, 0x9b, 0xa1, 0xa9, 0xaf, 0xb1, 0xb7, 0xbb, 
       0xc0, 0xc7, 0xce, 0xd4, 0xd8, 0xde, 0xe4, 0xea, 
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
