#include "Tratador.h"
Tratador::Tratador(){
}
Tratador::~Tratador(){

}
Tratador& Tratador::operator=(Tratador& t ) {
	this->setM_id(t.getM_id());
	this->setM_nome(t.getM_nome());
	this->setM_cpf(t.getM_cpf());
	this->setM_idade(t.getM_idade());
	this->setM_tipo_sanguineo(t.getM_tipo_sanguineo());
	this->setM_fator_rh(t.getM_fator_rh());
	this->setM_especialidade(t.getM_especialidade());
  m_nivel_de_seguranca = t.m_nivel_de_seguranca;
  return *this;
}
void Tratador::SetNivel_de_seguranca(int nivel_de_seguranca)
{
    m_nivel_de_seguranca = nivel_de_seguranca;
}

int Tratador::GetNivel_de_seguranca()
{
    return this->m_nivel_de_seguranca;
}
Tratador::Tratador(){

}
Tratador::~Tratador(){
  
}
