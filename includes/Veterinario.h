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
#include "Funcionario.h"
using namespace std;

class Veterinario : public Funcionario{
    private:
        string m_crmv;
    public:        
        string getM_crmv();
        void setM_crmv(string m_crmv);
        //sobrecarga de operadores:    
				Veterinario& operator=(Veterinario& v ); 
};
#endif