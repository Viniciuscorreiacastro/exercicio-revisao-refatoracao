#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <iostream>
#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado{
    private:
        int projetos;
  
    public:  
        Engenheiro (std::string name, double salarioHora, int projetos) : Empregado(name, salarioHora), projetos(projetos) {};
        int getProjetos ();
};

#endif