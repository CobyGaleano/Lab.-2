
#include "Bidon.h"

Bidon::Bidon(string nombre,float capacidad)
{
    _nombre=nombre;
    _litros=capacidad;
}

float Bidon::getLitros()
{
   return _litros;
}

string Bidon::getNombre()
{
    return _nombre;
}

void Bidon::extraer(float cantidad)
{
    _litros-=cantidad;
}
