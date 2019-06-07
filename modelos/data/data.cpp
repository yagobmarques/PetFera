#include "data.h"
Data::Data(){
   
}
Data::Data(int dia, int mes, int ano){
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
};

Data& Data::operator= (Data const &d){
    this->dia = d.dia;
    this->mes = d.mes;
    this->ano = d.ano;
    return *this;
};


ostream& operator<< (ostream &o, Data const d) {
    o << d.dia << "/" << d.mes << "/" << d.ano;
    return o;
};


Data::~Data(){};