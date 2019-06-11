/**
* @file funcionario.h
* @brief Domínio de Funcionario
* @author Felipe Rodrigues
* @since 23/04/2019
* @date 01/05/2019
*/
#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>
#include "../data/data.h"
#include "../../utils/dataUtil.h"
using namespace std;

class Funcionario{
    private:
        int m_id;
        string m_nome;
        string m_cpf;
        short m_idade;
        short m_tipo_sanguineo;
        char m_fator_rh;
        string m_especialidade;
    public:          
        Funcionario();
        ~Funcionario();
        void SetEspecialidade(string especialidade);
        void SetFator_rh(char fator_rh);
        char GetFator_rh();
        void SetTipo_sanguineo(short tipo_sanguineo);
        short GetTipo_sanguineo();
        void SetIdade(short idade);
        short GetIdade();
        void SetCpf(string cpf);
        string GetCpf();  
        void SetNome(string nome); 
        string GetNome();  
        void SetId(int id); 
        int GetId();  

    
     


            
        //sobrecarga de operadores:

        Funcionario& operator= (Funcionario const &f);
        friend ostream& operator<< (ostream &o, Funcionario const f);       
};

#endif
