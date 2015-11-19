#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream out("archivo");
    int num = 97;
    out.write((char*)&num,4);
    char letra = 'b';
    out.write(&letra,1);
    out.close();

    ifstream in("archivo");
    int lectura;
    in.read((char*)&lectura,4);
    char lectura2;
    in.read((char*)&lectura2,1);
    in.close();

    cout<<lectura<<endl;
    cout<<lectura2<<endl;
    return 0;
}
