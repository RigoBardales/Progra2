#include <iostream>

using namespace std;
/*
Ingresar el nombre del empleado, las horas trabajadas, el turno, luego determinar
las horas normales que son las primeras 40 y las extras que son mayores
a 40. Debera obtener pago por hora usando el turno, luego un bono, el pago bruto
que son la suma de los pagos normales y extras. ihss y total a pagar.

Turno    Pn   Pe
1        100  130
2        135  140
3        140  150

Bono si el empleado es de turno 1 y trabajo mas de 45 horas el bono es de 300 y sino es de 100

Ihss: El pago bruto mayor a 7000 es 245 y sino el pago bruto por 3.5%.
*/

int main()
{ char nombre [30];
  int horas, turno, horan, horae, pxhn, pxhe, bono, pb, pn, pe, ihss, tp;

  cout<<"Ingrese el nombre del empleado..>";
  cin.getline(nombre,30);

  cout<<"Ingrese las horas trabajadas..>";
  cin>>horas;

  cout<<"Ingrese el turno..>";
  cin>>turno;

  if (horas>40)
  {
    horae=horas-40;
    horan=40;
  }
  else
  {
      horae=0;
      horan=horas;
  }


  if (turno==1)
  {
      pxhn=100;
      pxhe=130;
  }
  else if (turno==2)
  {
      pxhn=135;
      pxhe=140;
  }
  else if (turno==3)
  {
      pxhn=140;
      pxhe=150;
  }
  else
  {
      pxhe=0;
      pxhn=0;
  }

  pn = pxhn*horan;
  pe = pxhe*horae;

  if ((turno==1) and (horas>45))
  {
      bono=300;
  }
  else
  {
      bono=100;
  }

  pb = pn + pe + bono;

  if (pb>7000)
  {
      ihss=245;
  }
  else
  {
      ihss=pb*0.035;
  }

  tp=pb-ihss;

  cout<<"Horas normales..>"<<horan<<"\n";
  cout<<"Horas extras..>"<<horae<<"\n";
  cout<<"Pago por horas normales..>"<<pn<<"\n";
  cout<<"Pago por horas extras..>"<<pe<<"\n";
  cout<<"Bono..>"<<bono<<"\n";
  cout<<"El pago bruto es..>"<<pb<<"\n";
  cout<<"El ihss es..>"<<ihss<<"\n";
  cout<<"El total a pagar es..>"<<tp<<"\n";




    return 0;
}
