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

Animal.o: Animal.h
	$(CC) $(FLAGS) -c Animal.cpp

AnimalExotico.o: AnimalExotico.h
	$(CC) $(FLAGS) -c AnimalExotico.cpp

AnimalNativo.o: AnimalNativo.h
	$(CC) $(FLAGS) -c AnimalNativo.cpp

AnimalSilvestre.o: AnimalSilvestre.h
	$(CC) $(FLAGS) -c AnimalSilvestre.cpp

Anfibio.o: Anfibio.h
	$(CC) $(FLAGS) -c Anfibio.cpp

AnfibioExotico.o: AnfibioExotico.h
	$(CC) $(FLAGS) -c AnfibioExotico.cpp

AnfibioNativo.o: AnfibioNativo.h
	$(CC) $(FLAGS) -c AnfibioNativo.cpp

Ave.o: Ave.h
	$(CC) $(FLAGS) -c Ave

AveExotica.o: AveExotica.h
	$(CC) $(FLAGS) -c AveExotica.cpp

AveNativa.o: AveNativa.h
	$(CC) $(FLAGS) -c AveNativa.cpp

Mamifero.o: Mamifero.h
	$(CC) $(FLAGS) -c Mamifero.cpp

MamiferoExotico.o: MamiferoExotico.h
	$(CC) $(FLAGS) -c MamiferoExotico.cpp

MamiferoNativo.o: MamiferoNativo.h
	$(CC) $(FLAGS) -c MamiferoNativo.cpp

MamiferoNativo.o: MamiferoNativo.h
	$(CC) $(FLAGS) -c MamiferoNativo.cpp

Reptil.o: Reptil.h
	$(CC) $(FLAGS) -c Reptil.cpp

ReptilExotico.o: ReptilExotico.h
	$(CC) $(FLAGS) -c ReptilExotico.cpp

ReptilNativo.o: ReptilNativo.h
	$(CC) $(FLAGS) -c ReptilNativo.cpp

Tratador.o: Tratador.h
	$(CC) $(FLAGS) -c Tratador.cpp

Veterinario.o: Veterinario.h
	$(CC) $(FLAGS) -c Veterinario.cpp

	
menu.o:
	$(CC) $(FLAGS) -c $(MENU_PATH)/menu.cpp


funcionario.o: Funcionario.h
	$(CC) $(FLAGS) -c Funcionario.cpp
	
data.o:
	$(CC) $(FLAGS) -c $(DATA_PATH)/data.cpp

animal-crud.o: animal-crud.h
	$(CC) $(FLAGS) -c animal-crud.cpp

funcionario-crud.o: funcionario.o data.o
	$(CC) $(FLAGS) -c $(FUNCIONARIO-CRUD_PATH)/funcionario-crud.cpp

dataUtil.o: data.o
	$(CC) $(FLAGS) -c $(UTILS_PATH)/dataUtil.cpp

stringUtil.o:
	$(CC) $(FLAGS) -c $(UTILS_PATH)/stringUtil.cpp

animal.o:
	$(CC) $(FLAGS) -c $(ANIMAL_PATH)/Animal.cpp




cls:
	rm -f $(PROG) $(OBJS)