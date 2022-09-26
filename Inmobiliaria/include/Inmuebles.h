#ifndef INMUEBLES_H
#define INMUEBLES_H
using namespace std;
#include <iostream>
#include <string>

class Inmuebles
{
    public:
        Inmuebles();

       ///setters
        void setCodigo(int codigo){_codigo=codigo;}
        void setPalquiler(float precio){if(precio>0){_pAlquiler=precio;}}
        void setPventa(float precio){if(precio>0){_pVenta=precio;}}
        void setCalle(string calle){_calle=calle;}
        void setAltura(string altura){_altura=altura;}
        void setLocalidad(string localidad){_localidad=localidad;}
        void setApellido(string apellido){_apellido=apellido;}
        void setNombre(string nombre){_nombre=nombre;}
        void setDNI(string dni){_dni=dni;}
        void setCelular(string celular){_celular=celular;}
        void setHabitaciones(int habitaciones){_habitaciones=habitaciones;}

        ///getters
        int getCodigo(){return _codigo;}
        float getPalquiler(){return _pAlquiler;}
        float getPventa(){return _pVenta;}
        string getCalle(){return _calle;}
        string getAltura(){return _altura;}
        string getLocalidad(){return _localidad;}
        string getApellido(){return _apellido;}
        string getNombre(){return _nombre;}
        string getDNI(){return _dni;}
        string getCelular(){return _celular;}
        float getSTotal(){return _sTotal;}


        ///metodos
        void cargar();
        void mostrar();

    private:
        int _codigo;
        float _sTotal;
        float _pAlquiler;
        float _pVenta;
        string _calle;
        string _altura;
        string _localidad;
        string _apellido;
        string _nombre;
        string _dni;
        string _celular;

};

#endif // INMUEBLES_H
