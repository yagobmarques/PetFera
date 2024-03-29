#include "../includes/Funcionario.h"

int Funcionario::getM_id()
{
    return this->m_id;
}


void Funcionario::setM_id(int m_id)
{
    this->m_id = m_id;
}


string Funcionario::getM_nome()
{
    return this->m_nome;
}


void Funcionario::setM_nome(string m_nome)
{
    this->m_nome = m_nome;
}


string Funcionario::getM_cpf()
{
    return this->m_cpf;
}


void Funcionario::setM_cpf(string m_cpf)
{
    this->m_cpf = m_cpf;
}


short Funcionario::getM_idade()
{
    return this->m_idade;
}


void Funcionario::setM_idade(short m_idade)
{
    this->m_idade = m_idade;
}


string Funcionario::getM_tipo_sanguineo()
{
    return this->m_tipo_sanguineo;
}


void Funcionario::setM_tipo_sanguineo(string m_tipo_sanguineo)
{
    this->m_tipo_sanguineo = m_tipo_sanguineo;
}


char Funcionario::getM_fator_rh()
{
    return this->m_fator_rh;
}


void Funcionario::setM_fator_rh(char m_fator_rh)
{
    this->m_fator_rh = m_fator_rh;
}


string Funcionario::getM_especialidade()
{
    return this->m_especialidade;
}


void Funcionario::setM_especialidade(string m_especialidade)
{
    this->m_especialidade = m_especialidade;
}
Funcionario::Funcionario(){

}
Funcionario::~Funcionario(){

}
void Funcionario::setM_funcao(string m_funcao){
  this->m_funcao = m_funcao;
}
string Funcionario::getM_funcao(){
  return this->m_funcao;
}
Funcionario& Funcionario::operator=(const Funcionario& f ){
	m_id=f.m_id;
	m_nome=f.m_nome;
	m_cpf=f.m_cpf;
	m_idade=f.m_idade;
	m_tipo_sanguineo=f.m_tipo_sanguineo;
	m_fator_rh=f.m_fator_rh;
	m_especialidade=f.m_especialidade;
	return *this;
}
