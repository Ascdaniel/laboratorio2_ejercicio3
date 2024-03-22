#include "Fecha.h"
#include <string.h>
using namespace std;
Fecha::Fecha()
{
    //ctor
}
Fecha::Fecha(int d,int m,int a){
        this->dia=d;
        this->mes=m;
        this->anio=a;
        }
Fecha::~Fecha()
{
    //dtor
}
void Fecha::mostrarFecha(){
    cout<<dia<<"/"<<mes<<"/"<<anio;
}

