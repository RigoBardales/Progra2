#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
/*
Ingresar el nombre, turno y las horas (Procedimiento)
Luego determinar las horas normales (Funcion), Lo mismo con las horas extras.
Las primeras 40 son normales y las demas son extras.

Luego determinar el pago por hora y extra usando un procedimiento.
Turno  Pnormal   Pextra
  1      100      120
  2      130      150
  3      140      160
Elaborar una funcion para el ihss
Usando un procedimiento realizar los calculos y en otro procedimiento presentar los datos
*/

char nombre[30];
int turno, horas, hn, he;
double pxn, pxe, pn,pe, pg, pb, ihss, tp;

void ingreso (char nombre[], int &turno, int &horas)
{
    cout<<"Ingrese el nombre : ";
    cin.getline(nombre,30);

    do
    {
      cout<<"Ingrese el turno 1,2,3..: ";
      cin>>turno;
    } while ((turno<1) or (turno>3));
    _flushall();

    cout<<"Ingrese las horas : ";
    cin>>horas;
}

int horasN (int horas)
{
    if (horas>40)
    {
        return 40;
    }
    else
    {
        return horas;
    }
}

int horasE (int horas)
{
    if (horas>40)
    {
        return horas-40;
    }
    else
    {
        return 0;
    }
}

void pagos(int turno, double &pxn, double &pxe)
{
    switch (turno)
    {
    case 1:
        pxn=100;
        pxe=120;
        break;
    case 2:
        pxn=130;
        pxe=150;
        break;
    default:
        pxn=140;
        pxe=160;
        break;
    }
}

int seguroSocial(double pb)
{ int ihss;
    if (pb>7000)
        ihss=245;
    else
        ihss=pb*0.035;
    return ihss;
}

void calcular (int turno, int horas, int &hn, int &he, double &pxn, double &pxe, double &pn,
               double &pe, double &pb, double &ihss, double &tp)
{
    hn = horasN(horas);
    he = horasE (horas);
    pagos(turno,pxn,pxe);
    pn = hn * pxn;
    pe = he * pxe;
    pb = pn + pe;
    ihss = seguroSocial(pb);
    tp = (pb + pe) - ihss;
}

void presentar (int hn, int he, double pxn, double pxe, double pn,
               double pe, double pb, double ihss, double tp)
{
    cout<<"Horas Normales : "<<hn<<"\n";
    cout<<"Horas Extras : "<<he<<"\n";
    cout<<"Pago hora Normal : "<<pxn<<"\n";
    cout<<"Pago hora Extra : "<<pxe<<"\n";
    cout<<"Pago Normal : "<<pn<<"\n";
    cout<<"Pago Extra : "<<pe<<"\n";
    cout<<"Pago Bruto : "<<pb<<"\n";
    cout<<"Seguro Social : "<<ihss<<"\n";
    cout<<"Total a pagar : "<<tp<<"\n";
}
int main()
{
    ingreso(nombre,turno,horas);
    calcular(turno,horas,hn,he,pxn,pxe,pn,pe,pb,ihss,tp);
    presentar(hn,he,pxn,pxe,pn,pe,pb,ihss,tp);

    return 0;
}
