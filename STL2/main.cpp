#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main()
{
    cout<<"--Cola--"<<endl;
    queue<string>mi_cola;
    mi_cola.push("A");
    mi_cola.push("B");
    mi_cola.push("C");
    mi_cola.push("D");
    while(!mi_cola.empty())
    {
        cout<<mi_cola.front()<<endl;
        mi_cola.pop();
    }

    cout<<"--Pila--"<<endl;
    stack<string>mi_pila;
    mi_pila.push("A");
    mi_pila.push("B");
    mi_pila.push("C");
    mi_pila.push("D");
    while(!mi_pila.empty())
    {
        cout<<mi_pila.top()<<endl;
        mi_pila.pop();
    }

    return 0;
}
