#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/*
Ingresar el nombre del empleado, las horas y el turno usando un procedimiento.
Luego determinar el pxh usando el turno, el pago de horas, ihss y total a pagar.
1    100
2    150
3    180
Presentar los datos usando un procedimiento
*/
char nombre[30]; int turno,horas,pb,ihss,tp;

void ingresar (char nombre[], int &turno, int &horas)
{
    cout<<"Ingrese el nombre del empleado : ";
    cin.getline(nombre,30);

    do
    {
    cout<<"Ingrese el turno : ";
    cin>>turno;
    }while ((turno<1) or (turno>3));

    cout<<"Ingrese las horas : ";
    cin>>horas;

    _flushall();
}

void calcular (int turno, int horas, int &pb, int &ihss, int &tp)
{
    switch (turno)
    {
        case 1:
            pb=100*horas;
            break;
        case 2:
            pb=150*horas;
            break;
        default:
            pb=180*horas;
            break;
    }

    if (pb>7000)
        ihss=245;
    else
        ihss=pb*0.035;

    tp=pb-ihss;
}

void presentar (int pb, int ihss, int tp)
{
   cout<<"Pago bruto : "<<pb<<"\n";
   cout<<"Ihss: "<<ihss<<"\n";
   cout<<"Total a pagar : "<<tp<<"\n";

}

int main()
{
    for(int i=0;i<3;i++)
    {
       ingresar(nombre,turno,horas);
       calcular(turno,horas,pb,ihss,tp);
       presentar(pb,ihss,tp);
    }

    return 0;
}

