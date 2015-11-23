#include "ArbolAVL.h"

ArbolAVL::ArbolAVL()
{
    raiz=NULL;
}

ArbolAVL::~ArbolAVL()
{
    //dtor
}

void ArbolAVL::agregar(Nodo* nuevo)
{
    agregar(nuevo,raiz);
}

void ArbolAVL::agregar(Nodo* nuevo,Nodo*actual)
{
    if(raiz==NULL)
    {
        raiz=nuevo;
        return;
    }else
    {
        if(nuevo->valor<actual->valor)
        {
            if(actual->hijo_izq==NULL)
                actual->hijo_izq=nuevo;
            else
                agregar(nuevo,actual->hijo_izq);
        }
        if(nuevo->valor>actual->valor)
        {
            if(actual->hijo_der==NULL)
                actual->hijo_der=nuevo;
            else
                agregar(nuevo,actual->hijo_der);
        }
    }
}

void ArbolAVL::buscarBacktracking(int valor)
{
    buscarBacktracking(valor,raiz);
}

void ArbolAVL::buscarBacktracking(int valor,Nodo*actual)
{
    if(actual==NULL)
    {
        cout<<"LLege hasta una hoja"<<endl;
        return;
    }
    cout<<"Valor actual: "<<actual->valor<<endl;
    if(valor==actual->valor)
    {
        cout<<"Encontre el valor!"<<endl;
        return;
    }
    buscarBacktracking(valor,actual->hijo_izq);
    buscarBacktracking(valor,actual->hijo_der);
}











