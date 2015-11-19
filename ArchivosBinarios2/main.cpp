#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

string nombre_archivo="archivo";

class Pastel
{
public:
    string sabor;//20 bytes
    string topping;//20 bytes
    Pastel(string sabor,string topping)
    {
        this->sabor=sabor;
        this->topping=topping;
    }
};

void guardar(Pastel pastel, int pos)
{
    ofstream out(nombre_archivo.c_str(),ios::in);//ios::in
    if(!out.is_open())
    {
        out.open(nombre_archivo.c_str());
    }
    out.seekp(pos*40);
    out.write(pastel.sabor.c_str(),20);
    out.write(pastel.topping.c_str(),20);
    out.close();
}

Pastel leer(int pos)
{
    ifstream in(nombre_archivo.c_str());
    in.seekg(pos*40);
    char sabor[20];
    char topping[20];
    in.read(sabor,20);
    in.read(topping,20);
    in.close();
    return Pastel(sabor,topping);
}

void escribirPasteles(vector<Pastel*>pasteles)
{
    ofstream out(nombre_archivo.c_str());
    for(int i=0;i<pasteles.size();i++)
    {
        out.write(pasteles[i]->sabor.c_str(),20);
        out.write(pasteles[i]->topping.c_str(),20);
    }
    out.close();
}

vector<Pastel*> getPasteles()
{
    vector<Pastel*>pasteles;

    ifstream in(nombre_archivo.c_str());
    in.seekg(0,ios::end);
    int tamano = in.tellg()/40;
    in.seekg(0);
    for(int i=0;i<tamano;i++)
    {
        char sabor[20];
        char topping[20];
        in.read(sabor,20);
        in.read(topping,20);
        pasteles.push_back(new Pastel(sabor,topping));
    }
    in.close();
    return pasteles;
}

int main()
{
    cout<<"---Directo al disco---"<<endl;
    Pastel p("vainilla","caramelo");
    Pastel p2("chocolate","fresa");
    guardar(p2,1);
    guardar(p,0);
    //guardar(p2,0);
    cout<<leer(0).sabor<<endl;
    cout<<leer(0).topping<<endl;
    cout<<leer(1).sabor<<endl;
    cout<<leer(1).topping<<endl;

    cout<<"---Pasando por la ram---"<<endl;

    vector<Pastel*>pasteles = getPasteles();

    cout<<pasteles[0]->sabor<<endl;
    cout<<pasteles[0]->topping<<endl;
    cout<<pasteles[1]->sabor<<endl;
    cout<<pasteles[1]->topping<<endl;

    pasteles[0]->sabor = "limon";

    escribirPasteles(pasteles);
    cout<<leer(0).sabor<<endl;

    return 0;
}
