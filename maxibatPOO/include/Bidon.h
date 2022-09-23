#ifndef BIDON_H
#define BIDON_H
#include <string>
#include <iostream>
using namespace std;

class Bidon
{
    public:
        Bidon(string nombre,float capacidad);
        void extraer(float cantidad);
        string getNombre();
        float getLitros();
    protected:
    private:
        string _nombre;
        float _litros;
};

#endif // BIDON_H
