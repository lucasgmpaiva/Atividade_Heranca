#ifndef PIZZA_H
#define PIZZA_H
#include "nduravel.hpp"
class Pizza: public N_Duravel{

	protected:
		char tamanho;

	public:
		Pizza(string nome, double preco, string marca, string descricao, string dataFabricacao, string validade, string genero, char tamanho);
		~Pizza();
		
		char getTamanho();
		void setTamanho(char tamanho);
	
};

#endif