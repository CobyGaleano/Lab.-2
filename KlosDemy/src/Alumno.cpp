#include "Alumno.h"

//SET
void Alumno::setNota(int nota)
{
    _nota=nota;
}

//GET
int Alumno::getNota()
{
    return _nota;
}

void Alumno::cargar()
{
    Persona::cargar();

    cout<<"Cargar nota: ";
    cin>>_nota;
}
