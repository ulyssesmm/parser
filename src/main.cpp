#include <iostream>
#include <fstream>
using namespace std;

#include "Lexer.hpp"
#include "Parser.hpp"

int main(int argc, char *argv[])
{
	if (argc < 2)
    {
        cout<<"Falta el nombre del archivo"<<endl;
        exit(EXIT_FAILURE);
    }

    filebuf fb;
    fb.open(string(argv[1]), ios::in);
    if(!fb.is_open()){
        cout<<"No tienes permisos suficientes para abrir "<<argv[1]<<endl;
        exit(EXIT_FAILURE);
    }
    istream is(&fb);
    Lexer lexer(&is);
    Parser parser(&lexer);
	
	//TODO: Código para iniciar el análisis sintáctico.

}