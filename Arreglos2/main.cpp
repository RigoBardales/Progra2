#include <iostream>
/*
Ingresaar 5 numeros a un arreglo.
Los numeros deberan de estar entre 50-100

Usando una funcion debera de obtener la suma de los numeros
divisibles entre 5.

Crear una funcion para determinar el promedio de los numeros pares

Crear un procedimiento para modificar el arreglo y colocar 0 a todos los numeros que son pares.

Crear un procedimiento para presentar el arreglo.
*/

using namespace std;
const int tam=4;
int arreglo[5];
int sumaA, promedioP;

void ingreso(int arreglo[])
{
    for (int i=0; i<=tam; i++)
    {
        do
        {
        cout<<"Ingresar un numero["<<i<<"] : ";
        cin>>arreglo[i];
        } while ((arreglo[i]<50) or (arreglo[i]>150));
    }
}

int numdiv5 (int arreglo[])
{ int suma=0;

    for (int i=0; i<=tam; i++)
    {
        if (arreglo[i] % 5 == 0)
            suma += arreglo[i];
    }
    return suma;
}

int promedioPares(int arreglo[])
{ int suma=0, cpar=0, promedio;

     for (int i=0; i<=tam; i++)
     {
         if (arreglo[i]%2 == 0)
         {
             suma+=arreglo[i];
             cpar++;
         }
     }
     if (cpar>0)
        promedio=suma/cpar;
     else
        promedio=0;
     return promedio;
}

void modificarArreglo (int arreglo[])
{
    for (int i=0; i<=tam; i++)
    {
        if ((arreglo[i]%2) == 0)
           arreglo[i]=0;
    }
}

void presentarArreglo (int arreglo[])
{
   cout<<"El nuevo arreglo es : ";
   for (int j=0; j<=tam; j++)
   {
       cout<<" "<< arreglo[j] <<" ";
   }
}
int main()
{
    ingreso(arreglo);
    promedioP = promedioPares(arreglo);
    sumaA= numdiv5(arreglo);
    cout<<"Numeros div entre 5 : "<<sumaA<<"\n";
    cout<<"Promedio pares : "<<promedioP<<"\n";
    modificarArreglo(arreglo);
    presentarArreglo(arreglo);

    return 0;
}
