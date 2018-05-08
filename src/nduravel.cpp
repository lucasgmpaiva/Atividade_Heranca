#include <iostream>
#include "../include/nduravel.hpp"

N_Duravel::N_Duravel(){

}

N_Duravel::N_Duravel(string validade, string genero){
	this->validade = validade;
	this->genero = genero;
}

N_Duravel::~N_Duravel(){

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