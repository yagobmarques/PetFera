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
        double Ave::getM_tamanho_do_bico_cm();
        void Ave::setM_tamanho_do_bico_cm(double m_tamanho_do_bico_cm);
        double Ave::getM_envergadura_das_asas();
        void Ave::setM_envergadura_das_asas(double m_envergadura_das_asas);
        
        //sobrecarga de operadores:     
};
#endif