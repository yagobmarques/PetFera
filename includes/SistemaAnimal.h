/*
*
* @file SistemaAnimal.h
* @brief Domínio de SistemaAnimal
* @author Rodolfo Dantas de Oliveira 
* @since 24/06/2019
* @date 24/06/2019
*/
#ifndef SISTEMA_ANIMAL_H
#define SISTEMA_ANIMAL_H

using namespace std;

#include <iostream>
#include <string>
#include "Veterinario.h"
#include "Tratador.h"
#include <fstream>
#include <cstdio>

#include <map>
#include "Animal.h"
#include<sstream>
#include <stdlib.h>

class SistemaAnimal{
private:
    map<int, Animal> animais;
	map<int, Veterinario> veterinarios;
	map<int, Tratador> tratadores;
public:
    SistemaAnimal();
    ~SistemaAnimal();

    void carregarDados();
    void cadastrarAnimal();
    void salvarAlteracao();
    void alterarDados(int id, Animal a);
    void listarAnimais();
    Animal verificarID(int id);
    void consultar_animal_por_classe();
    void consultar_animal_por_tratador();
    void consultar_animal_por_veterinario();
    Veterinario getVeterinario_por_id(int id);
	Tratador getTratador_por_id(int id);
};
#endif