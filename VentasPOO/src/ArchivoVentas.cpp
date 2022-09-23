#include<fstream>
#include "ArchivoVentas.h"

void ArchivoVentas::guardarVenta(Venta venta)
{
    FILE *pFile;
    pFile=fopen("ventas.dat","ab");
    if(pFile==NULL)
    {
        exit(1);
    }
    fwrite(&venta,sizeof(Venta),1,pFile);
    fclose(pFile);
}

float ArchivoVentas::totalRecaudado()
{
   FILE *pFile=fopen("ventas.dat","rb");
   if(pFile==NULL)
   {
       exit(1);
   }

   Venta venta;
   float total=0;
   while(fread(&venta,sizeof(Venta),1,pFile)==1)
   {
       total+=venta.getTotal();
   }
   fclose(pFile);
   return total;
}
