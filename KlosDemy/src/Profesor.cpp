#include "Profesor.h"

//set
void Profesor::setTitulo(string titulo)
{
    _titulo=titulo;
}

//get
string Profesor::getTitulo()
{
    return _titulo;
}

void Profesor::cargar()
{
    Persona::cargar();

    cout<<"Cargar titulo: ";
    cin>>_titulo;
}
