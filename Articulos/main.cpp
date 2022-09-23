#include "Articulos.h"
int main()
{
    Articulos Art[10];
    int opcion;
    do {
    cout << "MENU PRINCIPAL" << endl;
    cout << "--------------" << endl;
    cout << "1) CARGAR ARTICULOS" << endl;
    cout << "2) CARGA DE VENTAS" << endl;
    cout << "--------------" << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:{
        for(int i=0;i<10;i++)
        {
        string nombre;
        float precio;
        int stock;
         cout<<"Articulo #"<<i+1<<endl;
         cout<<"Nombre: ";
         cin>>nombre;
         Art[i].setNombre(nombre);
         cout<<endl<<"Precio: $";
         cin>>precio;
         Art[i].setPrecio(precio);
         cout<<endl<<"Stock Disponible: ";
         cin>>stock;
         Art[i].setStock(stock);
         cout << "--------------" << endl;

        }
    cout<<"DATOS CARGADOS CORRECTAMENTE.";
    }
        break;
    case 2:{
        int codigo,cantidad;
        float precio;
        float venta;
        cout<<"Ingrese el codigo del articulo (1-10)";
        cin>>codigo;
        while(codigo!=0)
        {
            cout<<"Ingrese la cantidad vendida: ";
            cin>>cantidad;
            cout<< "--------------" << endl<<endl;
            venta=cantidad*Art[codigo-1].getPrecio();
            Art[codigo-1].RestarStock(cantidad);

            cout<<"La venta fue de $"<<venta<<endl;
            cout<<"El stock restante es de "<<Art[codigo-1].getStock()<<" "<<Art[codigo-1].getNombre();

        }

    }
        break;
    }
   }while (opcion!=0);
    return 0;
}
