/**
* @file menu.h
* @brief Menu do sistema
* @author Felipe Rodrigues
* @since 23/04/2019
* @date 01/05/2019
*/
#ifndef MENU_H
#define MENU_H
#include<sstream>
#include <iostream>
#include<fstream>
#include<string>
#include <cstdlib>
#include <map>
#include <vector>
#include "Animal.h"
using namespace std
Class Menu{
	private:
	map<int, Animal> animais;
	public:
	void iniciarMenu();
	void carregarDados();
	istream& operator >> (istream &is, Spaxel &rhs);
};
#endif
