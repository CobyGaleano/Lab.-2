#ifndef ARCHIVOVENTAS_H
#define ARCHIVOVENTAS_H
#include "Venta.h"

class ArchivoVentas
{
    public:
        void guardarVenta(Venta venta);
        float totalRecaudado();
};

#endif // ARCHIVOVENTAS_H
