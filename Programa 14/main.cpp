#include <iostream>

using namespace std;
/*
Ingresar 5 numeros y determinar cuantos son divisibles entre 3
promedio de los numeros divisibles entre 3
*/
int main()
{  int numero,cdiv3,sdiv3;
   double prom;
      sdiv3=0;
      cdiv3=0;

    for (int i=0;i<5;i++)
    {
        cout<<"Ingresar un numero entero  ";
        cin>>numero;

        if ((numero%3)==0)
        {
            cdiv3++;
            sdiv3+=numero;
        }
    }

    if (cdiv3>0)
    {
        prom=sdiv3/cdiv3;
    }
    else
    {
        prom=0;
    }

    cout<<"Contador de divisibles entre 3 es:  "<<cdiv3<<"\n";
    cout<<"Promedio de divisibles entre 3 es:  "<<prom<<"\n";

    return 0;
}
