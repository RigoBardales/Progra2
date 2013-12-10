#include <iostream>

using namespace std;

int main()
{int numero,contador,cpares,cimpares,spares,simpares,mayor,menor;
    double propares,proimpares;

    contador=0;
    spares=0;
    simpares=0;
    cpares=0;
    cimpares=0;
    mayor=0;
    menor=1000000;

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

        if (numero>mayor)
        {
            mayor=numero;
        }
        if (numero<menor)
        {
            menor=numero;
        }
    }
        cout<<"Numero mayor es.."<<mayor<<"\n";
        cout<<"Numero menor es.."<<menor<<"\n";

    if (spares!=0)
    {
        propares=spares/cpares;
    }
    else
    {
        propares=0;
    }

    if (simpares!=0)
    {
        proimpares=simpares/cimpares;
    }
    else
    {
        proimpares=0;
    }

        cout<<"Promedio pares"<<propares<<"\n";
        cout<<"Promedio impares"<<proimpares<<"\n";

    return 0;

}
