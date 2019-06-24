#include "../includes/Tratador.h"

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