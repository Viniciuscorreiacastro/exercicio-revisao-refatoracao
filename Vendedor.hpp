#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <iostream>
#include <string>
#include "Empregado.hpp"

#define MESES 12

class Vendedor : public Empregado {
    private:
        int quotaMensalVendas;
  
    public:
        Vendedor (std::string name, double salarioHora, int quotaMensalVendas) : Empregado(name, salarioHora), quotaMensalVendas(quotaMensalVendas) {};
        double quotaTotalAnual ();
};

#endif