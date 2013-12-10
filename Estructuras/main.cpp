#include <iostream>

using namespace std;
/*
Elaborar un programa donde se declare la siguiente estructura
Nombre, horas, hn, he, pn, pe, pb, ihss y tp (HN=40)
Se tiene que elaborar un procedimiento para ingresar los datos al registro, luego debemos calcular todo
Se tiene que elaborar una funcion para determinar el seguro social donde solo se ingrese el pago bruto
que es parte de la estructura y nos devuelva el ihss.
Luego presentar los datos usando un procedimiento.
*/
struct empleado
{
    char nombre[30];
    int horas,hn,he,pn,pe,ihss,tp;
};
empleado emplex;

void ingreso (empleado &emplex)
{
    cout<<"Ingrese el nombre : ";
    cin.getline(emplex.nombre,30);
    cout<<"Ingrese las horas : ";
    cin>>emplex.horas;
}

void calcular (empleado &emplex)
{
    if (emplex.horas>40)
        emplex.hehn=40;
        emplex.he=horas-40;
    else
        emplex.hn=emplex.horas;
        emplex.he=0;


}

int seguro(int pb)
{
    if (pb>7000)
        return 245;
    else
        return 0.035*pb;
}
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
