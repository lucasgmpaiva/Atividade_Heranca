#include "../include/carro.hpp"

Carro::Carro(int qntdPortas, string cor, string placa){
	this->qntdPortas = qntdPortas;
	this->cor = cor;
	this->placa = placa;
}

Carro::~Carro(){

}

int Carro::getQntdPortas(){
	return this->qntdPortas;
}

void Carro::setQntdPortas(int qntdPortas){
	this->qntdPortas = qntdPortas;
}

string Carro::getCor(){
	return this->cor;
}

void Carro::setCor(string cor){
	this->cor = cor;
}

string Carro::getPlaca(){
	return this->placa;
}

void Carro::setPlaca(string placa){
	this->placa = placa;
}