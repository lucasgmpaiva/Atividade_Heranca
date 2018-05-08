#include <iostream>
#include "../include/duravel.hpp"

Duravel::Duravel(){

}

Duravel::~Duravel(){

}

string Duravel::getMaterial(){
	return this->material;
}

void Duravel::setMaterial(string material){
	this->material = material;
}

string Duravel::getDurabilidade(){
	return this->durabilidade;
}

void Duravel::setDurabilidade(string durabilidade){
	this->durabilidade = durabilidade;
}