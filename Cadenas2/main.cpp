#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
/*
Ingresar 5 nombres a un arreglo,
Luego sustituir todas sus vocales por letras X.
Elaborar una funcion para presentar cuantas son consonantes tiene cada una de las palabras.
*/
const int n=5;
char cadena[n][30];
int consonante[n];

void ingreso (char cadena[n][30])
{
    for (int i=0; i<n; i++)
    {
        cout<<"Ingresar la cadena ["<<i<<"] : ";
        cin.getline(cadena[i],30);
    }
}

void cambiar (char cadena[n][30])
{int nl;
    for (int i=0;i<n;i++)
    { nl=strlen(cadena[i]);
        for (int l=0; l<nl;l++)
        {
            switch (cadena[i][l])
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
                   cadena[i][l]='X';
                   break;
                default:
                   break;
            }
        }
    }
}

int nconsonantes (char cadena[n][30])
{
    int nl;
    int contador=0;
    for (int i=0;i<n;i++)
    { nl=strlen(cadena[i]);
        for (int l=0; l<nl;l++)
        {
            switch (cadena[i][l])
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

void presentar(char cadena[n][30])
{
    for (int i=0;i<n;i++)
    {
        cout<<"Cadena "<<cadena[i]<<"\n";
    }
}

int main()
    ingreso(cadena);
    cambiar(cadena);
    presentar(cadena);
    nconsonantes(cadena);
    return 0;
}
