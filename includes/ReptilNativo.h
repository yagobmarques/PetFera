#ifndef _REPTIL_NATIVO_
#define _REPTIL_NATIVO_
#include "./Reptil.h"
class Reptil : public Animal{
    private:
        bool m_venenoso;
        string m_tipo_veneno;
        
    public:          
        Reptil();
        ~Reptil();
        //sobrecarga de operadores:     
};
#endif
