/**
* @file Animal.h
* @brief Domínio de Animal
* @author Yago Beserra Marques
* @since 09/06/2019
* @date 09/06/2019
*/
#ifndef ANIMAL_H    
#define ANIMAL_H

#include <iostream>
#include <string>

using namespace std;

class Animal{
    private:
        int m_id;
        string m_classe;
        string m_nome_cientifico;
        char m_sexo;
        double m_tamanho;
        string m_dieta;
        Veterinario m_veterinario;
        Tratador m_tratador;
        string m_nome_batismo;
    public:          
        Animal();
        ~Animal();
            
        //sobrecarga de operadores:     
};
#endif