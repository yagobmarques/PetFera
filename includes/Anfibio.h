/**
* @file Anfibio.h
* @brief Domínio de Anfibio
* @author Yago Beserra Marques
* @since 09/06/2019
* @date 09/06/2019
*/
#ifndef ANFIBIO_H
#define ANFIBIO_H

#include <iostream>
#include <string>
#include "Animal.h"
#include "data.h"
using namespace std;

class Anfibio : public Animal
{
private:
	int m_total_de_mudas;
	Data m_ultima_muda;

public:
	Anfibio();
	~Anfibio();
	int getM_total_de_mudas();
	void setM_total_de_mudas(int m_total_de_mudas);
	Data getM_ultima_muda();
	void setM_ultima_muda(Data m_ultima_muda);
	//sobrecarga de operadores:
};
#endif