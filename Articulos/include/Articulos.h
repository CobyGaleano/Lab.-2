#ifndef ARTICULOS_H
#define ARTICULOS_H
#include <iostream>
#include <string>

using namespace std;

class Articulos
{
    public:
        Articulos();
        Articulos(string nombre,float precio, int stock);
        void setNombre (string nombre);
        void setPrecio(float precio);
        void setStock(int stock);
        string getNombre();
        float getPrecio();
        int getStock();
        int RestarStock(int cantidad);
    protected:
    private:
        string _nombre;
        float _precio;
        int _stock;
};

#endif // ARTICULOS_H
