#include <iostream>
#include <map>

using namespace std;

class X
{
public:
    int a;
    X(int a)
    {
        this->a=a;
    }
};

class Y
{
public:
    int b;
    Y(int b)
    {
        this->b=b;
    }
};

int main()
{
    map<X*,Y*>mis_clases;
    X *x1 = new X(10);
    X *x2 = new X(100);
    mis_clases[x1]=new Y(20);
    mis_clases[x2]=new Y(200);
    cout<<mis_clases[x1]->b<<endl;
    cout<<mis_clases[x2]->b<<endl;

//    multimap<string,int>mi_mapa;
////    mi_mapa["C"]=30;
////    mi_mapa["B"]=40;
////    mi_mapa["A"]=10;
////    mi_mapa["B"]=20;
//    mi_mapa.insert(pair<string,int>("B",60));
//    mi_mapa.insert(pair<string,int>("A",20));
//    mi_mapa.insert(pair<string,int>("C",30));
//    mi_mapa.insert(pair<string,int>("B",40));
//
////    cout<<mi_mapa["A"]<<endl;
////    cout<<mi_mapa["B"]<<endl;
////    cout<<mi_mapa["C"]<<endl;
//
//    for(map<string,int>::iterator i = mi_mapa.begin();
//        i!=mi_mapa.end();
//        i++)
//    {
//        cout<<(*i).first<<" - "<<i->second<<endl;
//    }
    return 0;
}
