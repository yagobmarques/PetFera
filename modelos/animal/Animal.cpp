#include "Animal.h"

void Animal::SetVeterinario(Veterinario vet){
    m_veterinario = vet;
}

void Animal::SetNome_batismo(string nome_batismo) 
{
    m_nome_batismo = nome_batismo;
}

string Animal::GetNome_batismo()  
{
    return m_nome_batismo;
}

void Animal::SetTratador(Tratador tratador) 
{
    m_tratador = tratador;
}

Tratador Animal::GetTratador()  
{
    return m_tratador;
}

void Animal::SetDieta(string dieta) 
{
    m_dieta = dieta;
}

string Animal::GetDieta()  
{
    return m_dieta;
}

void Animal::SetTamanho(double tamanho) 
{
    m_tamanho = tamanho;
}

double Animal::GetTamanho()  
{
    return m_tamanho;
}

void Animal::SetSexo(char sexo) 
{
    m_sexo = sexo;
}

char Animal::GetSexo()  
{
    return m_sexo;
}

void Animal::SetNome_cientifico(string nome_cientifico) 
{
    m_nome_cientifico = nome_cientifico;
}

string Animal::GetNome_cientifico()  
{
    return m_nome_cientifico;
}

void Animal::SetClasse(string classe) 
{
    m_classe = classe;
}

string Animal::GetClasse()  
{
    return m_classe;
}

void Animal::SetId(int id) 
{
    m_id = id;
}

int Animal::GetId()  
{
    return m_id;
}