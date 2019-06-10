/**
* @file Ave.h
* @brief Domínio de Ave
* @author Yago Beserra Marques
* @since 09/06/2019
* @date 09/06/2019
*/
#ifndef AVE_H   
#define AVE_H

#include <iostream>
#include <string>
#include "../Animal.h"

using namespace std;

class Ave : public Animal{
    private:
        double m_tamanho_do_bico_cm;
        double m_envergadura_das_asas;
        
    public:          
        Ave();
        ~Ave();
        //sobrecarga de operadores:     
};
#endif