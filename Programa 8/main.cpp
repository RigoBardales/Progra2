#include <iostream>

using namespace std;
/*
Se tiene que ingrear la nota del alumno y el programa debera de presentar
la observacion usando la siguiente tabla:
1-59 Reprobado
60-80 Bueno
81-90 Muy bueno
91-100 Sobresaliente.
*/

int main()
{ int nota;
  char nombre [30]

    cout << "Ingrese el nombre..>";
    cin.getline(nombre,30);

    cout << "Ingrese la nota del alumno..>";
    cin>> nota;

    if ((nota>=0)and (nota<60))
    {
      cout<< "Reprobado"<<"\n";
    }
    else if ((nota>=60) and (nota<81))
    {
      cout<< "Bueno"<<"\n";
    }
    else if ((nota>=81) and (nota<91))
    {
      cout<< "Muy bueno"<<"\n";
    }
    else if ((nota>=91) and (nota<=100))
    {
      cout<< "Sobresaliente"<<"\n";
    }
    else
    {
      cout<< "Nota incorrecta"<<"\n";
    }
    return 0;
}
