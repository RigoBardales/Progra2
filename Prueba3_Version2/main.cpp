#include <iostream>

using namespace std;
int vnumero;
int vncifras;

int ingreso()
{   int numero;
    do
    {
      cout<<"Ingresar un numero : ";
      cin>>numero;
    } while (!((numero%2==0) or (numero%5==0)));

    return numero;
}
int calcular (int numero)
{
    int ncifras=0;
    while (numero>0)
    {
       numero=numero/10;
       ncifras++;
    }
    return ncifras;
}


int main()
{
    for (int i=0; i<5; i++)
    {
        vnumero=ingreso();
        vncifras=calcular(vnumero);

        cout<<"El numero de cifras fue : "<<vncifras<<"\n";
    }

    return 0;
}
