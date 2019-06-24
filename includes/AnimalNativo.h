#ifndef _ANIMAL_NATIVO_H_
#define _ANIMAL_NATIVO_H_
#include <string>
class AnimalNativo
{
private:
    string m_uf_origem;
    string m_autorizacao;
public:
    AnimalNativo();
    ~AnimalNativo();
    string GetM_uf_origem();
    void SetM_uf_origem(string b);
    string GetM_autorizacao();
    void SetM__autorizacao(string b);
    //sobrecarga aqui caso nessesario
};
#endif