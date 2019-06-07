/**
* @file empresa-crud.h
* @brief Funcionalidades referentes a empresa
* @author Felipe Rodrigues
* @since 23/04/2019
* @date 01/05/2019
*/
#ifndef EMPRESA_CRUD_H
#define EMPRESA_CRUD_H

#include <iostream>
#include <cctype>
#include "../../modelos/empresa/empresa.h"
#include "../funcionario-crud/funcionario-crud.h"
#include "../../utils/colors.h"
#include "../../utils/stringUtil.h"
using namespace std;

Empresa criarEmpresa();
Empresa escolherEmpresa(list<Empresa> empresas);
void adicionarFuncionario(list<Empresa> *empresa, Funcionario *funcionario);
void listarFuncionarios(list<Empresa> empresas);
void aplicarAumento(list<Empresa> *empresas);
void listarMediaFuncionarios(list<Empresa> empresas);
void listarFuncionariosExperiencia(list<Empresa> empresas);
#endif
