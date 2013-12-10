#include <iostream>

using namespace std;
const int tam=4;
int arreglo[5];
int doblearreglo [5];


void ingreso(int arreglo[])
{
    for(int i=0; i<=tam; i++)
    {
        do
        {
          cout<<"Ingrese un numero["<<i<<"] : ";
          cin>>arreglo[i];
        }while (arreglo[i]%2!=0);
    }
}

int sumaM100 (int arreglo[])
{ int suma=0;
    for (int i=0; i<=tam; i++)
    {
        if (arreglo[i]>100)
            suma+=arreglo[i];
    }
    return suma;
}

int mayorDiv5 (int arreglo[])
{int mayor=0;
    for (int i=0; i<=tam; i++)
    {
        if (arreglo[i]%5==0)
            if (arreglo[i]>mayor)
               mayor=arreglo[i];
    }
    return mayor;
}

void dobleArreglo (int arreglo[], int doblearreglo[])
{
   for (int i=0; i<=tam; i++)
   {
       doblearreglo[i]=2*arreglo[i];
   }
}

void presentarArreglos (int arreglo[], int doblearreglo[])
{
    cout<<"El arreglo es : ";
    for (int i=0; i<=tam; i++)
    {
        cout<<arreglo[i]<<" ";
    }

    cout<<"\n"<<"El doble del arreglo es : ";
    for (int j=0; j<=tam; j++)
    {
        cout<<doblearreglo[j]<<" ";
    }
}

int main()
{int suma=0, mayor;

    ingreso(arreglo);

    suma=sumaM100(arreglo);
    cout<<"\n"<<"La suma de mayores a 100 es : "<<suma<<"\n";

    mayor=mayorDiv5(arreglo);
    cout<<"El numero mayor div % 5 es : "<<mayor<<"\n";

    dobleArreglo(arreglo, doblearreglo);
    presentarArreglos(arreglo,doblearreglo);

    return 0;
}
