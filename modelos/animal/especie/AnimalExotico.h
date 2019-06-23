#ifndef _ANIMAL_EXOTICO_H_
#define _ANIMAL_EXOTICO_H_
#include <string>

class AnimalExotico
{
private:
    string m_pais_origem;
public:
    AnimalExotico();
    ~AnimalExotico();
    string GetM_pais_origem();
    void SetM_pais_origem(string a);
//sobrecarga aqui caso nessesario:


};
#endif