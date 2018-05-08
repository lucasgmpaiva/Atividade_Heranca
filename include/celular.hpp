#ifndef CELULAR_H
#define CELULAR_H
#include "duravel.hpp"

class Celular: public Duravel{

	protected:
		string sistemaOperacional;

	public:
		Celular(string nome, double preco, string marca, string descricao, string dataFabricacao, string material, string durabilidade, string sistemaOperacional);
		~Celular();
		string getSistemaOperacional();
		void setSistemaOperacional(string sistemaOperacional);
};

#endif