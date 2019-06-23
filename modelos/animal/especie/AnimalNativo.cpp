#include "AnimalNativo.h"
#include <string>
string AnimalNativo::GetM_uf_origem()
{
    return this->m_uf_origem;

}
void AnimalNativo::SetM_uf_origem(string b){
    this->m_uf_origem = b;
}
string AnimalNativo::GetM_autorizacao(){
    return this->m_autorizacao;
}
void AnimalNativo::SetM__autorizacao(string b){
    this->m_autorizacao = b;
}

