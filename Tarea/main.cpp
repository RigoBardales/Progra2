#include <iostream>

using namespace std;
//Ingresar un numero y presentar la suma de sus digitos
int main()
{int numero, res1, res2, res3, cociente1, cociente2, cociente3, suma;
    suma=0;
    cociente1=0;
    cociente2=0;
    cociente3=0;

    cout<<"Ingrese un numero..> ";
    cin>>numero;

    if (numero<=9999)
    {
      res1 = numero % 1000; //Se obtiene el residuo
      cociente1 = ((numero-res1)/1000); //Se obtiene el primer digito
      res2 = res1 % 100; //Se obtiene el residuo del residuo
      cociente2 = ((res1-res2)/100); //Se obtiene el segundo digito
      res3 = res2 % 10; // Se obtiene el residuo final
      cociente3 = ((res2-res3)/10); //Se obtiene el tercer digito
      suma = res3 + cociente1 + cociente2 +cociente3;

      cout<<"La suma de sus digitos es..> "<<suma<<"\n";
    }
    else
    {
        cout<<"Ingrese un numero de menor cantidad de digitos..";
    }

    //Este programa solo presenta la suma de un numero con un maximo de cuatro digitos


    return 0;
}
