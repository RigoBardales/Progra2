#include <iostream>

using namespace std;
/*Ingresar el mes , el día , el año y determinar si la fecha esta
correcta. Se tiene que validar si el mes esta correcto, si el día
corresponde al mes y si el año es mayor a cero.
*/

int main()
{ int mes,dia,ano;

    cout << "Ingrese el mes..>";
    cin >> mes;

    cout << "Ingrese el dia..>";
    cin >> dia;

    cout << "Ingrese el ano..>";
    cin>> ano;

    if ((ano>0) and ((mes>0) and (mes<=12)))
    {
        if ((mes==1) and ((dia>=1) and (dia<=31)))
            {
              cout << "Fecha valida"<<"\n";
            }
        else if ((mes==2) and ((dia>=1) and (dia<=28)))
            {
              cout<<"Fecha valida"<<"\n";
            }
        else if ((mes==3) and ((dia>=1) and (dia<=31)))
            {
              cout<<"Fecha valida"<<"\n";
            }
        else if ((mes==4) and ((dia>=1) and (dia<=30)))
            {
              cout<<"Fecha valida"<<"\n";
            }
        else if ((mes==5) and ((dia>=1) and (dia<=31)))
            {
              cout<<"Fecha valida"<<"\n";
            }
        else if ((mes==6) and ((dia>=1) and (dia<=30)))
            {
              cout<<"Fecha valida"<<"\n";
            }
        else if ((mes==7) and ((dia>=1) and (dia<=31)))
            {
              cout<<"Fecha valida"<<"\n";
            }
        else if ((mes==8) and ((dia>=1) and (dia<=31)))
            {
              cout<<"Fecha valida"<<"\n";
            }
        else if ((mes==9) and ((dia>=1) and (dia<=30)))
            {
              cout<<"Fecha valida"<<"\n";
            }
        else if ((mes==10) and ((dia>=1) and (dia<=31)))
            {
              cout<<"Fecha valida"<<"\n";
            }
        else if ((mes==11) and ((dia>=1) and (dia<=30)))
            {
              cout<<"Fecha valida"<<"\n";
            }
        else if ((mes==12) and ((dia>=1) and (dia<=31)))
            {
              cout<<"Fecha valida"<<"\n";
            }
        else
        {
            cout<<"La fecha no es valida"<<"\n";
        }
    }
    else
    {
        cout<<"La fecha no es valida";
    }


    return 0;
}
