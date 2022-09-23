#include "Persona.h"

//sets
void Persona::setLegajo(int legajo)
{
    _legajo=legajo;
}

void Persona::setNombre(string nombre)
{
    _nombre=nombre;
}

void Persona::setApellido(string apellido)
{
    _apellido=apellido;
}

//gets

int Persona::getLegajo()
{
    return _legajo;
}

string Persona::getNombre()
{
    return _nombre;
}

string Persona::getApellido()
{
    return _apellido;
}


void Persona::cargar()
{
    cout<<"Cargar legajo: ";
    cin>>_legajo;
    cout<<"Cargar nombre: ";
    cin>>_nombre;
    cout<<"Cargar apellido: ";
    cin>>_apellido;
}
