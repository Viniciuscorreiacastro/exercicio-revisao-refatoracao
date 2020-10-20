#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

#define CARGA_HORARIA 8

class Empregado {
    private:
        double salarioHora; 
        std::string nome;
  
    public:  
        Empregado (std::string nome, double salarioHora) : nome(nome), salarioHora(salarioHora) {};
        std::string getNome ();
        double pagamentoMes (double horasTrabalhadas);	
};

#endif