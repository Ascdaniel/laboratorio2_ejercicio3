#include "Prestamo.h"
#include "Cliente.h"
#include "Pago.h"
#include <stdlib.h>
#include <iostream>
using namespace std;


Prestamo::Prestamo()
{
    //ctor
}
Prestamo::Prestamo(int  np, Cliente *cli, Fecha *fa, float ma){
   this-> numeroPrestamo = np;
   this-> cliente = cli;
   this-> fechaAprobacion = fa;
   this-> montoAprobado = ma;
   this-> saldoPendiente = ma;
   this-> contadorPagos = 0;
}

Prestamo::~Prestamo()
{
    //dtor
}
int Prestamo::getNumeroPrestamo(){
    return numeroPrestamo;
}
void Prestamo::setNumeroPrestamo(int np){
    numeroPrestamo = np;
}
Cliente *Prestamo::getCliente(){
    return cliente;
}
void Prestamo::setCliente(Cliente *cli){
    cliente = cli;
}
void Prestamo::setFechaAprobacion(Fecha *fa){
    fechaAprobacion = fa;
}
Fecha *Prestamo::getFechaAprobacion(){
    return fechaAprobacion;
}
void Prestamo::setMontoAprobacion(float ma){
    montoAprobado = ma;
}
float Prestamo::getMontoAprobado(){
    return montoAprobado;
}
bool Prestamo::hacerPago(Pago *pg){
    bool retorno = false;
    if (this -> contadorPagos < DIMP){
        this -> lstPagos[this -> contadorPagos] = pg;
        this -> contadorPagos++;
        this -> saldoPendiente -= pg -> getMontoPago();
        retorno = true;
    }
    return retorno;
}
Pago **Prestamo::getLstPagos(){
    return lstPagos;
}
float Prestamo::getSaldoPendiente(){
    return saldoPendiente;
}
int Prestamo::getContadorPagos(){
    return contadorPagos;
}
