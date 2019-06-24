#include "Veterinario.h"
string Veterinario::getM_crmv()
{
    return this->m_crmv;
}
void Veterinario::setM_crmv(string m_crmv)
{
    this->m_crmv = m_crmv;
}
Veterinario& Veterinario::operator=(Veterinario& v ) {
	this->setM_id(v.getM_id());
	this->setM_nome(v.getM_nome());
	this->setM_cpf(v.getM_cpf());
	this->setM_idade(v.getM_idade());
	this->setM_tipo_sanguineo(v.getM_tipo_sanguineo());
	this->setM_fator_rh(v.getM_fator_rh());
	this->setM_especialidade(v.getM_especialidade());
  m_crmv = v.m_crmv;
  return *this;
}
