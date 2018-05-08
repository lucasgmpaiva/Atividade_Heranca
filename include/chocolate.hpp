#ifndef CHOCO_H
#define CHOCO_H
#include "nduravel.hpp"

class Chocolate: public N_Duravel{

	protected:
		string tipo;

	public:
		Chocolate(string nome, double preco, string marca, string descricao, string dataFabricacao, string validade, string genero, string tipo);
		~Chocolate();
		string getTipo();
		void setTipo(string tipo);
};

#endif