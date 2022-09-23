#ifndef __PARSER_HPP__
#define __PARSER_HPP__

#include "Lexer.hpp"
#include "Tokens.hpp"
#include <string>
using namespace std;

class Parser{
public:
    Parser();
    Parser(Lexer *lexer);
    ~Parser();
    void error(string msg);
private:
    // TODO: Completar la definición de las funciones de acuerdo a la presentación.
    void  eat();
    void s();
    void l();
    void e();
};

#endif // !__PARSER_HPP__