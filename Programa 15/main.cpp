#include <iostream>

using namespace std;
/* Ingresar la base y el exponente y determinar la potencia usando el ciclo for */

int main()
{ int base,exp,pot;
    pot=1;

    cout<<"Ingrese un numero.. ";
    cin>>base;

    cout<<"Ingrese el exponente.. ";
    cin>>exp;

    for (int i=0;i<exp;i++)
    {
        pot*=base;
    }

    cout<<"La potencia es.. "<<pot<<"\n";

    return 0;
}
