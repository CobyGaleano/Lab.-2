#pragma once
#ifndef ALUMNO_H
#define ALUMNO_H
#include <Persona.h>

class Alumno : public Persona
{
    public:
        void setNota(int nota);
        int getNota();

        void cargar();
    protected:
    private:
        int _nota;
};

#endif // ALUMNO_H
