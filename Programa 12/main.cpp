#include <iostream>

using namespace std;
/* Ingresar cinco numeros y determinar el promedio de pares y
el promedio de los pares; al final presentar el numero mayor*/

int main()
{ int numero,contador,cpares,cimpares,spares,simpares,mayor;
    double propares,proimpares;

    contador=0;
    spares=0;
    simpares=0;
    cpares=0;
    cimpares=0;
    mayor=0;

    while (contador<5)
    {
        cout<<"Ingrese un numero..>";
        cin>> numero;

        if ((numero % 2)==0)
        {
            cpares++;
            spares+=numero;
        }
        else
        {
            cimpares++;
            simpares+=numero;
        }
        contador++;
    }
        propares=spares/cpares;
        proimpares=simpares/cimpares;

        cout<<"Promedio pares"<<propares<<"\n";
        cout<<"Promedio impares"<<proimpares<<"\n";

    return 0;
}
