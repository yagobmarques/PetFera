/**
* @file menu.h
* @brief Menu do sistema
* @author Felipe Rodrigues
* @since 23/04/2019
* @date 01/05/2019
*/
#ifndef MENU_PRINCIPAL_H
#define MENU_PRINCIPAL_H

#include<sstream>
#include <iostream>
#include <cstdlib>
#include <set>
#include "Sistema.h"
#include "SistemaAnimal.h"
#include "../utils/stringUtil.h"
#include "../utils/colors.h"
using namespace std;
int escolherOpcao();


void iniciarMenu();
void mensagemSucesso(string mensagem);
void mensagemErro(string mensagem);

#endif
