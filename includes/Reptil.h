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
#include "Animal.h"

using namespace std;

class Reptil : public Animal{
    private:
        bool m_venenoso;
        string m_tipo_veneno;

    public:          
        Reptil();
        ~Reptil();
        bool getM_venenoso();
        void setM_venenoso(bool m_venenoso);
        string getM_tipo_veneno();
        void setM_tipo_veneno(string m_tipo_veneno);
        //sobrecarga de operadores:     
};
#endif