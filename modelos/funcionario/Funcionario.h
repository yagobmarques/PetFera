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
        int getM_id();
        void setM_id(int m_id);
        string getM_nome();
        void setM_nome(string m_nome);
        string getM_cpf();
        void setM_cpf(string m_cpf);
        short getM_idade();
        void setM_idade(short m_idade);
        short getM_tipo_sanguineo();
        void setM_tipo_sanguineo(short m_tipo_sanguineo);
        char getM_fator_rh();
        void setM_fator_rh(char m_fator_rh);
        string getM_especialidade();
        void setM_especialidade(string m_especialidade);
 
            
        //sobrecarga de operadores:

        Funcionario& operator= (Funcionario const &f);
        friend ostream& operator<< (ostream &o, Funcionario const f);       
};

#endif
