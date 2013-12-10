#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Comparacion de cadenaas
using namespace std;
char nombre[5][30];

void ingresoCadenas (char nombre[5][30])
{
    for (int i=0;i<5;i++)
    {
        cout<<"Ingresar el nombre : ";
        cin.getline(nombre[i],30);
    }
}

void comparar (char nombre[5][30])
{  char cadcompa[30];
    cout<<"Ingresar cadena a comparar : ";
    cin.getline(cadcompa,30);

    for (int i=0;i<5;i++)
    {
        if (strncasecmp(nombre[i],cadcompa,strlen(cadcompa))==0)
        {
            cout<<"Comparacion correcta con "<<nombre[i]<<"\n";
        }
    }
}
void comparar2 (char nombre[5][30])
{
    char cadcompa[30];
    cout<<"Ingresar cadena a comparar : ";
    cin.getline(cadcompa,30);

    for (int i=0;i<5;i++)
    {
        if (strcmp(nombre[i],cadcompa)==0)
            cout<<"Comparacion correcta con :"<<nombre[i]<<"\n";
    }
}
int main()
{
    ingresoCadenas(nombre);
    comparar(nombre);
    cout<<"--------------Comparar Dos------------"<<"\n";
    comparar2(nombre);
    return 0;
}
