#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
/*
Ingresar el nombre del empleado, el turno y las ventas. Validar que el turno solo sea 1,2,3.
Calcular usando un procedimiento, la comision ganada, el ihss y total a pagar
1=5, 2=3, 3=6
Presentar los datos calculados usando un procedimiento
*/
char nombre[30];
int turno, ventas,ihss,comision,tp;

void ingreso (char nombre[], int &turno, int &ventas)
{
    cout<<"Ingrese el nombre del empleado : ";
    cin.getline(nombre,30);

    do
    {
    cout<<"Ingrese el turno : ";
    cin>>turno;
    } while ((turno==1) and (turno==2) and (turno==3));

    cout<<"Ingrese las ventas : ";
    cin>>ventas;
}
void calcular (int turno, int ventas, int &comision, int &ihss, int &tp)
{
    if (turno==1)
        comision=ventas*0.05;
    if (turno==2)
        comision=ventas*0.03;
    if (turno==3)
        comision=ventas*0.06;



    tp=ventas+comision-ihss;
}
void presentar (int comision, int ihss, int tp)
{
   cout<<"Comision : "<<comision<<"\n";
   cout<<"Seguro social : "<<ihss<<"\n";
   cout<<"Total a pagar : "<<tp<<"\n";
}

int main()
{
    ingreso(nombre,turno,ventas);
    calcular (turno, ventas,comision,ihss,tp);
    presentar (comision,ihss,tp);

    return 0;
}
