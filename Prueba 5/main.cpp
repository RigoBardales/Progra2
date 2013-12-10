#include <iostream>

using namespace std;
struct empleado
{
    char nombre[30];
    int ventas, turno, comision, ihss, tp;
    double porcomision;
};
empleado emplex;

void ingreso(empleado &emplex)
{
    cout<<"Ingrese el nombre del empleado : ";
    cin.getline(emplex.nombre,30);

    cout<<"Ingrese las ventas : ";
    cin>>emplex.ventas;

    do
    {
    cout<<"Ingrese el turno [1,2,3] : ";
    cin>>emplex.turno;
    }while (emplex.turno<0 or emplex.turno>3);
}

double porcentajeComision (empleado &emplex)
{
    if(emplex.turno==1)
        return 0.03;
    else if (emplex.turno==2)
        return 0.05;
    else if (emplex.turno==3)
        return 0.06;
    else
        return -1;
}

int SeguroSocial (empleado &emplex)
{
    if (emplex.ventas>7000)
        return 245;
    else
        return 0.035*emplex.ventas;
}

void calcular (empleado &emplex)
{
    emplex.porcomision = porcentajeComision(emplex);
    emplex.comision = emplex.ventas*emplex.porcomision;

    emplex.ihss=SeguroSocial(emplex);

    emplex.tp= emplex.ventas+emplex.comision-emplex.ihss;
}

void presentar (empleado emplex)
{
    cout<<"La comision obtenida fue de : "<<emplex.comision<<"\n";
    cout<<"El seguro social es de : "<<emplex.ihss<<"\n";
    cout<<"El total a pagar es : "<<emplex.tp<<"\n";
}
int main()
{
    ingreso(emplex);
    calcular(emplex);
    presentar(emplex);
    return 0;
}
