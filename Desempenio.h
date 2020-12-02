#ifndef DESEMPENIO_H
#define DESEMPENIO_H
#include<string>
using namespace std;

class Desempenio {

private:
    float ventasTotal;
    float ventasRequeridas;
    float ganancias;
    float gastos;

public:

    Desempenio() {
        ventasTotal = 0;
        ventasRequeridas = 0;
        ganancias = 0;
        gastos = 0;
    }
    Desempenio(float vt, float vr, float gan, float gas) {
        vt = ventasTotal;
        vr = ventasRequeridas;
        gan = ganancias;
        gas = gastos;
    }

    float getVentasT() { return ventasTotal; }
    float gentVentasR() { return ventasRequeridas; }
    float getGastos() { return ganancias; }

    void setVentasT(float ventasTotal) { this->ventasTotal = ventasTotal; }
    void setVentasRequeridas(float ventasRequeridas) { this->ventasRequeridas = ventasRequeridas; }
    void setGanancias(float ganancias) { this->ganancias = ganancias; }

    string calcularGanancias() {
        ganancias = ventasTotal - gastos;
        return "Las ganancias de esta sucursal son de: $" + to_string(ganancias);
    }

    string desempenio() {
        if (ventasTotal > ventasRequeridas) {
            return "La sucursal tuvo un buen desempenio";
        }
        else if (ventasTotal == ventasRequeridas)
        {
            return "La sucursal cumplio con la cuota pero puede mejorar";
        }
        else
        {
            return "La sucursal no cumplio con la cuota, necesita mejorar";
        }
    }




};
#endif
