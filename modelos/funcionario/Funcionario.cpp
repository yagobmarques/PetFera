#include "funcionario.h"
Funcionario::Funcionario(){
    
}
Funcionario::Funcionario(string nome, double salario, Data dataAdmissao){
    this->nome = nome;
    this->salario = salario;
    this->dataAdmissao = dataAdmissao;
}

Funcionario& Funcionario::operator= (Funcionario const &f){
    this->nome =f.nome;
    this->salario = f.salario;
    this->dataAdmissao = f.dataAdmissao;
    return *this;
}

ostream& operator<< (ostream &o, Funcionario const f) {    
    o << "nome: " << f.nome << " | salario : " << f.salario << " | contratado em: "<< dateToString(f.dataAdmissao) << " por " << f.nomeEmpresa << endl;
    return o;
}
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
Funcionario::~Funcionario(){};
