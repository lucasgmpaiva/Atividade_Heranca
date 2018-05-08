#ifndef CELULAR_H
#define CELULAR_H
#include "duravel.hpp"

class Celular: public Duravel{

	protected:
		string sistemaOperacional;

	public:
		Celular(string sistemaOperacional);
		~Celular();
		string getSistemaOperacional();
		void setSistemaOperacional(string sistemaOperacional);
};

#endif