/**
* @file Mamifero.h
* @brief Domínio de Mamifero
* @author Yago Beserra Marques
* @since 09/06/2019
* @date 09/06/2019
*/
#ifndef MAMIFERO_H  
#define MAMIFERO_H

#include <iostream>
#include <string>
#include "../Animal.h"

using namespace std;

class Mamifero : public Animal{
    private:
        string m_cor_pelo;
        
    public:          
        Mamifero();
        ~Mamifero();
        //sobrecarga de operadores:     
};
#endif