#include "../includes/Reptil.h"

bool Reptil::getM_venenoso()
{
    return this->m_venenoso;
}

void Reptil::setM_venenoso(bool m_venenoso)
{
    this->m_venenoso = m_venenoso;
}

string Reptil::getM_tipo_veneno()
{
    return this->m_tipo_veneno;
}

void Reptil::setM_tipo_veneno(string m_tipo_veneno)
{
    this->m_tipo_veneno = m_tipo_veneno;
}
Reptil::Reptil(){

}
Reptil::~Reptil(){

}