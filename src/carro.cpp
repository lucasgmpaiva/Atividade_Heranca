#include "../include/carro.hpp"

Carro::Carro(string nome, double preco, string marca, string descricao, string dataFabricacao, string material, string durabilidade, int qntdPortas, string cor, string placa){
	this->nome = nome;
	this->preco = preco;
	this->marca = marca;
	this->descricao = descricao;
	this->dataFabricacao = dataFabricacao;
	this->material = material;
	this->durabilidade = durabilidade;
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