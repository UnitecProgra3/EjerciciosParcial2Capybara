#include "Nodo.h"

Nodo::Nodo(int valor)
{
    this->valor = valor;
    hijo_izq=NULL;
    hijo_der=NULL;
}

Nodo::~Nodo()
{
    //dtor
}
