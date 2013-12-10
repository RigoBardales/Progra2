#include <iostream>

using namespace std;
/*
Ingresar 10 numeros, al final presentar cuantos numeros fueron divisibles
entre 5, el promedio de los divisibles entre 5 y el numero mayor de todos los numeros.
*/
int main()
{ int num,contador,suma,mayor;
  double prom;
  contador=0;
  suma=0;
  mayor=0;


  for (int i=0;i<10;i++)
  {
      cout<<"Ingresar un numero:  ";
      cin>>num;

      if (num % 5==0)
      {
          contador++;
          suma+=num;
      }

      if (num>mayor)
      {
          mayor=num;
      }

  }

  if (contador!=0)
  {
      prom=suma/contador;
  }
  else
  {
      prom=0;
  }

  cout<<"El numero de numeros divisibles entre 5 fue:  "<<contador<<"\n";
  cout<<"El promedio de numeros divisibles entre 5 fue:  "<<prom<<"\n";
  cout<<"El numero mayor fue:  "<<mayor<<"\n";

    return 0;
}
