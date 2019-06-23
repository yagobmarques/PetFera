/**
* @file Sistema.h
* @brief Domínio de Sistema
* @author Yago Beserra Marques
* @since 09/06/2019
* @date 09/06/2019
*/
#ifndef SISTEMA_H
#define SISTEMA_H

using namespace std;

#include <iostream>
#include <string>
#include "data.h"
#include "Veterinario.h"
#include "Tratador.h"
#include <fstream>
#include <cstdio>
class Sistema{
private:
    
public:
    Sistema();
    ~Sistema();
    int verificarID(int id);
    void cadastrar_Veterinario();
    void cadastrar_Tratador();
    void cadastrar_Funcionario();
    void remover_Funcionario();
    void mostrar_Funcionarios();
    void management_Funcionario();

    //sobrecarga de operadores:
};
#endif