#ifndef __LEXER_HPP__
#define __LEXER_HPP__

#include <string>
using namespace std;
#if !defined(yyFlexLexerOnce)
#include <FlexLexer.h>
#endif

class Lexer : public yyFlexLexer
{
public:
    Lexer(std::istream *in) : yyFlexLexer(in){};

    using FlexLexer::yylex;
    virtual int yylex();
    virtual int getType();
    virtual int getLine();
    
private:
    int line=1;    
    
};

#endif // !__LEXER_HPP__