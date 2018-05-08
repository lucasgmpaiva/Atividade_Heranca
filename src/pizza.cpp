#include "../include/pizza.hpp"

Pizza::Pizza(){

}

Pizza::Pizza(char tamanho){
	this->tamanho = tamanho;
}
Pizza::~Pizza(){

}

char Pizza::getTamanho(){
	return this->tamanho;
}

void Pizza::setTamanho(char tamanho){
	this->tamanho = tamanho;
}