#include "Inmuebles.h"

int main()
{
    int opc;
    do
    {
    system("cls");
    cout<<"Ingrese los datos de un inmuble"<<endl;
    cout<<endl<<"=========================="<<endl<<endl;
    cout<<"1) CASAS"<<endl;
    cout<<"2) QUINTAS"<<endl;
    cout<<"3) DEPARTAMENTO"<<endl;
    cout<<"4) LOCAL"<<endl;
    cout<<"5) TERRENO"<<endl;
    cout<<endl<<"=========================="<<endl;
    cout<<"0) SALIR."<<endl;
    cin>>opc;
    system("cls");

    switch(opc)
    {
    case 1:
        {
          Inmuebles Propiedad;
          Propiedad.cargar();
          cout<<"============================"<<endl<<endl;
          Propiedad.mostrar();
          system("pause");
        }
        break;
    case 2:
        {

        }
        break;
    case 3:
        {

        }
        break;
    case 4:
        {

        }
        break;
    case 5:
        {

        }
        break;
    }


    }while(opc!=0);

    return 0;
}
