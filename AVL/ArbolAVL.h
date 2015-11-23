#ifndef ARBOLAVL_H
#define ARBOLAVL_H

#include "Nodo.h"
#include <iostream>

using namespace std;

class ArbolAVL
{
    public:
        Nodo* raiz;
        ArbolAVL();
        virtual ~ArbolAVL();
        void agregar(Nodo*nodo);
        void agregar(Nodo*nodo,Nodo*actual);
        void buscarAVL(int valor);
        void buscarAVL(int valor,Nodo*actual);
        void buscarBacktracking(int valor);
        void buscarBacktracking(int valor,Nodo*actual);
    protected:
    private:
};

#endif // ARBOLAVL_H
