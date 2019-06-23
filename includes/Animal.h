/**
* @file Animal.h
* @brief Domínio de Animal
* @author Yago Beserra Marques
* @since 09/06/2019
* @date 09/06/2019
*/
#ifndef ANIMAL_H
#define ANIMAL_H

using namespace std;

#include <iostream>
#include <string>
#include "./data.h"
#include "./Veterinario.h"
#include "./Tratador.h"
class Animal
{
private:
    int m_id;
    string m_classe;
    string m_nome_cientifico;
    char m_sexo;
    double m_tamanho;
    string m_dieta;
    Veterinario m_veterinario; //Relção
    Tratador m_tratador;       //Relação
    string m_nome_batismo;

public:
    Animal();
    ~Animal();
    int getM_id();
    void setM_id(int m_id);
    string getM_classe();
    void setM_classe(string m_classe);
    string getM_nome_cientifico();
    void setM_nome_cientifico(string m_nome_cientifico);
    char getM_sexo();
    void setM_sexo(char m_sexo);
    double getM_tamanho();
    void setM_tamanho(double m_tamanho);
    string getM_dieta();
    void setM_dieta(string m_dieta);
    Veterinario getM_veterinario();
    void setM_veterinario(Veterinario m_veterinario);
    Tratador getM_Tratador();
    void setM_tratador(Tratador m_tratador);
    string getM_nome_batismo();
    void setM_nome_batismo(string m_nome_batismo);

    //sobrecarga de operadores:
};
#endif
