#include "Elevador.h"
#include <iostream>

using namespace std;

/*Nesse .cpp se encontram as implementações das funções que foram 
definidas no .h (protótipo) da nossa classe*/

/*Podemos inicializar as variáveis do objeto utilizando o construtor!
Qualquer objeto criado, terá essa inicialização!*/
Elevador::Elevador()
{
	cout << "Acabei de inicializar uma instância da classe!" << endl;
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
		cout << "Elevador já atingiu a capacidade máxima!" << endl;
	}
}

void Elevador::sair()
{
	if (this->qtdPessoas > 0) {
		this->qtdPessoas--;
	}
	else {
		cout << "Elevador já está vazio!" << endl;
	}
}

void Elevador::subir()
{
	if (this->andarAtual < this->totalAndares)
		this->andarAtual++;
	else
		cout << "Você já está no último andar!" << endl;
}

void Elevador::descer()
{
	if (this->andarAtual > 0)
		this->andarAtual--;
	else
		cout << "Você já está no térreo!" << endl;
}

void Elevador::exibir()
{
	cout << "Capacidade Máxima: " << this->capacidade << endl;
	cout << "Andar atual: " << this->andarAtual << endl;
	cout << "Quantidade de pessoas: " << this->qtdPessoas << endl;
	cout << "Total de andares: " << this->totalAndares << endl;
}
