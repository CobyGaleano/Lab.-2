#ifndef BOTELLA_H
#define BOTELLA_H
#include <iostream>
#include <string>

using namespace std;

class Botella
{
    public:
        Botella(float capacidad,float ocupacion,bool tapada);
        void llenar (float capacidad);
        void vaciar(float capacidad);
        void tapar();
        void destapar();
        float getCapacidad();
        float getOcupacion();
        float getDisponibilidad();
    protected:
    private:
        float _capacidad;
        float _ocupacion;
        bool _tapada;
};

#endif // BOTELLA_H
