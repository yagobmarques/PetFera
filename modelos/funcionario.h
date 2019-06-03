// -*- C++ -*-
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   funcionario.h
 * Author: yagomarques
 *
 * Created on 3 de Junho de 2019, 11:18
 */

#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
using namespace std;

class Funcionario{
    protected: 
        int m_id;
        string m_nome, m_cpf, m_especialidade;
        short m_idade, m_tipo_sanguineo;
        char m_fator_rh;
    public:
        void SetFator_rh(char fator_rh) {
    m_fator_rh = fator_rh;
    }

    char GetFator_rh() const {
        return m_fator_rh;
    }

    void SetTipo_sanguineo(short tipo_sanguineo) {
        m_tipo_sanguineo = tipo_sanguineo;
    }

    short GetTipo_sanguineo() const {
        return m_tipo_sanguineo;
    }

    void SetIdade(short idade) {
        m_idade = idade;
    }

    short GetIdade() const {
        return m_idade;
    }

    void SetEspecialidade(string especialidade) {
        m_especialidade = especialidade;
    }

    string GetEspecialidade() const {
        return m_especialidade;
    }

    void SetCpf(string cpf) {
        m_cpf = cpf;
    }

    string GetCpf() const {
        return m_cpf;
    }

    void SetNome(string nome) {
        m_nome = nome;
    }

    string GetNome() const {
        return m_nome;
    }

    void SetId(int id) {
        m_id = id;
    }

    int GetId() const {
        return m_id;
    }
       
    
};


#endif /* FUNCIONARIO_H */


