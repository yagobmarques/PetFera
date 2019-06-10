/**
* @file Veterinario.h
* @brief Domínio de Veterinario
* @author Yago Beserra Marques
* @since 09/06/2019
* @date 09/06/2019
*/
#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <iostream>
#include <string>
#include "../Funcionario.h"
using namespace std;

class Tratador : public Funcionario{
    private:
        string m_crmv;
    public:          
        Veterinario();
        ~Veterinario();
            
        //sobrecarga de operadores:     
};
#endif