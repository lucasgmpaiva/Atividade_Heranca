#ifndef N_DURAVEL_H
#define N_DURAVEL_H

#include <string>
#include "produto.hpp"

class N_Duravel{

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