#ifndef N_DURAVEL_H
#define N_DURAVEL_H

#include "produto.hpp"

class N_Duravel: public Produto{

	protected:
		string validade;
		string genero;

	public:
		N_Duravel();
		~N_Duravel();
		string getValidade();
		void setValidade(string validade);
		string getGenero();
		void setGenero(string genero);

};

#endif