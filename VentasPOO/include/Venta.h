#ifndef VENTA_H
#define VENTA_H
#include <iostream>
using namespace std;

class Venta
{
    private:
        int _codigo;
        int _cantidad;
        float _precio;

    public:
        Venta();

        int getCodigo();
        int getCantidad();
        float getPrecio();
        float getTotal();

        void cargar();
        void mostrar();

};

#endif // VENTA_H
