/**
* @file stringUtil.cpp
* @brief Implementação de stringUtil.h
* @author Felipe Rodrigues
* @since 23/04/2019
* @date 01/05/2019
*/
#include "stringUtil.h"


/**
* @brief fatia uma string em substrings tendo o separador como referencia
* @param a string e o separador
* @return vector de strings
*/
std::vector<std::string> splitString(std::string s, std::string separador){
    std::vector<std::string> strings;
    size_t pos = 0;
    std::string token;
    while ((pos = s.find(separador)) != std::string::npos) {
        token = s.substr(0, pos);        
        s.erase(0, pos + separador.length());
        strings.push_back(token);
    }
    strings.push_back(s);   
    return strings;
}
/**
* @brief checa se uma string pode ser um inteiro
* @param string
* @return 1 se verdadeiro, 0 se falso
*/
bool isInt(const std::string& s)
{
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}
/**
* @brief checa se uma string pode ser um double
* @param string
* @return 1 se verdadeiro, 0 se falso
*/
bool isDouble(std::string s){      
    try {
        std::stod(s);
    }
    catch(...)
    {       
        return false;
    }
    return true;

}
/**
* @brief checa se uma string está vazia
* @param string
* @return 1 se vazia, 0 se não
*/
bool isEmpty(std:: string s){    
    if (s.empty() || s.size() == 0 || !s.size() || s.find_first_not_of(' ') == std::string::npos){    
        return true;
    }
    return false;
}

