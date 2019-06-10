/**
* @file Reptil.h
* @brief Domínio de Reptil
* @author Yago Beserra Marques
* @since 09/06/2019
* @date 09/06/2019
*/
#ifndef REPTIL_H
#define REPTIL_H

#include <iostream>
#include <string>
#include "../Animal.h"

using namespace std;

class Reptil : public Animal{
    private:
        bool m_venenoso;
        string m_tipo_veneno;
        
    public:          
        Reptil();
        ~Reptil();
        //sobrecarga de operadores:     
};
#endif