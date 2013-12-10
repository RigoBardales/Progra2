#include <iostream>
using namespace std;

char posicion[10] = {'o','1','2','3','4','5','6','7','8','9'};

void tablero()
{
	cout << "\n              X-O\n";

	cout << "Jugador 1 (X)  -  Jugador 2 (O)" <<"\n";
	cout << "\n";

	cout << "     |     |     " << "\n";
	cout << "  " << posicion[1] << "  |  " << posicion[2] << "  |  " << posicion[3] << "\n";

	cout << "_____|_____|_____" << "\n";
	cout << "     |     |     " << "\n";

	cout << "  " << posicion[4] << "  |  " << posicion[5] << "  |  " << posicion[6] << "\n";

	cout << "_____|_____|_____" << "\n";
	cout << "     |     |     " << "\n";

	cout << "  " << posicion[7] << "  |  " << posicion[8] << "  |  " << posicion[9] << "\n";

	cout << "     |     |     " << "\n" << "\n";
}

int combinaciones()
{
	if (posicion[1] == posicion[2] and posicion[2] == posicion[3])

		return 1;
	else if (posicion[4] == posicion[5] and posicion[5] == posicion[6])

		return 1;
	else if (posicion[7] == posicion[8] and posicion[8] == posicion[9])

		return 1;
	else if (posicion[1] == posicion[4] and posicion[4] == posicion[7])

		return 1;
	else if (posicion[2] == posicion[5] and posicion[5] == posicion[8])

		return 1;
	else if (posicion[3] == posicion[6] and posicion[6] == posicion[9])

		return 1;
	else if (posicion[1] == posicion[5] and posicion[5] == posicion[9])

		return 1;
	else if (posicion[3] == posicion[5] and posicion[5] == posicion[7])

		return 1;
	else if (posicion[1] != '1' and posicion[2] != '2' and posicion[3] != '3'
                    and posicion[4] != '4' and posicion[5] != '5' and posicion[6] != '6'
                  and posicion[7] != '7' and posicion[8] != '8' and posicion[9] != '9')

		return 0;
	else
		return -1;
}


int main()
{
	int jugador = 1;
    int eleccion;
    int i;
	char marca;
	do
	{
		tablero();

        jugador=(jugador%2) ? 1 : 2;

		cout << "Jugador " <<jugador<< ", Ingrese un numero:  ";
		cin >> eleccion;

		marca=(jugador == 1) ? 'X' : 'O';

		if (eleccion == 1 and posicion[1] == '1')
			posicion[1] = marca;

		else if (eleccion == 2 and posicion[2] == '2')
			posicion[2] = marca;

		else if (eleccion == 3 and posicion[3] == '3')
			posicion[3] = marca;

		else if (eleccion == 4 and posicion[4] == '4')
			posicion[4] = marca;

		else if (eleccion == 5 and posicion[5] == '5')
			posicion[5] = marca;

		else if (eleccion == 6 and posicion[6] == '6')
			posicion[6] = marca;

		else if (eleccion == 7 and posicion[7] == '7')
			posicion[7] = marca;

		else if (eleccion == 8 and posicion[8] == '8')
			posicion[8] = marca;

		else if (eleccion == 9 and posicion[9] == '9')
			posicion[9] = marca;

		else
		{
			cout<<"Movimiento invalido";
			jugador--;
		}

		i=combinaciones();

		jugador++;
	}while(i==-1);

	tablero();

	if(i==1)
		cout<<"Jugador "<<--jugador<<" Gano ";
	else
		cout<<"Juego Empatado";

	return 0;
}
