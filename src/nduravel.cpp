#include <iostream>
#include "../include/nduravel.hpp"

Nao_duravel::N_Duravel(){

}

Nao_duravel::~N_Duravel(){

}

string N_Duravel::getValidade(){
	return this->validade;
}

void N_Duravel::setValidade(string validade){
	this->validade = validade;
}

string N_Duravel::getGenero(){
	return this->genero;
}

void N_Duravel::setGenero(string genero){
	this->genero = genero;
}