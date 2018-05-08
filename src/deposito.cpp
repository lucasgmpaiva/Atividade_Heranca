#include <iostream>
#include "../include/deposito.hpp"

Deposito::Deposito(){

}

Deposito::~Deposito(){
}

void Deposito::adicionarProduto(Produto p){
	this->vetor.push_back(p);
}

void Deposito::removerProduto(string nome){
	int aux;
	for(int i=0; i<(int)this->vetor.size(); i++){
		if(this->vetor[i].getNome() == nome){
			aux = i;
			break;
		}
	}
	this->vetor.erase(vetor.begin()+aux);
}

void Deposito::quantidadeProdutos(){
	cout << "Existem " << this->vetor.size() << " produtos no depósito." << endl;
}

void Deposito::produtoMaisCaro(){
	if((int)this->vetor.size() > 0){
		int max = 0;
		for(int i=0; i<(int)this->vetor.size(); i++){
			if(this->vetor[max].getPreco() <= this->vetor[i].getPreco()){max = i;}
		}
		cout << "Produto mais caro: " << this->vetor[max].getNome();
		cout << " -> " << this->vetor[max].getPreco() << endl;
		return;
	}else{
		cout << "Não há produtos no depósito!" << endl;
	}
}