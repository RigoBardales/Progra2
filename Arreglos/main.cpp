#include <iostream>

using namespace std;
const int tam=4;
int num[tam];
int mayor,menor,promedio,cpar=0;

void ingreso (int num[])
{
    for (int i=0; i<=tam; i++)
    {
        cout<<"Ingresar un numero["<<i<<"]..";
        cin>>num[i];
    }
}

int promedioArreglo(int num[])
{ int suma=0;

    for (int i=0; i<tam; i++)
    {
      suma+=num[i];
    }
    return suma/tam;
}

int mayorArreglo(int num[])
{int mayor=num[0];
    for (int i=0; i<=tam; i++)
    {
      if (num[i]>mayor)
        mayor=num[i];
    }
    return mayor;
}

int menorArreglo(int num[])
{int menor=num[0];
    for (int i=0; i<=tam; i++)
    {
      if (num[i]<menor)
        menor=num[i];
    }
    return menor;
}

int numeroPares (int num[])
{ int cpar=0;
  for (int i=0; i<=tam; i++)
    {
      if ((num[i]%2)==0)
        cpar++;
    }
    return cpar;
}

int main()
{
    ingreso(num);
    promedio=promedioArreglo(num);
    mayor= mayorArreglo(num);
    menor= menorArreglo(num);
    cpar= numeroPares(num);

    cout<<"Promedio del arreglo : "<<promedio<<"\n";
    cout<<"El numero mayor es : "<<mayor<<"\n";
    cout<<"El numero menor es : "<<menor<<"\n";
    cout<<"Cantidad de numeros pares: "<<cpar<<"\n";

    return 0;
}
