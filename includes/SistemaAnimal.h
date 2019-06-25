/**
* @file Sistema.h
* @brief Domínio de Sistema
* @author Yago Beserra Marques
* @since 09/06/2019
* @date 09/06/2019
*/
#ifndef SISTEMA_ANIMAL_H
#define SISTEMA_ANIMAL_H

using namespace std;

#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <map>
#include<sstream>
#include <stdlib.h>
#include "../utils/stringUtil.h"
#include "Veterinario.h"
#include "Tratador.h"
#include "Animal.h"
class SistemaAnimal: public Animal{
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
    void alterarDados(int id);
    void deletarAnimal(int id);
    void listarAnimal();
    void consultar_animal_por_classe();
    void consultar_animal_por_tratador();
    void consultar_animal_por_veterinario();
    Veterinario getVeterinario_por_id(int id);
	Tratador getTratador_por_id(int id);
    void consultar_animal_por_classe_aux(string d);
    //sobrecarga de operadores:
    
};
#endif