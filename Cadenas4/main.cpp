#include <iostream>
#include <string>
#include <string.h>
using namespace std;
string cadena;
int main()
{
    cout<<"Ingresar la cadena : ";
    cin>>cadena;
    string subcadena (cadena,2,6); //De la posicion 2 a la 6
    cout<<"Valor de la Subcadena "<<subcadena<<"\n";

    string cortar;
    cortar=cadena.substr(0,5);
    cout<<"Valor de cortar "<<cortar<<"\n";

    cout<<"Tamano de la cadena "<<cadena.size()<<"\n";

    string insertado;
    insertado=cadena;
    insertado=cadena.insert(1, "Juan");
    cout<<"Valor de insertado :"<<insertado<<"\n";

    string ree;
    ree= cadena;
    ree= cadena.replace(1,1,"a");
    cout<<"Valor ree "<<ree<<"\n";

    return 0;
}
