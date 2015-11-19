#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int>mi_set;
    mi_set.insert(5);
    mi_set.insert(1);
    mi_set.insert(9);
    mi_set.insert(11);
    mi_set.insert(6);
    mi_set.insert(3);
    mi_set.insert(6);

    for(set<int>::iterator i = mi_set.begin();
        i!=mi_set.end();
        i++)
        cout<<*i<<endl;

    set<int>::iterator j = mi_set.find(2);
    cout<<"Find:"<<*j<<endl;

    if(mi_set.find(1)!=mi_set.end())
        cout<<"Existe"<<endl;
    else
        cout<<"No existe"<<endl;

    return 0;
}
