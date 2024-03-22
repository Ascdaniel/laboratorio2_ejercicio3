#include "Pago.h"
#include "Fecha.h"
#include <string.h>
using namespace std;

Pago::Pago()
{
    //ctor
}
Pago::Pago(Fecha *fe,float pg){
            this->fechaPago=fe;
            this->montoPago=pg;
        }
Pago::~Pago()
{
    //dtor
}
Fecha *Pago::getFechaPago(){
            return this->fechaPago;
        }
float Pago::getMontoPago(){
            return this->montoPago;
        }
