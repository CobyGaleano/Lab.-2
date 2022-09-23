#pragma once
#ifndef PROFESOR_H
#define PROFESOR_H
#include <Persona.h>
class Profesor : public Persona
{
    public:
        void setTitulo(string titulo);
        string getTitulo();

        void cargar();
    protected:
    private:
        string _titulo;
};

#endif // PROFESOR_H
