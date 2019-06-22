/**
* @file data.h
* @brief Domínio de Data
* @author Felipe Rodrigues
* @since 23/04/2019
* @date 01/05/2019
*/
#ifndef DATA_H
#define DATA_H

#include <iostream>

using namespace std;

class Data{
    private:
    int dia;
    int mes;
    int ano;

    public:
    Data();
    Data(int dia, int mes, int ano);
    ~Data();

    int getDia(){
        return this->dia;
    };
    void setDia(int dia){
        this->dia = dia;
    }
    int getMes(){
        return this->mes;
    };
    void setMes(int mes){
        this->mes = mes;
    }
    int getAno(){
        return this->ano;
    };
    void setAno(int ano){
        this->ano = ano;
    };
    

    Data& operator= (Data const &f);
    friend ostream& operator<< (ostream &o, Data const d);
    
};

#endif