#include "Elevador.h"
#include <iostream>

using namespace std;

/*Nesse .cpp se encontram as implementa��es das fun��es que foram 
definidas no .h (prot�tipo) da nossa classe*/

/*Podemos inicializar as vari�veis do objeto utilizando o construtor!
Qualquer objeto criado, ter� essa inicializa��o!*/
Elevador::Elevador()
{
	cout << "Acabei de inicializar uma inst�ncia da classe!" << endl;
	this->andarAtual = 0;
	this->qtdPessoas = 0;
	//this->capacidade = capacidade;
	//this->totalAndares = andares;
}

void Elevador::configuracao(int capacidade, int andares)
{
	this->capacidade = capacidade;
	this->totalAndares = andares;
}

void Elevador::entrar()
{
	if (this->qtdPessoas < this->capacidade) {
		this->qtdPessoas++;
	}
	else {
		cout << "Elevador j� atingiu a capacidade m�xima!" << endl;
	}
}

void Elevador::sair()
{
	if (this->qtdPessoas > 0) {
		this->qtdPessoas--;
	}
	else {
		cout << "Elevador j� est� vazio!" << endl;
	}
}

void Elevador::subir()
{
	if (this->andarAtual < this->totalAndares)
		this->andarAtual++;
	else
		cout << "Voc� j� est� no �ltimo andar!" << endl;
}

void Elevador::descer()
{
	if (this->andarAtual > 0)
		this->andarAtual--;
	else
		cout << "Voc� j� est� no t�rreo!" << endl;
}

void Elevador::exibir()
{
	cout << "Capacidade M�xima: " << this->capacidade << endl;
	cout << "Andar atual: " << this->andarAtual << endl;
	cout << "Quantidade de pessoas: " << this->qtdPessoas << endl;
	cout << "Total de andares: " << this->totalAndares << endl;
}
