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
        string nome;
        double salario;
        Data dataAdmissao;
        string nomeEmpresa;
    public:          
        Funcionario();
        Funcionario(string nome, double salario, Data dataAdmissao);       
        ~Funcionario();
        string getNome(){
            return this->nome;
        };
        void setNome(string nome){
            this->nome = nome;
        };
        double getSalario(){
            return this->salario;
        };
        void setSalario(double salario){
            this->salario = salario;
        };
        Data getDataAdmissao(){            
            return this->dataAdmissao;
        };
        void setDataAdmissao(Data dataAdmissao){
            this->dataAdmissao = dataAdmissao;
        };
        string getNomeEmpresa(){
            return this->nomeEmpresa;
        }
        void setNomeEmpresa(string nomeEmpresa){
            this->nomeEmpresa = nomeEmpresa;
        }        

        //sobrecarga de operadores:
        Funcionario& operator= (Funcionario const &f);
        friend ostream& operator<< (ostream &o, Funcionario const f);
       
};

#endif
