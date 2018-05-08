#include "../include/chocolate.hpp"

Chocolate::Chocolate(string nome, double preco, string marca, string descricao, string dataFabricacao, string validade, string genero, string tipo){
	this->nome = nome;
	this->preco = preco;
	this->marca = marca;
	this->descricao = descricao;
	this->dataFabricacao = dataFabricacao;
	this->validade = validade;
	this->genero = genero;
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