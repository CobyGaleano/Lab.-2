#include "Botella.h"

int main()
{
    Botella LaraCola(250,250,true);

   cout<<LaraCola.getCapacidad()<<endl;
   cout<<LaraCola.getOcupacion()<<endl;
   cout<<LaraCola.getDisponibilidad()<<endl;

    LaraCola.vaciar(250);

   cout<<LaraCola.getCapacidad();
   LaraCola.destapar();
   LaraCola.vaciar(200);
   cout<<endl<<LaraCola.getCapacidad();
    return 0;
}
