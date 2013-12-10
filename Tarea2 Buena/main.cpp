#include <iostream>

using namespace std;

int main()
{ int num,cifra,suma,mayor,menor,contador,cpar,cimpar;
  double prom;
  cpar=0;
  cimpar=0;
  contador=0;
  suma=0;
  mayor=0;
  menor=10;
  cout<<"Ingresar un numero entero..: ";
  cin>>num;
  cout<<"Numero al reves..  ";

   while (num>0)
   {
       cifra = num % 10;
       cout<<cifra;
       num = num/10;
       suma+=cifra;
       contador++;

       if (cifra>mayor)
       {
           mayor=cifra; //Cuando solo es uno se pueden omitir las llaves
       }
       if (cifra<menor)
           menor=cifra;

        if (cifra%2==0)
            cpar++;
        else
            cimpar++;

   }
   prom=suma/contador;

   cout<<"\n";
   cout<<"Suma de las cifras  "<<suma<<"\n";
   cout<<"El numero mayor es "<<mayor<<"\n";
   cout<<"El numero menor es  "<<menor<<"\n";
   cout<<"El promedio es  "<<prom<<"\n";
   cout<<"Cifras pares  "<<cpar<<"\n";
   cout<<"Cifras impares  "<<cimpar<<"\n";

    return 0;
}
