#include "../include/livro.hpp"

Livro::Livro(){
	
}

Livro::Livro(string autor, int qntdPaginas){
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