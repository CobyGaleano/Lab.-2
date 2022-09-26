#include "Casa.h"

Casa::Casa()
{
    //ctor
}

void Casa::cargar()
{
    Inmuebles::cargar();
    cout<<"SUPERFICIE CUBIERTA: ";
    cin>>_sCubierta;
    cout<<"HABITACIONES: ";
    cin>>_habitaciones;
}

void Casa::mostrar()
{
    Inmuebles::mostrar();
    cout<<"SUPERFICIE CUBIERTA: "<<Casa::getSCubierta();
    cout<<"HABITACIONES: "<<Casa::getHabitaciones();
}
