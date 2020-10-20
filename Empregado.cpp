#include "Empregado.hpp"

std::string Empregado::getNome () { 
    return this->nome;
}

double Empregado::pagamentoMes (double horasTrabalhadas) {
    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
    double t = horasTrabalhadas;
    if (t > CARGA_HORARIA) {
        double extraHours = t - CARGA_HORARIA;
        t += extraHours / 2;
    }
    return t * salarioHora;
}
