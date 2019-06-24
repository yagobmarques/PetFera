/**
* @file Animal.h
* @brief Domínio de Animal
* @author Marcelo Moura
* @since 09/06/2019
* @date 09/06/2019
*/
#ifndef ANIMAL_H
#define ANIMAL_H


#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <cstdlib>

#include "Veterinario.h"
#include "Tratador.h"
using namespace std;
class Animal
{
private:
    int m_id;
    string m_classe;
		string m_nome;
    string m_nome_cientifico;
    char m_sexo;
    double m_tamanho;
    string m_dieta;
    string m_nome_batismo;
		Tratador m_tratador;  
		Veterinario m_veterinario; 

public:
    
		
    int getM_id();
    void setM_id(int m_id);
    string getM_classe();
    void setM_classe(string m_classe);
    string getM_nome();
    void setM_nome(string m_nome);
		string getM_nome_cientifico();
    void setM_nome_cientifico(string m_nome_cientifico);
    char getM_sexo();
    void setM_sexo(char m_sexo);
    double getM_tamanho();
    void setM_tamanho(double m_tamanho);
    string getM_dieta();
    void setM_dieta(string m_dieta);
    string getM_nome_batismo();
		void setM_nome_batismo(string m_nome_batismo);
		Veterinario getM_veterinario();
    void setM_veterinario(Veterinario m_veterinario);
    Tratador getM_tratador();
    void setM_tratador(Tratador m_tratador);

    //sobrecarga de operadores:
		friend istream& operator>> (istream &is, Animal& animal);
};
#endif
