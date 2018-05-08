#ifndef DEPO_H
#define DEPO_H
#include <vector>
using namespace std;
#include "produto.hpp"

class Deposito{

	protected:
		std::vector<Produto> vetor;

	public:
		Deposito();
		~Deposito();
		void adicionarProduto(Produto p);
		void removerProduto(string nome);
		void quantidadeProdutos();
		void depositoVazio();
		void produtoMaisCaro();
};

#endif