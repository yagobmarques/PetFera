/**
* @file Tratador.h
* @brief Domínio de Tratador
* @author Yago Beserra Marques
* @since 09/06/2019
* @date 09/06/2019
*/
#ifndef TRATADOR_H
#define TRATADOR_H

#include <iostream>
#include <string>
#include "../Funcionario.h"
using namespace std;

class Tratador : public Funcionario{
    private:
        int m_nivel_de_segurança;
    public:          
        Tratador();
        ~Tratador();
        void SetNivel_de_segurança(int nivel_de_segurança);
        int GetNivel_de_segurança() const;
        
            
        //sobrecarga de operadores:     
};
#endif