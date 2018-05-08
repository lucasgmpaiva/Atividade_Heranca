#ifndef REFRI_H
#define REFRI_H
#include "nao_duravel.hpp"
#include <string>
using namespace std;

class Refrigerante: public N_Duravel{

	protected:
		string sabor;

	public:
		Refrigerante();
		Refrigerante(string sabor);
		~Refrigerante();
		string getSabor();
		void setSabor(string sabor);
	};
#endif