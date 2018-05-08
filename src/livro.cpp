#include "../include/livro.hpp"

Livro::Livro(string nome, double preco, string marca, string descricao, string dataFabricacao, string material, string durabilidade, string autor, int qntdPaginas){
	this->nome = nome;
	this->preco = preco;
	this->marca = marca;
	this->descricao = descricao;
	this->dataFabricacao = dataFabricacao;
	this->material = material;
	this->durabilidade = durabilidade;
	this->autor = autor;
	this->qntdPaginas = qntdPaginas;
}

Livro::~Livro(){

}

string Livro::getAutor(){
	return this->autor;
}

void Livro::setAutor(string autor){
	this->autor = autor;
}

int Livro::getQntdPaginas(){
	return this->qntdPaginas;
}

void Livro::setQntdPaginas(int qntdPaginas){
	this->qntdPaginas = qntdPaginas;
}