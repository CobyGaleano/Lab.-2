#include "Articulos.h"

Articulos::Articulos()
{
    _nombre="Sin nombre";
    _precio=0;
    _stock=0;
}

Articulos::Articulos(string nombre,float precio,int stock)
{
    _nombre=nombre;
    _precio=precio;
    _stock=stock;
}

void Articulos::setNombre(string nombre)
{
    _nombre=nombre;
}

void Articulos::setPrecio(float precio)
{
    _precio=precio;
}

void Articulos::setStock(int stock)
{
    _stock=stock;
}

string Articulos::getNombre()
{
    return _nombre;
}

float Articulos::getPrecio()
{
    return _precio;
}

int Articulos::getStock()
{
    return _stock;
}

int Articulos::RestarStock(int cantidad)
{
    return _stock-cantidad;
}


