#include "../include/refrigerante.hpp"

Refrigerante::Refrigerante(){

}

Refrigerante::Refrigerante(string sabor){
	this->sabor = sabor;
}

Refrigerante::~Refrigerante(){
	
}

string Refrigerante::getSabor(){
	return this->sabor;
}

void Refrigerante::setSabor(string sabor){
	this->sabor = sabor;
}