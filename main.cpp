#include "Engenheiro.hpp"
#include "Vendedor.hpp"
#include <vector>

int main() {
    std::vector<Engenheiro> engenheiros;
    std::vector<Vendedor> vendedores;
    double horasTrabalhadas = 0;

    engenheiros.push_back(Engenheiro("Joao Snow", 35, 3));
    engenheiros.push_back(Engenheiro("Daniela Targaryen", 30, 1));
    engenheiros.push_back(Engenheiro("Bruno Stark", 30, 2));
    vendedores.push_back(Vendedor("Tonho Lannister", 20, 5000));
    vendedores.push_back(Vendedor("Jose Mormont", 25, 3000));
    vendedores.push_back(Vendedor("Sonia Stark", 30, 4000));

    for(int i = 0; i < engenheiros.size(); ++i) {
        horasTrabalhadas = 8;
        if (i == 0)
            horasTrabalhadas = 9.5;     
        std::cout << "Nome: " << engenheiros[i].getNome() << std::endl;
        std::cout << "Salario Mes: " << engenheiros[i].pagamentoMes(horasTrabalhadas) << std::endl;
        std::cout << "Projetos: " << engenheiros[i].getProjetos() << std::endl;
        std::cout << std::endl;
    }
    for(int i = 0; i < vendedores.size(); ++i) {
        horasTrabalhadas = 6;
        if (i != 0){ 
            std::cout << std::endl;
            horasTrabalhadas = 8;
        }
        std::cout << "Nome: " << vendedores[i].getNome() << std::endl;
        std::cout << "Salario Mes: " << vendedores[i].pagamentoMes(horasTrabalhadas) << std::endl;
        std::cout << "Quota vendas: " << vendedores[i].quotaTotalAnual() << std::endl;
    }

  return 0;	
}