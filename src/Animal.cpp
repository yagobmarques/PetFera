#include "../includes/Animal.h"
using namespace std;
 ostream& operator<< (ostream &o,Animal& a)
 {
	 o<<"id: "<<a.getM_id()<<"| classe: ";
	 o<<a.getM_classe()<<" | Nome: ";
	 o<<a.getM_nome()<<"| Nome cientifico: ";
	 o<<a.getM_nome_cientifico()<<"| Sexo: ";
	 o<<a.getM_sexo()<<"| Tamanho: ";
	 o<<a.getM_tamanho()<<"| Dieta: ";
	 o<<a.getM_dieta()<<"| Nome de Batismo: ";	 
	 o<<a.getM_nome_batismo()<<"| Veterinario: ";
	 o<<a.getM_veterinario().getM_nome()<<"| Tratador: ";
	 o<<a.getM_tratador().getM_nome()<< endl;
	 return o;
 }

int Animal::getM_id()
{
    return this->m_id;
}

void Animal::setM_id(int m_id)
{
    this->m_id = m_id;
}

string Animal::getM_classe()
{
    return this->m_classe;
}

void Animal::setM_classe(string m_classe)
{
    this->m_classe = m_classe;
}

string Animal::getM_nome()
{
    return this->m_nome;
}

void Animal::setM_nome(string m_nome)
{
    this->m_nome = m_nome;
}
string Animal::getM_nome_cientifico()
{
    return this->m_nome_cientifico;
}

void Animal::setM_nome_cientifico(string m_nome_cientifico)
{
    this->m_nome_cientifico = m_nome_cientifico;
}

char Animal::getM_sexo()
{
    return this->m_sexo;
}

void Animal::setM_sexo(char m_sexo)
{
    this->m_sexo = m_sexo;
}

double Animal::getM_tamanho()
{
    return this->m_tamanho;
}

void Animal::setM_tamanho(double m_tamanho)
{
    this->m_tamanho = m_tamanho;
}

string Animal::getM_dieta()
{
    return this->m_dieta;
}

void Animal::setM_dieta(string m_dieta)
{
    this->m_dieta = m_dieta;
}

string Animal::getM_nome_batismo()
{
    return this->m_nome_batismo;
}

void Animal::setM_nome_batismo(string m_nome_batismo)
{
    this->m_nome_batismo = m_nome_batismo;
}
Veterinario Animal::getM_veterinario()
{
    return this->m_veterinario;
}

void Animal::setM_veterinario(Veterinario m_veterinario)
{
    this->m_veterinario = m_veterinario;
}

Tratador Animal::getM_tratador()
{
    return this->m_tratador;
}

void Animal::setM_tratador(Tratador m_tratador)
{
    this-> m_tratador = m_tratador;
}
// sobrecarga do operador de extração de dados >>
// istream = input stream
istream& operator>> (istream &is, Animal& animal){

	
	string id, tamanho, sexo;
  getline(is, id, ';');
	getline(is, animal.m_classe, ';');
	getline(is, animal.m_nome, ';');
	getline(is, animal.m_nome_cientifico, ';');
	getline(is, sexo, ';');
	animal.setM_sexo(sexo[0]);
	getline(is, tamanho, ';');
	getline(is, animal.m_dieta, ';');

	getline(is,animal.m_nome_batismo,';');
	try{
	if(!id.empty()) animal.setM_id(stoi(id));
	if(!tamanho.empty()) animal.setM_tamanho(stod(tamanho));
	}catch (const std::exception &e)
    {
      cout << "Id inválido ou existente" << endl;
    }


  return is;
}
