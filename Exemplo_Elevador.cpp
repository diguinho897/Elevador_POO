#include <iostream>
#include <locale>
#include "Elevador.h"

using namespace std;

/*No main, devemos incluir a lib .h criada por nós
Lembre-se, todo programa C;C++ deve ter uma função main!!!*/


int main()
{
    setlocale(LC_ALL, "Portuguese");
    /*é aqui que vamos instanciar um objeto
    elevador e fazer o elevador andar!
	Nesse momento, o construtor é chamado!*/
    Elevador elevador;
    
	/*Fazemos o uso das funções públicas presentes na nossa classe*/
    elevador.configuracao(9, 10);
    elevador.exibir();

    elevador.subir();
    elevador.subir();
    elevador.subir();

    elevador.descer();
    elevador.entrar();
    elevador.entrar();

    elevador.descer();
    elevador.sair();

    elevador.exibir();

}
