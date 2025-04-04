#ifndef _ELEVADOR_H_
#define _ELEVADOR_H_

/*Nesse .h se encontram os protótipos (assinaturas) das funções que devem 
ser implementadas lá no arquivo .cpp
Além disso, é nesse arquivo que contém as definições de escopo, quem será
publico, privado, etc. Quais serão os atributos da classe e as funções que
irão manipular os objetos.
*/

class Elevador {
private:
	int andarAtual;
	int totalAndares;
	int capacidade;
	int qtdPessoas;
public:
	/*Construtor dessa classe*/
	Elevador();
	void configuracao(int capacidade, int andares);
	void entrar();
	void sair();
	void subir();
	void descer();
	void exibir();
};

#endif
