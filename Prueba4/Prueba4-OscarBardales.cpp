#include <iostream>
#include <stdio.h>

using namespace std;
char p1,p2,p3,p4,p5,p6,p7,p8,p9,marca;
int pos,contador;

void presentar(char p1,char p2,char p3, char p4,char p5,char p6,char p7,char p8,char p9)
{
	cout << "     |     |     " << "\n";
	cout << "  " << p1 << "  |  " << p2 << "  |  " << p3 << "\n";

	cout << "_____|_____|_____" << "\n";
	cout << "     |     |     " << "\n";

	cout << "  " << p4 << "  |  " << p5 << "  |  " << p6 << "\n";

	cout << "_____|_____|_____" << "\n";
	cout << "     |     |     " << "\n";

	cout << "  " << p7 << "  |  " << p8 << "  |  " << p9 << "\n";

	cout << "     |     |     " << "\n" << "\n";
}

int combinaciones(char p1,char p2,char p3, char p4,char p5,char p6,char p7,char p8,char p9)
{
	if (p1 == 'X' and p2 == 'X' and p3 == 'X')
		return 1;

	else if (p4 == 'X' and p5 == 'X' and p6 == 'X')
		return 1;

	else if (p7 == 'X' and p8 == 'X' and p9 == 'X')
		return 1;

	else if (p1 == 'X' and p4 == 'X' and p7 == 'X')
		return 1;

	else if (p2 == 'X' and p5 == 'X' and p8 == 'X')
		return 1;

	else if (p3 == 'X' and p6 == 'X' and p9 == 'X')
		return 1;

    else if (p1 == 'X' and p5 == 'X' and p9 == 'X')
		return 1;

	else if (p3 == 'X' and p5 == 'X' and p7 == 'X')
		return 1;

    else if (p1 == '0' and p2 == '0' and p3 == '0')
		return 2;

	else if (p4 == '0' and p5 == '0' and p6 == '0')
		return 2;

	else if (p7 == '0' and p8 == '0' and p9 == '0')
		return 2;

	else if (p1 == '0' and p4 == '0' and p7 == '0')
		return 2;

	else if (p2 == '0' and p5 == '0' and p8 == '0')
		return 2;

	else if (p3 == '0' and p6 == '0' and p9 == '0')
		return 2;

    else if (p1 == '0' and p5 == '0' and p9 == '0')
		return 2;

	else if (p3 == '0' and p5 == '0' and p7 == '0')
		return 2;

    else if (contador==9)
        return 3;

    else
        return -1;

}

int main()
{int i;
contador=0;

     //for (int i=0; i<9; i++)
     do
     {
        cout << "Ingresar la posicion : ";
        cin>>pos;
        _flushall();

        cout<<"Ingresar la marca [X o 0]: ";
        switch (pos)
         {
         case 1:
            if ((p1=='X') or (p1=='0'))
                cout<<"Ya esta ocupada";
            else
               cin.get(p1);
            break;
         case 2:
            if ((p2=='X') or (p2=='0'))
                cout<<"Ya esta ocupada";
            else
                cin.get(p2);
            break;

         case 3:
            if ((p3=='X') or (p3=='0'))
                cout<<"Ya esta ocupada";
            else
                cin.get(p3);
            break;

        case 4:
            if ((p4=='X') or (p4=='0'))
                cout<<"Ya esta ocupada";
            else
                 cin.get(p4);
            break;
         case 5:
            if ((p5=='X') or (p5=='0'))
                cout<<"Ya esta ocupada";
            else
                 cin.get(p5);
            break;
         case 6:
            if ((p6=='X') or (p6=='0'))
                cout<<"Ya esta ocupada";
            else
                 cin.get(p6);
            break;
        case 7:
            if ((p7=='X') or (p7=='0'))
                cout<<"Ya esta ocupada";
            else
                 cin.get(p7);
            break;
         case 8:
            if ((p8=='X') or (p8=='0'))
                cout<<"Ya esta ocupada";
            else
                cin.get(p8);
            break;
         case 9:
            if ((p9=='X') or (p9=='0'))
                cout<<"Ya esta ocupada";
            else
                cin.get(p9);
            break;
         }
    _flushall();
    cout<<"\n";


    contador++;
    presentar(p1,p2,p3,p4,p5,p6,p7,p8,p9);
    i=combinaciones(p1,p2,p3,p4,p5,p6,p7,p8,p9);

    } while (i<=0);

    if(i==1)
		cout<<"GANA X";
	else if (i==2)
		cout<<"GANA 0";
    else if (i==3)
        cout<<"Empate";

    return 0;
}
