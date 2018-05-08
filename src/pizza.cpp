#include "../include/pizza.hpp"

Pizza::Pizza(string nome, double preco, string marca, string descricao, string dataFabricacao, string validade, string genero, char tamanho){
	this->nome = nome;
	this->preco = preco;
	this->marca = marca;
	this->descricao = descricao;
	this->dataFabricacao = dataFabricacao;
	this->validade = validade;
	this->genero = genero;
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