#include <iostream>

using namespace std;
/* Ingresar cinco numeros y contar cuantos son positivos, negativos y ceros*/

int main()
{ int numero,cpositivos,cceros,cnegativos,contador;
    cpositivos=0;cceros=0;cnegativos=0;
    contador=0;
    while (contador<5)
    {
        cout<<"Ingrese un numero..>";
        cin>> numero;

        contador ++;

        if ((numero>0))
         {
            cpositivos++;
         }
        else if (numero<0)
        {
            cnegativos++;
        }
        else
        {
            cceros++;
        }
    }

    cout<<"Contador de Positivos..."<<cpositivos <<"\n";
    cout<<"Contador de Negativos..."<<cnegativos <<"\n";
    cout<<"Contador de Ceros..."<<cceros <<"\n";
    return 0;
}
