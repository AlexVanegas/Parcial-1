/*
programa:  Ejercicio 1 - Primer Parcial
fecha: 11/09/2018
Programador: ALex Fernando Vanegas Henao
*/

#include <iostream>
#include <stdio.h>

int main() 
{
	//especificacion de los datos
	char x;
	int porcent;
	int P_realizadas, P_acertadas;
	//funcion principal	
	do
	{
		printf ("ingrese la cantidad de preguntas acertadas\n");
		scanf("%d", &P_realizadas);
		printf ("ingrese la cantidad de preguntas realizadas\n");
		scanf("%d", &P_acertadas);
		
		porcent = P_realizadas/P_acertadas;
		
		if (porcent >= 0.8)
		{
			printf ("usted obtuvo el puntaje maximo");
		}
		
		if (porcent >= 0.65 && porcent < 0.8)
		{
			printf ("usted obtuvo el puntaje medio");
		}
		
		if (porcent >= 0.4 && porcent < 0.65)
		{
			printf ("usted obtuvo un puntaje regular");
		}
		if (porcent < 0.4)
		{
			printf ("Usted esta por debajo del puntaje regular");
		}
		printf ("\ndesea ingresar mas preguntas? (s/n): \n");
		fflush (stdin);
		scanf("%c", &x);
	}
	while (x != 'x');
	return 0;
}

