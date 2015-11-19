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

bool existe(Nodo*n,int valor)
{

}

int main()
{
    Nodo*n1=new Nodo(1);
    Nodo*n2=new Nodo(2);
    Nodo*n3=new Nodo(3);
    Nodo*n4=new Nodo(4);
    Nodo*n5=new Nodo(5);
    Nodo*n6=new Nodo(6);
    Nodo*n7=new Nodo(7);

    n1->hijo_izq=n2;
    n1->hijo_der=n3;
    n3->hijo_izq=n4;
    n3->hijo_der=n5;
    n2->hijo_izq=n6;
    n2->hijo_der=n7;

    imprimir(n1);

    return 0;
}
