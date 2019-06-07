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
#include <cstdlib>
#include <set>
#include "../empresa-crud/empresa-crud.h"
#include "../funcionario-crud/funcionario-crud.h"
#include "../../utils/stringUtil.h"
#include "../../utils/colors.h"

using namespace std;
int escolherOpcao();
bool checarEmpresa(list<Empresa> empresas, Empresa empresa);
bool checarFuncionario(list<Empresa> empresas, Funcionario funcionario);
void iniciarMenu();
void mensagemSucesso(string mensagem);
void mensagemErro(string mensagem);

#endif
