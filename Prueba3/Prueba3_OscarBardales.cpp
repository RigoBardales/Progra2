#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int numero;
int ncifras;

void ingreso(int &numero)
{
    do
    {
      cout<<"Ingresar un numero : ";
      cin>>numero;
    } while (!((numero%2==0) or (numero%5==0)));
}
void calcular (int numero, int &ncifra)
{
    ncifras=0;

    while (numero>0)
    {
       numero=numero/10;
       ncifra++;
    }

}
void presentar (int ncifras)
{
   cout<<"El numero de cifras fue : "<<ncifras<<"\n";
}

int main()
{
    for (int i=0; i<5; i++)
    {
       ingreso(numero);
       calcular(numero,ncifras);
       presentar(ncifras);
    }

    return 0;
}
