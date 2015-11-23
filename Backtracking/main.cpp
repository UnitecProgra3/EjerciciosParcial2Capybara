#include <iostream>

using namespace std;

class Nodo
{
public:
    int valor;
    Nodo* hijo_izq;
    Nodo* hijo_der;
    Nodo(int valor)
    {
        this->valor = valor;
        hijo_der = hijo_izq = NULL;
    }
};

void imprimir(Nodo* n)
{
    if(n==NULL)
        return;
    cout<<n->valor<<endl;
    imprimir(n->hijo_izq);
    imprimir(n->hijo_der);
}

bool existe(Nodo*actual/*raiz*/,int valor)
{
    if(actual==NULL)
        return false;
    if(valor==actual->valor)
        return true;
    if(existe(actual->hijo_izq,valor))
        return true;
    if(existe(actual->hijo_der,valor))
        return true;
    return false;
}

Nodo* obtener(Nodo*actual,int valor)
{
    if(actual==NULL)
        return NULL;

    if(actual->valor == valor)
    {
        return actual;
    }

    Nodo* obtener_izq = obtener(actual->hijo_izq,valor);
    Nodo* obtener_der = obtener(actual->hijo_der,valor);

    if(obtener_izq!=NULL)
        return obtener_izq;

    if(obtener_der!=NULL)
        return obtener_der;

    return NULL;
}

int main()
{
    Nodo*n1=new Nodo(1);
    Nodo*n2=new Nodo(2);
    Nodo*n3=new Nodo(3);
    Nodo*n4=new Nodo(4);
    Nodo*n5=new Nodo(5);

    n1->hijo_izq=n2;
    n1->hijo_der=n3;
    n3->hijo_izq=n4;
    n3->hijo_der=n5;

    imprimir(n1);

    cout<<"Existe: "<<existe(n1,5)<<endl;
    cout<<"Existe: "<<existe(n1,9)<<endl;

    cout<<"Obtener: "<<obtener(n1,3)->hijo_der->valor<<endl;

    return 0;
}
