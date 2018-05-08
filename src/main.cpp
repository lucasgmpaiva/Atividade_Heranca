#include <iostream>
#include <vector>
using namespace std;
#include <string>
#include <stdio.h>
#include "../include/carro.hpp"
#include "../include/livro.hpp"
#include "../include/celular.hpp"
#include "../include/pizza.hpp"
#include "../include/refrigerante.hpp"
#include "../include/chocolate.hpp"
#include "../include/deposito.hpp"

int main(){
	Deposito produtos;
	
	Carro umCarro("Prisma",44990.00,"Chevrolet","Carro Popular","2018","Metal","Anos, se bem cuidado", 4, "Prata", "666-SCRR");
	produtos.adicionarProduto(umCarro);

	Livro umLivro("Laranja Mecânica", 60.00, "ALEPH", "Grande Romance Cult, capa dura, com rascunhos do autor.", "1962", "Papel", "Muito, se bem cuidado", "Anthony Burgess", 352);
	produtos.adicionarProduto(umLivro);

	Celular umCelular("Samsung Galaxy S8", 2500.00, "Samsung", "Display Infinito(ha ha ha)","2017", "Vidro e Metal", "Caiu, Quebrou", "Android");
	produtos.adicionarProduto(umCelular);

	Pizza umaPizza("Portuguesa", 32.00, "Famiglia Reis Magos", "Muito gostosa, recomendo", "08/05/2018", "09/05/2018", "Alimento", 'G');
	produtos.adicionarProduto(umaPizza);

	Refrigerante umaLatinha("Fanta Guaraná", 3.50, "Fanta", "Cópia do Guaraná Antártica", "08/10/2017", "08/01/2018", "Bebida", "Guaraná");
	produtos.adicionarProduto(umaLatinha);

	Chocolate umChocolate("Disquete", 2.50, "Arcor", "Cópia barata de MM", "08/05/2018", "08/10/2018", "Alimento", "Amendoim");
	produtos.adicionarProduto(umChocolate);

	produtos.produtoMaisCaro();

	produtos.remProduto("Prisma");

	produtos.produtoMaisCaro();
}