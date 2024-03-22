#ifndef PAGO_H
#define PAGO_H
#include "string"
#include "Fecha.h"
using namespace std;

class Pago
{
    public:
        Pago();
        Pago(Fecha*,float);
        virtual ~Pago();
        Fecha *getFechaPago();
        float getMontoPago();

    protected:

    private:
       Fecha *fechaPago;
       float montoPago;
};

#endif // PAGO_H
