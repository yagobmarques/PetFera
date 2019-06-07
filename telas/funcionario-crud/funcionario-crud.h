/**
* @file funcionario-crud.h
* @brief Funcionalidades referentes a funcionario
* @author Felipe Rodrigues
* @since 23/04/2019
* @date 01/05/2019
*/
#ifndef FUNCIONARIO_CRUD_H
#define FUNCIONARIO_CRUD_H

#include <iostream>
#include "../../modelos/funcionario/funcionario.h"
#include "../../utils/colors.h"
#include "../../utils/stringUtil.h"
#include "../../utils/dataUtil.h"
#include <time.h>  
#include <vector>
#include <stdio.h>
#include <string>
using namespace std;

Funcionario criarFuncionario();
bool checarExperiencia(Funcionario funcionario);

#endif

