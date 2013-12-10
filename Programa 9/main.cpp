#include <iostream>

using namespace std;
/* Estructuras de repeticion
Ingresar y presentar el final al final del ciclo
la suma de los numeros ingresados*/

int main()
{ int numero, contador, suma;
    contador=0;
    suma=0;
    while (contador<5)
    {
        cout<<"Ingresar un numero..>";
        cin>> numero;

        contador ++; //contador = contador + 1

        suma+=numero; //suma= suma + numero;
    }

    cout<<"Suma de los numeros es.."<<suma<<"\n";

    return 0;
}
