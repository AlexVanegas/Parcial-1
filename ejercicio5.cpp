/*
programa: Ejercicio 5 - Parcial 1
fecha: 11/09/2018
Programador: Alex Fernando Vanegas Henao
*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>


void funpot(int A, int B)
{
	
	long Resultado = 1;
	for (int i = 1; i <= B; i++)
	{
		Resultado = A;
	}
	printf("el resultado es: %d\n", Resultado);
}

int main()
{
	int Num, Poten;
	printf("ingrese un numero de su gusto\n");
	scanf ("%d", &Num);
	printf("a que potencia le gustaria elevar el numero?\n ");
	scanf ("%d", &Poten);
	funpot(Num, Poten);
	
	
	return 0;
}
