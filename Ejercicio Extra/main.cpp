#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
/*
Ingresar 5 cadenas a un arreglo de tipo char a un arreglo usando un procedimiento, luego elaborar una
funcion que cuente cuantas consonantes tienen cada uno de los nombres.
Elaborar un procedimiento para agregar al final de la cadena un asterisco.
Presentar la cadena modificada con el asteriso y a la par el numero de consonantes que tiene.
*/
char nombre[5][30];

void ingresoCadenas (char nombre[5][30])
{
    for (int i=0;i<5;i++)
    {
        cout<<"Ingresar el nombre : ";
        cin.getline(nombre[i],30);
    }
}

int numConsonantes (char nombre[5][30])
{
    int l, nl=strlen(nombre);
    int contador=0;
        for (int l=0; l<nl;l++)
        {   char letra=nombre[l];
            switch (letra)
            {
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'A':
                case 'E':
                case 'I':
                case 'O':
                case 'U':
                   break;
                default:
                   contador++;
                   break;
            }
        }
    } return contador;
}




void asterisco (char nombre[5][30])
{ int nl;
   for (int i=0;i<5;i++)
    { nl=strlen(nombre[i]);
       nombre[i][nl]='*';
    }
}

void presentar(char nombre[5][30])
{
    for (int i=0;i<5;i++)
    {
        cout<<"El nombre ["<<i<<"] : "<<nombre[i]<<"\n";
    }
}

int main()
{int nl;
    ingresoCadenas(nombre);
    asterisco(nombre);
    presentar(nombre);
    return 0;
}
