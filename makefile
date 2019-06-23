PROG = cpp_crud
CC = g++ -std=c++11
FLAGS = -O -g -Wall

OBJS =  main.o menu.o  Funcionario.o animal-crud.o funcionario-crud.o data.o dataUtil.o stringUtil.o Animal.o AnimalExotico.o AnimalNativo.o AnimalSilvestre.o Anfibio.o AnfibioExotico.o AnfibioNativo.o Ave.o AveExotica.o AveNativa.o Mamifero.o MamiferoExotico.o MamiferoNativo.o Reptil.o ReptilExotico.o ReptilNativo.o  Tratador.o veterinario.o 
MENU_PATH = ./telas/menu
ANIMAL-CRUD_PATH = ./telas/animal-crud
FUNCIONARIO-CRUD_PATH = ./telas/funcionario-crud
DATA_PATH = ./modelos/data
ANIMAL_PATH = ./modelos/animal


UTILS_PATH = ./utils

$(PROG):$(OBJS)				
		$(CC) -o $(PROG) $(OBJS)
		rm -f *.o
		./$(PROG)
all:
	$(PROG)
main.o:
	$(CC) $(FLAGS) -c main.cpp

Animal.o: Animal.h data.h Veterinario.h Tratador.h   
	$(CC) $(FLAGS) -c $(ANIMAL_PATH)/Animal.cpp  

AnimalExotico.o: AnimalExotico.h AnimalExotico.cpp
	$(CC) $(FLAGS) -c AnimalExotico.cpp

AnimalNativo.o: AnimalNativo.h animalNativo.cpp
	$(CC) $(FLAGS) -c AnimalNativo.cpp

AnimalSilvestre.o: AnimalSilvestre.h Animal.h AnimalSilvestre.cpp
	$(CC) $(FLAGS) -c AnimalSilvestre.cpp

Anfibio.o: Anfibio.h Animal.h Anfibio.cpp
	$(CC) $(FLAGS) -c Anfibio.cpp Animal.cpp

AnfibioExotico.o: AnfibioExotico.h AnfibioExotico.cpp Anfibio.h
	$(CC) $(FLAGS) -c AnfibioExotico.cpp

AnfibioNativo.o: AnfibioNativo.h AnfibioNativo.cpp Anfibio.h
	$(CC) $(FLAGS) -c AnfibioNativo.cpp

Ave.o: Ave.h Animal.h
	$(CC) $(FLAGS) -c Ave.cpp

AveExotica.o: AveExotica.h AveExotica.cpp Ave.h
	$(CC) $(FLAGS) -c AveExotica.cpp

AveNativa.o: AveNativa.h AveNativa.cpp Ave.h
	$(CC) $(FLAGS) -c AveNativa.cpp

Mamifero.o: Mamifero.h Mamifero.cpp Animal.h
	$(CC) $(FLAGS) -c Mamifero.cpp

MamiferoExotico.o: MamiferoExotico.h MamiferoExotico.cpp Mamifero.h
	$(CC) $(FLAGS) -c MamiferoExotico.cpp

MamiferoNativo.o: MamiferoNativo.h MamiferoNativo.cpp Mamifero.h
	$(CC) $(FLAGS) -c MamiferoNativo.cpp

Reptil.o: Reptil.h Animal.h reptil.cpp
	$(CC) $(FLAGS) -c Reptil.cpp

ReptilExotico.o: ReptilExotico.h ReptilExotico.cpp Reptil.h
	$(CC) $(FLAGS) -c ReptilExotico.cpp

ReptilNativo.o: ReptilNativo.h ReptilNativo.cpp Reptil.h
	$(CC) $(FLAGS) -c ReptilNativo.cpp

Tratador.o: Tratador.h Tratador.cpp Funcionario.h 
	$(CC) $(FLAGS) -c Tratador.cpp 

Veterinario.o: Veterinario.h Veterinario.cpp Funcionario.h
	$(CC) $(FLAGS) -c Veterinario.cpp

Sistema.o: Sistema.h data.h Sistema.cpp Veterinario.h Tratador.h
	$(CC) $(FLAGS) -c Sistema.cpp 
menu.o: menu.h menu.cpp Animal.h
	$(CC) $(FLAGS) -c $(MENU_PATH)/menu.cpp


funcionario.o: Funcionario.h Funcionario.cpp data.h
	$(CC) $(FLAGS) -c Funcionario.cpp
	
data.o: data.cpp data.h
	$(CC) $(FLAGS) -c $(DATA_PATH)/data.cpp

animal-crud.o: animal-crud.h
	$(CC) $(FLAGS) -c animal-crud.cpp

funcionario-crud.o: funcionario.o data.o
	$(CC) $(FLAGS) -c $(FUNCIONARIO-CRUD_PATH)/funcionario-crud.cpp

dataUtil.o: data.o
	$(CC) $(FLAGS) -c $(UTILS_PATH)/dataUtil.cpp

stringUtil.o:
	$(CC) $(FLAGS) -c $(UTILS_PATH)/stringUtil.cpp






cls:
	rm -f $(PROG) $(OBJS)