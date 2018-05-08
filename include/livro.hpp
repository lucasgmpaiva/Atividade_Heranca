#ifndef LIVRO_H
#define LIVRO_H
#include "duravel.hpp"

class Livro: public Duravel{
	
	protected:
		string autor;
		int qntdPaginas;

	public:
		Livro(string nome, double preco, string marca, string descricao, string dataFabricacao, string material, string durabilidade, string autor, int qntdPaginas);
		~Livro();
		string getAutor();
		void setAutor(string autor);
		int getQntdPaginas();
		void setQntdPaginas(int qntdPaginas);
};

#endif