#include <iostream>

#include "ArbolAVL.h"

using namespace std;

int main()
{
    ArbolAVL a;
    a.agregar(new Nodo(10));
    a.agregar(new Nodo(5));
    a.agregar(new Nodo(15));
    a.agregar(new Nodo(12));
    a.agregar(new Nodo(20));

    a.buscarBacktracking(20);
    return 0;
}
