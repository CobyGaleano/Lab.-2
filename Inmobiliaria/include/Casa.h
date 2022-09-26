#ifndef CASA_H
#define CASA_H
#include <Inmueble.h>

class Casa : public Inmueble
{
    public:
        Casa();

        ///setter
        void setSTotal(float superficie){_sTotal=superficie;}
        void setSCubierta(float superficie){_sCubierta=superficie;}

        ///getter
        float getSCubierta(){return _sCubierta;}
        int  getHabitaciones(){return _habitaciones;}

        ///metodos
        void cargar();
        void mostrar();

    private:
        float _sCubierta;
        int _habitaciones;
};

#endif // CASA_H
