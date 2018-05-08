PROG = Lojinha
CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic
OBJS = produto.o duravel.o nduravel.o carro.o livro.o celular.o pizza.o refrigerante.o chocolate.o deposito.o main.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o bin/$(PROG)

main.o :
	$(CC) $(CPPFALGS) -c src/main.cpp

produto.o : include/produto.hpp
	$(CC) $(CPPFLAGS) -c src/produto.cpp

duravel.o : include/duravel.hpp
	$(CC) $(CPPFLAGS) -c src/duravel.cpp

carro.o: include/carro.hpp
	$(CC) $(CPPFLAGS) -c src/carro.cpp	

celular.o: include/celular.hpp
	$(CC) $(CPPFLAGS) -c src/celular.cpp

livro.o: include/livro.hpp
	$(CC) $(CPPFLAGS) -c src/livro.cpp

nduravel.o : include/nduravel.hpp
	$(CC) $(CPPFLAGS) -c src/nduravel.cpp

pizza.o: include/pizza.hpp
	$(CC) $(CPPFLAGS) -c src/pizza.cpp

refrigerante.o: include/refrigerante.hpp
	$(CC) $(CPPFLAGS) -c src/refrigerante.cpp

chocolate.o: include/chocolate.hpp
	$(CC) $(CPPFLAGS) -c src/chocolate.cpp

deposito.o : include/deposito.hpp
	$(CC) $(CPPFLAGS) -c src/deposito.cpp

move:
	mv *.o build/
clean:
	rm -f build/*.o