/**
* @file main.cpp
* @brief Arquivo de inicialização
* @author Felipe Rodrigues
* @since 23/04/2019
* @date 01/05/2019
*/
#include "main.h"
int main (int argc, char *argv[]) {  
    Sistema *s = new Sistema();
    s->management_Funcionario();
    Menu *menu = new Menu();
	menu->iniciarMenu();
    return 0;
}
