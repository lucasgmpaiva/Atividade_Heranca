#ifndef CHOCO_H
#define CHOCO_H
#include "nduravel.hpp"

class Chocolate: public N_Duravel{

	protected:
		string tipo;

	public:
		Chocolate(string tipo);
		~Chocolate();
		string getTipo();
		void setTipo(string tipo);
};

#endif