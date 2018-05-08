#include <iostream>
#include "../include/produto.hpp"

Produto::Produto(){

}

Produto::~Produto(){

}

string Produto::getNome(){
	return this->nome;
}

void Produto::setNome(string nome){
	this->nome = nome;
}

double Produto::getPreco(){
	return this->preco;
}

void Produto::setPreco(double preco){
	this->preco = preco;
}

string Produto::getMarca(){
	return this->marca;
}

void Produto::setMarca(string marca){
	this->marca = marca;
}

string Produto::getDescricao(){
	return this->descricao;
}

void Produto::setDescricao(string descricao){
	this->descricao = descricao;
}

string Produto::getDataFabricacao(){
	return this->dataFabricacao;
}

void Produto::setDataFabricacao(string dataFabricacao){
	this->dataFabricacao = dataFabricacao;
}