#ifndef NODO_H
#define NODO_H

#include <iostream>

using namespace std;

class Nodo
{
    public:
        Nodo*hijo_izq;
        Nodo*hijo_der;
        int valor;
        Nodo(int valor);
        virtual ~Nodo();
    protected:
    private:
};

#endif // NODO_H
