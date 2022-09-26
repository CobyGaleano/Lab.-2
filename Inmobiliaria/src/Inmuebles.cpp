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
    cout<<"APELLIDO DEL DUE�O: ";
    cin>>_apellido;
    cout<<"NOMBRE DEL DUE�O: ";
    cin>>_nombre;
    cout<<"DNI DEL DUE�O: ";
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
    cout<<"APELLIDO DEL DUE�O: "<<Inmuebles::getApellido()<<endl;
    cout<<"NOMBRE DEL DUE�O: "<<Inmuebles::getNombre()<<endl;
    cout<<"DNI DEL DUE�O: "<<Inmuebles::getDNI()<<endl;
    cout<<"CELULAR: "<<Inmuebles::getCelular()<<endl;
    cout<<"PRECIO DE VENTA: $"<<Inmuebles::getPventa()<<endl;
    cout<<"PRECIO DE ALQUILER: $"<<Inmuebles::getPalquiler()<<endl;
    cout<<"SUPERFICIE TOTAL: "<<Inmuebles::getSTotal()<<endl;
}
