#ifndef REFRI_H
#define REFRI_H
#include "nduravel.hpp"
#include <string>
using namespace std;

class Refrigerante: public N_Duravel{

	protected:
		string sabor;

	public:
		Refrigerante(string nome, double preco, string marca, string descricao, string dataFabricacao, string validade, string genero, string sabor);
		~Refrigerante();
		string getSabor();
		void setSabor(string sabor);
	};
#endif