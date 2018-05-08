#include "../include/celular.hpp"

Celular::Celular(string nome, double preco, string marca, string descricao, string dataFabricacao, string material, string durabilidade, string sistemaOperacional){
	this->nome = nome;
	this->preco = preco;
	this->marca = marca;
	this->descricao = descricao;
	this->dataFabricacao = dataFabricacao;
	this->material = material;
	this->durabilidade = durabilidade;
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