#ifndef _REPTIL_NATIVO_
#define _REPTIL_NATIVO_
#include "./Reptil.h"
class ReptilNativo : public Animal{
    private:
        bool m_venenoso;
        string m_tipo_veneno;
        
    public:          
        ReptilNativo();
        ~ReptilNativo();
        //sobrecarga de operadores:     
};
#endif
