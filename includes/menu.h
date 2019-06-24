/**
* @file menu.h
* @brief Menu do sistema
* @author Marcelo Moura
* @since 23/04/2019
* @date 01/05/2019
*/
#ifndef MENU_H
#define MENU_H
#include<sstream>
#include <iostream>
#include<fstream>
#include<string>
#include <stdlib.h>
#include <cstdlib>
#include <map>
#include <vector>

#include "Veterinario.h"
#include "Tratador.h"
#include "Animal.h"

using namespace std;
class Menu{
	private:
	map<int, Animal> animais;
	map<int, Veterinario> veterinarios;
	map<int, Tratador> tratadores;
	public:
	void iniciarMenu();
	void carregarDados(string arquivoAnimais, string arquivoFuncionarios);
	void cadastrarVeterinario();
	void salvarVeterinario();
	void salvarTratador();
	Veterinario getVeterinario_por_id(int id);
	Tratador getTratador_por_id(int id);
};
#endif
