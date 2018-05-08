#ifndef PIZZA_H
#define PIZZA_H
#include "nduravel.hpp"
class Pizza: public N_Duravel{

	protected:
		char tamanho;

	public:
		Pizza(char tamanho);
		~Pizza();
		
		char getTamanho();
		void setTamanho(char tamanho);
	
};

#endif