#include "Inmuebles.h"

Inmuebles::Inmuebles()
{

}

void Inmuebles::cargar()
{
    cout<<"CODIGO INMUEBLE: ";
    cin>>_codigo;
    cout<<"CALLE: ";
    cin>>_calle;
    cout<<"ALTURA: ";
    cin>>_altura;
    cout<<"LOCALIDAD: ";
    cin>>_localidad;
    cout<<"APELLIDO DEL DUEÑO: ";
    cin>>_apellido;
    cout<<"NOMBRE DEL DUEÑO: ";
    cin>>_nombre;
    cout<<"DNI DEL DUEÑO: ";
    cin>>_dni;
    cout<<"CELULAR: ";
    cin>>_celular;
    cout<<"PRECIO DE VENTA: $";
    cin>> _pVenta;
    cout<<"PRECIO DE ALQUILER: $";
    cin>>_pAlquiler;
    cout<<"SUPERFICIE TOTAL: ";
    cin>>_sTotal;

}

void Inmuebles::mostrar()
{
    cout<<"CODIGO INMUEBLE: "<<Inmuebles::getCodigo()<<endl;;
    cout<<"CALLE: "<<Inmuebles::getCalle()<<endl;
    cout<<"ALTURA: "<<Inmuebles::getAltura()<<endl;
    cout<<"LOCALIDAD: "<<Inmuebles::getLocalidad()<<endl;
    cout<<"APELLIDO DEL DUEÑO: "<<Inmuebles::getApellido()<<endl;
    cout<<"NOMBRE DEL DUEÑO: "<<Inmuebles::getNombre()<<endl;
    cout<<"DNI DEL DUEÑO: "<<Inmuebles::getDNI()<<endl;
    cout<<"CELULAR: "<<Inmuebles::getCelular()<<endl;
    cout<<"PRECIO DE VENTA: $"<<Inmuebles::getPventa()<<endl;
    cout<<"PRECIO DE ALQUILER: $"<<Inmuebles::getPalquiler()<<endl;
    cout<<"SUPERFICIE TOTAL: "<<Inmuebles::getSTotal()<<endl;
}
