PROG = cpp_crud
CC = g++ -std=c++11
FLAGS = -O -g -Wall
OBJS =  main.o menu.o empresa.o funcionario.o empresa-crud.o funcionario-crud.o data.o dataUtil.o stringUtil.o
MENU_PATH = ./telas/menu
EMPRESA-CRUD_PATH = ./telas/empresa-crud
FUNCIONARIO-CRUD_PATH = ./telas/funcionario-crud

EMPRESA_PATH = ./modelos/empresa
FUNCIONARIO_PATH = ./modelos/funcionario
DATA_PATH = ./modelos/data

UTILS_PATH = ./utils

$(PROG):$(OBJS)				
		$(CC) -o $(PROG) $(OBJS)
		rm -f *.o
		./$(PROG)
all:
	$(PROG)
main.o:
	$(CC) $(FLAGS) -c main.cpp
	
menu.o: stringUtil.o
	$(CC) $(FLAGS) -c $(MENU_PATH)/menu.cpp

empresa.o:
	$(CC) $(FLAGS) -c $(EMPRESA_PATH)/empresa.cpp

funcionario.o: data.o
	$(CC) $(FLAGS) -c $(FUNCIONARIO_PATH)/funcionario.cpp
	
data.o:
	$(CC) $(FLAGS) -c $(DATA_PATH)/data.cpp

empresa-crud.o:
	$(CC) $(FLAGS) -c $(EMPRESA-CRUD_PATH)/empresa-crud.cpp

funcionario-crud.o: funcionario.o data.o
	$(CC) $(FLAGS) -c $(FUNCIONARIO-CRUD_PATH)/funcionario-crud.cpp

dataUtil.o: data.o
	$(CC) $(FLAGS) -c $(UTILS_PATH)/dataUtil.cpp

stringUtil.o:
	$(CC) $(FLAGS) -c $(UTILS_PATH)/stringUtil.cpp


cls:
	rm -f $(PROG) $(OBJS)