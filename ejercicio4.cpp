/*
programa: Ejercicio 4 - Parcial 1
fecha: 11/09/2018
programador: Alex Fernando Vanegas Henao
*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>


void mult (float Num1, float Num2)
{
	float M;
	M = Num1 * Num2;
	printf ("el resultado es: %.2f\n", M);
}

int main() 
{
	float Num3, Num4;
	printf ("ingrese el primer numero \n", Num3);
	scanf ("%f", &Num3);
	printf ("ingrese el segundo numero \n", Num4);
	scanf ("%f", &Num4);
	
	Mult(Num3, Num4);
	return 0;
}
