#ifndef CARRO_H
#define CARRO_H
#include "duravel.hpp"

class Carro: public Duravel{

	protected:
		int qntdPortas;
		string cor;
		string placa;

	public:
		Carro(string nome, double preco, string marca, string descricao, string dataFabricacao, string material, string durabilidade, int qntdPortas, string cor, string placa);
		~Carro();
		int getQntdPortas();
		void setQntdPortas(int qntdPortas);
		string getCor();
		void setCor(string cor);
		string getPlaca();
		void setPlaca(string placa);
};

#endif