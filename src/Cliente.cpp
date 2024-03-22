#include "Cliente.h"
#include "string"
using namespace std;
Cliente::Cliente()
{
    //ctor
}
Cliente::Cliente(int cod,string n,string a){
            this->idCliente=cod;
            this->nombre=n;
            this->apellido=a;
        }

Cliente::~Cliente()
{
    //dtor
}
int Cliente::getIdCliente(){
    return this->idCliente;
}
string Cliente::getNombre(){
    return this->nombre;
}
string Cliente::getApellido(){
    return this->apellido;
}
