/*
programa: Ejercicio 2 - Parcial 1
fecha: 11/09/2018
Programador: Alex Fernando Vanegas Henao
*/
#include <iostream>
#include <stdio.h>


int main() 
{
	int A, B, par = 0, impar = 0;
	B = 0;
	do
	{
		
		
		
		printf("\ningrese un numero\n");
		scanf ("%d", &A);
		
		if (A %2 ==0)
		{
			par = par + 1;
			printf ("el numero es par");
		}
		else 
		{
			impar = impar + 1;
			printf ("el numero es impar");
		}
		
		B = B + 1;
		
	}while (A != 0);
	printf("\nel numero total de pares que se ingreso fue de: %d\n", par);
	printf("\nel numero total de impares que se ingreso fue de: %d\n", impar);
	return 0;
	
}
