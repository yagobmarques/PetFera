/**
* @file dataUtil.h
* @brief Utilitário de Data
* @author Felipe Rodrigues
* @since 23/04/2019
* @date 01/05/2019
*/
#ifndef DATAUTIL_H
#define DATAUTIL_H

#include <ctime>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <regex>
#include "stringUtil.h"
#include "../modelos/data/data.h"
using namespace std;


string dateToString(Data data);
Data stringToData(string dataString);
bool checarFormatoData(string dataString);
bool checarDataValida(Data data);
double diferencaDatas(Data data, tm* dataAtual);
tm* getTimeNow();
#endif
   