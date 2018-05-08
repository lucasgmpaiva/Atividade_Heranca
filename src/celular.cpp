#include "../include/celular.hpp"

Celular::Celular(string sistemaOperacional){
	this->sistemaOperacional = sistemaOperacional;
}

Celular::~Celular(){

}

string Celular::getSistemaOperacional(){
	return this->sistemaOperacional;
}

void Celular::setSistemaOperacional(string sistemaOperacional){
	this->sistemaOperacional = sistemaOperacional;
}