#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

using namespace std;
struct empleados
{
    char nombre[30];
    int ventas,comision;
};
const int tam=5;
empleados emple[tam];
empleados emplemax;

empleados mayorempleado(empleados emple[])
{ empleados auxmayor;
  auxmayor.comision=0;
    for(int i=0;i<tam;i++)
    {
        if(auxmayor.comision<emple[i].comision)
            auxmayor=emple[i];
    }
    return auxmayor;
}

void ingreso(empleados emple[])
{
   for (int i=0;i<tam;i++)
   {
       cout<<"Ingresar el nombre del empleado : ";
       cin.getline(emple[i].nombre,30);
       cout<<"Ventas de "<<emple[i].nombre<<" : ";
       cin>>emple[i].ventas;
       _flushall();
   }
}

void calcular (empleados emple[])
{
    for (int i=0;i<tam;i++)
    {
        emple[i].comision=emple[i].ventas*0.05;
    }
}

void presentar (empleados emple[])
{
    for (int i=0; i<tam; i++)
    {
        cout<<"El empleado "<<emple[i].nombre<<" Gano "<<emple[i].comision<<" de comision"<<"\n";
    }
}


int main()
{
    ingreso(emple);
    calcular(emple);
    presentar(emple);
    emplemax= mayorempleado(emple);
    cout<<"Empleado que obtuvo la mayor comision es "<<emplemax.nombre<<" Con la comision de "<<emplemax.comision;
    return 0;
}
