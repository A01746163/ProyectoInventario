
#ifndef ComparativaDesempenio_H
#define ComparativaDesempenio_H
#include "Desempenio.h"
#include<iostream>
using namespace std;

class ComparativaDesempeno
{
private:
	Desempenio suc1;
	Desempenio suc2;
	Desempenio suc3;
public:
	ComparativaDesempeno() {};
	ComparativaDesempeno(Desempenio s1, Desempenio s2, Desempenio s3) {};
	void comparativaVentas(Desempenio suc1, Desempenio suc2, Desempenio suc3) {}
	void comparativaGastos(Desempenio suc1, Desempenio suc2, Desempenio suc3) {}
	void comparativaGanancia(Desempenio suc1, Desempenio suc2, Desempenio suc3) {}
		
};

#endif