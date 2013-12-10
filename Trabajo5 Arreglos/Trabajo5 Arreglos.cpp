#include <iostream>

using namespace std;
const int tam=4;
int arreglo[5];

// Procedimiento para ingresar arreglo, se usa un for para llegar los 5 espacios
void ingreso (int arreglo[])
{
    for (int i=0; i<5;i++)
    {
        cout<<"Ingrese un numero["<<i<<"] : ";
        cin>>arreglo[i];
    }
}
/*Metodo de la burbuja, compara dos numeros los cambia de posicion segun la condicion.
El for exterior es para correrlo las veces necesarias para que todo quede ordenado.
El for interior compara una vez el arreglo.
*/
void ascendente (int arreglo[])
{ int temp;

for (int j=0; j<5; j++)
{
    for (int i=0; i<=tam-1;i++)
    {
        if (arreglo[i+1] < arreglo[i])
        {
            temp = arreglo [i];
            arreglo[i]=arreglo[i+1];
            arreglo[i+1]=temp;
        }
    }
}
}

void descendente (int arreglo[])
{ int temp;

  for (int j=0; j<5; j++)
  {
    for (int i=0; i<=tam;i++)
    {
        if (arreglo[i+1] > arreglo[i])
        {
            temp = arreglo [i];
            arreglo[i]=arreglo[i+1];
            arreglo[i+1]=temp;
        }
    }
   }
}

//Si se cumple la condicion del if la posicion i del arreglo es cambiada por un cero.

void cambiarArreglo (int arreglo[])
{
    for (int i=0; i<=tam; i++)
    {
        if (arreglo[i]%2==0)
        {
            arreglo[i]=0;
        }
    }
}

int main()
{
    ingreso(arreglo);

    ascendente(arreglo); // Se ingresa el procedimiento y se presenta el arreglo
    cout<<"Ascendente : ";
     for (int j=0; j<=tam; j++)
     {
       cout<< arreglo[j] <<", ";
     }
     cout<<"\n";

    descendente(arreglo);
    cout<<"Descendente : ";
     for (int j=0; j<=tam; j++)
     {
       cout<< arreglo[j] <<", ";
     }
     cout<<"\n";

    cambiarArreglo(arreglo);
    cout<<"Pares igual a cero : ";
     for (int j=0; j<=tam; j++)
     {
       cout<<" "<< arreglo[j] <<", ";
     }
      cout<<"\n";

      //Siempre que se desea presentar un arreglo se necesita un for.

    return 0;
}
