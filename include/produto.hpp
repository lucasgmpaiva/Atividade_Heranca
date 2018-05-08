#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>
using namespace std;

class Produto{
	
	protected:
		string nome;
		double preco;
		string marca;
		string descricao;
		string dataFabricacao;

	public:
		Produto();
		~Produto();
		string getNome();
		void setNome(string nome);
		double getPreco();
		void setPreco(double preco);
		string getMarca();
		void setMarca(string marca);
		string getDescricao();
		void setDescricao(string descricao);
		string getDataFabricacao();
		void setDataFabricacao(string dataFabricacao);

};

#endif