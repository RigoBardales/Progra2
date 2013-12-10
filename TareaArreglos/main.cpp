#include <iostream>

using namespace std;
const int lin=6;
const int col=3;
int num[lin][col];

void ingreso(int num[lin][col])
{
    for(int l=0; l<lin-1; l++)
    {
        for(int c=0; c<col; c++)
        {
            cout<<"Ingresar Dato ["<<l<<","<<c<<"] : ";
            cin>>num[l][c];
        }
    }
}

void promColumnas(int num[lin][col])
{
    for(int c=0; c<col; c++)
    { int suma=0;
        for(int l=0; l<lin-1; l++)
        {
          suma+=num[l][c];
          num[lin-1][c]=suma/5;
        }
    }
}

void presentar (int num[lin][col])
{
    for (int l=0; l<lin; l++)
    {
        for (int c=0; c<col; c++)
        {
            cout<<" "<<num[l][c]<<" ";
        }
        cout<<"\n";
    }
}


int main()
{
    ingreso(num);
    promColumnas(num);
    presentar(num);

    return 0;
}
