#ifndef DURAVEL_H
#define DURAVEL_H

#include <string>
#include "produto.hpp"

class Duravel: public Produto{
		
	protected:
		string material;
		string durabilidade;

	public:
		Duravel();
		Duravel(string material, string durabilidade);
		~Duravel();
		string getMaterial();
		void setMaterial(string material);
		string getDurabilidade();
		void setDurabilidade(string durabilidade);
};

#endif