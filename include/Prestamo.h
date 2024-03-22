#ifndef PRESTAMO_H
#define PRESTAMO_H
#include "Cliente.h"
#include "Pago.h"
#define DIMP 5
#include <stdlib.h>
#include <iostream>
using namespace std;

class Prestamo
{
    public:
        Prestamo();
        Prestamo(int, Cliente*, Fecha*, float ma);
        virtual ~Prestamo();
        int getNumeroPrestamo();
        void setNumeroPrestamo(int np);
        Cliente *getCliente();
        void setCliente(Cliente *cli);
        void setFechaAprobacion(Fecha *fa);
        Fecha *getFechaAprobacion();
        void setMontoAprobacion(float ma);
        float getMontoAprobado();
        bool hacerPago(Pago *pg);
        Pago **getLstPagos();
        float getSaldoPendiente();
        int getContadorPagos();

    protected:

    private:
        int numeroPrestamo;
        Cliente *cliente;
        Fecha *fechaAprobacion;
        float montoAprobado;
        Pago *lstPagos[DIMP];
        float saldoPendiente;
        int contadorPagos;
};

#endif // PRESTAMO_H
