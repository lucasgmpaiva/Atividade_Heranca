#ifndef LIVRO_H
#define LIVRO_H
#include "duravel.hpp"

class Livro: public Duravel{
	
	protected:
		string autor;
		int qntdPaginas;

	public:
		Livro();
		Livro(string autor, int qntdPaginas);
		~Livro();
		string getAutor();
		void setAutor(string autor);
		int getQntdPaginas();
		void setQntdPaginas(int qntdPaginas);
};

#endif