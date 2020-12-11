 
/*

Permita convertir calificaciones numéricas, según la siguiente tabla:
A = 19 o 20, B = 16, 17 o 18, C = 13, 14 o 15, D = 10, 11 o 12, E = 1 hasta el 9. Se asume
que la calificación está comprendida entre 1 y 20.


*/
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
	int calificacion;
	char resultado;
	

	cout << "ingrese calificacion: ";
	cin >> calificacion;
	
	
	resultado = (calificacion == 19 || calificacion == 20) ? 'A' : (calificacion >= 16 && calificacion <= 18) ? 'B' :
		(calificacion >= 13 && calificacion <= 15) ? 'C' : (calificacion >= 10 && calificacion <= 12) ? 'D' :
		'E';




	cout << "LA CALIFICACION ES : " << resultado << endl;
	
	
	_getch();











}