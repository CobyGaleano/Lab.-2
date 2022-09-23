#include "Botella.h"

Botella::Botella(float capacidad,float ocupacion,bool tapada)
{
    _capacidad=capacidad;
    _ocupacion=ocupacion;
    _tapada=tapada;
    //ctor
}

void Botella::llenar (float capacidad)
{
    if(_tapada==false && (_capacidad+capacidad<=_ocupacion)){
     _capacidad+=capacidad;
    }
}

void Botella::vaciar(float capacidad)
{
    if(_tapada==false &&(_capacidad-capacidad>=0)){
        _capacidad-=capacidad;
    }
}
void Botella::tapar()
{
    _tapada=true;
}

void Botella::destapar()
{
    _tapada=false;
}

float Botella::getCapacidad()
{
    return _capacidad;
}

float Botella::getOcupacion()
{
    return _ocupacion;
}

float Botella::getDisponibilidad()
{
    return _ocupacion-_capacidad;
}
