#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char *str=new char[5];
    str[0]='h';
    str[1]='o';
    str[2]='l';
    str[3]='a';
    str[4]='\0';

    char *str2 = new char[strlen(str)+1];
    strcpy(str2,str);

    str2[0]='H';

    if(strcmp(str,str2)==0)
    {
        cout<<"Son iguales"<<endl;
    }else
    {
        cout<<"Son diferentes"<<endl;
    }

    cout<<str<<endl;
    cout<<str2<<endl;
    cout<<strlen(str)<<endl;
    cout<<strlen(str2)<<endl;
    return 0;
}
