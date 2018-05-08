#include "../include/chocolate.hpp"

Chocolate::Chocolate(string tipo){
	this->tipo = tipo;
}

Chocolate::~Chocolate(){

}

string Chocolate::getTipo(){
	return this->tipo;
}
void Chocolate::setTipo(string tipo){
	this->tipo = tipo;
}