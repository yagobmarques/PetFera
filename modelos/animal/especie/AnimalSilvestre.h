/**
* @file AnimalSilvestre.h
* @brief Domínio de Animal Silvestre
* @author Yago Beserra Marques
* @since 09/06/2019
* @date 09/06/2019
*/
#ifndef ANIMALSILVESTRE_H  
#define ANIMALSILVESTRE_H

#include <iostream>
#include <string>
#include "../Animal.h"

using namespace std;

class AnimalSilvestre{
    private:
        string m_autorizacao_ibama;
        
    public:          
        Mamifero();
        ~Mamifero();
        //sobrecarga de operadores:     
};
#endif