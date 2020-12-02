#include <iostream>
#include "Desempenio.h"

using namespace std;

class ComparativaDesempeno
{
private:
	Desempenio suc1;
	Desempenio suc2;
	Desempenio suc3;
public:
	ComparativaDesempeno() {
		Desempenio suc1(0, 0, 0, 0);
		Desempenio suc2(0, 0, 0, 0);
		Desempenio suc3(0, 0, 0, 0);
	};
	ComparativaDesempeno(Desempenio s1, Desempenio s2,Desempenio s3) {
		s1 = suc1;
		s2 = suc2;
		s3 = suc3;

	};
	void comparativaVentas(Desempenio suc1, Desempenio suc2,Desempenio suc3) {
		if ((suc1.getVentasT() <= suc2.getVentasT()) && (suc1.getVentasT() <= suc3.getVentasT())) {
			cout << "La sucursal 1 fue la que vendió más \n";
		}
		else if ((suc1.getVentasT() <= suc2.getVentasT()) and (suc2.getVentasT() <= suc3.getVentasT())) {
			cout << "La sucursal 2 fue la que vendió más \n";
		}
		else{
			cout << "La sucursal 3 fue la que vendió más \n";
		}
	};
	void comparativaGastos(Desempenio suc1, Desempenio suc2, Desempenio suc3) {
		if ((suc1.getGastos() > suc2.getGastos()) and (suc1.getGastos() > suc3.getGastos())) {
			cout << "La sucursal 1 fue la que más gastos tuvo \n";
		}
		else if ((suc1.getVentasT() < suc2.getVentasT()) and (suc2.getVentasT() > suc3.getVentasT())) {
			cout << "La sucursal 2 fue la que más gastos tuvo \n";
		}
		else {
			cout << "La sucursal 3 fue la que más gastos tuvo \n";
		}
	};
	void comparativaGanancia(Desempenio suc1, Desempenio suc2, Desempenio suc3) {
		float ganancias1 = suc1.getVentasT() - suc1.getGastos();
		float ganancias2 = suc1.getVentasT() - suc2.getGastos();
		float ganancias3 = suc3.getVentasT() - suc3.getGastos();
		if ((ganancias1 > ganancias2) and (ganancias1 > ganancias3)) {
			cout << "La sucursal 1 tuvo mayores ganancias \n";
		}
		else if ((ganancias1 < ganancias2) and (ganancias2 > ganancias3)) {
			cout << "La sucursal 2 tuvo mayores ganancias \n";
		}
		else {
			cout << "La sucursal 3 tuvo mayores ganancias \n";
		}
	}

};

int main() {
	cout << "**Pruebas Comparativa de Rendimiento**\n";
	Desempenio sucur1(500, 25, 1000, 800);
	Desempenio sucur2(0, 25, 500, 500);
	Desempenio sucur3(0, 25, 100, 100);
	ComparativaDesempeno comparacion1(sucur1, sucur2, sucur3);
	comparacion1.comparativaVentas(sucur1, sucur2, sucur3);
	comparacion1.comparativaGastos(sucur1, sucur2, sucur3);
	comparacion1.comparativaGanancia(sucur1, sucur2, sucur3);

	return 0;
}