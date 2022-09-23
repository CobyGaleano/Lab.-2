#include "Venta.h"
#include "ArchivoVentas.h"

int main()
{
   int opcion;
   ArchivoVentas archivoVenta;
   Venta venta;

   do{
        cout<<endl;
        cout<<"1) CARGAR VENTAS"<<endl;
        cout<<"2) TOTAL RECAUDADO"<<endl;
        cout<<"================="<<endl;
        cout<<"0) SALIR"<<endl;
        cout<<"================="<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>opcion;

        switch (opcion)
        {
        case 1:
            {
                system("cls");
                ///cargar venta
                venta.cargar();
                archivoVenta.guardarVenta(venta);
            }
            break;
        case 2:
            {
                system("cls");
                ///mostrar total recaudado
                cout<<"RECAUDACION TOTAL: "<<archivoVenta.totalRecaudado()<<endl;
            }
            break;
        case 0:
            {
                cout<<"GRACIAS POR USAR EL PROGRAMA"<<endl;
            }
            break;
        default:
        cout<<"OPCION INCORRECTA"<<endl;

        }

   }while(opcion!=0);

    return 0;
}
