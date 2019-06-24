PROG = cpp_crud
CC = g++ -std=c++11
FLAGS = -O -g -Wall

OBJS =  main.o  Funcionario.o Tratador.o Veterinario.o data.o menu.o
ANIMAIS = Animal.o AnimalExotico.o AnimalNativo.o AnimalSilvestre.o Anfibio.o AnfibioExotico.o AnfibioNativo.o Ave.o AveExotica.o AveNativa.o Mamifero.o MamiferoExotico.o MamiferoNativo.o Reptil.o ReptilExotico.o ReptilNativo.o  
MENU_PATH = ./telas/menu
ANIMAL-CRUD_PATH = ./telas/animal-crud
FUNCIONARIO-CRUD_PATH = ./telas/funcionario-crud
DATA_PATH = ./modelos/data
ANIMAL_PATH = ./modelos/animal


UTILS_PATH = ./utils

$(PROG):$(OBJS)				
		$(CC) -o $(PROG) $(OBJS) $(ANIMAIS)
		rm -f *.o
		./$(PROG)
all:
	$(PROG)
main.o:
	$(CC) $(FLAGS) -c main.cpp

Animal.o: 
	$(CC) $(FLAGS) -c ./src/Animal.cpp  

AnimalExotico.o:
	$(CC) $(FLAGS) -c ./src/AnimalExotico.cpp

AnimalNativo.o: 
	$(CC) $(FLAGS) -c ./src/AnimalNativo.cpp

AnimalSilvestre.o: 
	$(CC) $(FLAGS) -c ./src/AnimalSilvestre.cpp

Anfibio.o: 
	$(CC) $(FLAGS) -c ./src/Anfibio.cpp 

AnfibioExotico.o:
	$(CC) $(FLAGS) -c ./src/AnfibioExotico.cpp

AnfibioNativo.o: 
	$(CC) $(FLAGS) -c ./src/AnfibioNativo.cpp

Ave.o: 
	$(CC) $(FLAGS) -c ./src/Ave.cpp

AveExotica.o: 
	$(CC) $(FLAGS) -c ./src/AveExotica.cpp

AveNativa.o:
	$(CC) $(FLAGS) -c ./src/AveNativa.cpp

Mamifero.o:
	$(CC) $(FLAGS) -c ./src/Mamifero.cpp

MamiferoExotico.o:
	$(CC) $(FLAGS) -c ./src/MamiferoExotico.cpp

MamiferoNativo.o:
	$(CC) $(FLAGS) -c ./src/MamiferoNativo.cpp

Reptil.o: 
	$(CC) $(FLAGS) -c ./src/Reptil.cpp

ReptilExotico.o: 
	$(CC) $(FLAGS) -c ./src/ReptilExotico.cpp

ReptilNativo.o:
	$(CC) $(FLAGS) -c ./src/ReptilNativo.cpp

Tratador.o:
	$(CC) $(FLAGS) -c ./src/Tratador.cpp 

Veterinario.o:
	$(CC) $(FLAGS) -c ./src/Veterinario.cpp

Sistema.o: 
	$(CC) $(FLAGS) -c ./src/Sistema.cpp 

# menu.o: menu.h menu.cpp Animal.h
# 	$(CC) $(FLAGS) -c ./src/$(MENU_PATH)/menu.cpp

Funcionario.o:
	$(CC) $(FLAGS) -c ./src/Funcionario.cpp
data.o: 
	$(CC) $(FLAGS) -c ./src/data.cpp
menu.o: 
	$(CC) $(FLAGS) -c ./src/menu.cpp

cls:
	rm -f $(PROG) $(OBJS)