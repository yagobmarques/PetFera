/**
* @file Anfibio.h
* @brief Domínio de Anfibio
* @author Yago Beserra Marques
* @since 09/06/2019
* @date 09/06/2019
*/
#ifndef ANFIBIO_H   
#define ANFIBIO_H

#include <iostream>
#include <string>
#include "../Animal.h"

using namespace std;

class Anfibio : public Animal{
    private:
        int m_total_de_mudas;
        date m_ultima_muda;
    public:          
        Anfibio();
        ~Anfibio();
            
        //sobrecarga de operadores:     
};
#endif