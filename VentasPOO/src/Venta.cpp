#include "Venta.h"

Venta::Venta()
{
    _codigo=0;
    _cantidad=0;
    _precio=0;
    //ctor
}

//getter
int Venta::getCodigo()
{
    return _codigo;
}

int Venta::getCantidad()
{
    return _cantidad;
}

float Venta::getPrecio()
{
    return _precio;
}

float Venta::getTotal()
{
    return _precio*_cantidad;
}

///

void Venta::cargar()
{
    cout<<"Codigo: ";
    cin>>_codigo;
    cout<<"Precio: ";
    cin>>_precio;
    cout<<"Cantidad: ";
    cin>>_cantidad;

}

void Venta::mostrar()
{
    cout<<"Codigo: "<<_codigo<<endl;
    cout<<"Precio: "<<_precio<<endl;
    cout<<"Cantidad: "<<_cantidad<<endl;
    cout<<"Tota: "<<_precio*_cantidad<<endl;

}
