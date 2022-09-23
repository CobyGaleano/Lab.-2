#pragma once
#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include <iostream>

using namespace std;

class Persona
{
    public:
        void setLegajo(int legajo);
        void setNombre(string nombre);
        void setApellido(string apellido);

        int getLegajo();
        string getNombre();
        string getApellido();

        void cargar();
    protected:
    private:
        int _legajo;
        string _nombre;
        string _apellido;
};

#endif // PERSONA_H
