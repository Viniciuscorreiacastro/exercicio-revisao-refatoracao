#include "Vendedor.hpp"

double Vendedor::quotaTotalAnual() {
	return this->quotaMensalVendas * MESES;
}
