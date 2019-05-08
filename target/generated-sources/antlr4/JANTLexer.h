
#include "../../../wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from JANT.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  JANTLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, PROGRAM = 7, 
    MAIN = 8, FUNC = 9, START = 10, TERMINATE = 11, BEGIN = 12, END = 13, 
    VAR = 14, LOOP = 15, WHEN = 16, WHENIF = 17, OTHERWISE = 18, IDENTIFIER = 19, 
    INTEGER = 20, CHAR = 21, MUL_operation = 22, DIV_operation = 23, ADD_operation = 24, 
    SUB_operation = 25, EQ_operation = 26, EQEQ_operation = 27, NE_operation = 28, 
    LT_operation = 29, LE_operation = 30, GT_operation = 31, GE_operation = 32, 
    NEWLINE = 33, WS = 34
  };

  JANTLexer(antlr4::CharStream *input);
  ~JANTLexer();

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

