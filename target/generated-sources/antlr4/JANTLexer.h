
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
    VAR = 14, LOOP = 15, WHEN = 16, IDENTIFIER = 17, INTEGER = 18, CHAR = 19, 
    MUL_operation = 20, DIV_operation = 21, ADD_operation = 22, SUB_operation = 23, 
    EQ_operation = 24, EQEQ_operation = 25, NE_operation = 26, LT_operation = 27, 
    LE_operation = 28, GT_operation = 29, GE_operation = 30, NEWLINE = 31, 
    WS = 32
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

