PROG = cpp_crud
CC = g++ -std=c++11
FLAGS = -O -g -Wall
OBJS =  main.o menu.o animal.o
MENU_PATH = ./telas/menu

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
	
menu.o:
	$(CC) $(FLAGS) -c $(MENU_PATH)/menu.cpp

animal.o:
	$(CC) $(FLAGS) -c $(ANIMAL_PATH)/Animal.cpp



cls:
	rm -f $(PROG) $(OBJS)