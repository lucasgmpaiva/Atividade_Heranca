#include "../include/refrigerante.hpp"

Refrigerante::Refrigerante(string nome, double preco, string marca, string descricao, string dataFabricacao, string validade, string genero, string sabor){
	this->nome = nome;
	this->preco = preco;
	this->marca = marca;
	this->descricao = descricao;
	this->dataFabricacao = dataFabricacao;
	this->validade = validade;
	this->genero = genero;
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