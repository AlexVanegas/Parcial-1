/*
programa: Ejercicio 3 - Parcial 1
fecha: 11/09/2018
Programador: Alex Fernando Vanegas Henao
*/
#include <iostream>
#include <stdio.h>
#include <string.h>

int main()
{
	int X;
	char Nombre1 [100];
	char Nombre2[100];
	
	printf("ingrese el primer nombre\n");
	gets(Nombre1);
	printf("ingrese el segundo nombre\n");
	gets(Nombre2);
	
	
	X = strcoll (Nombre1, Nombre2);
	if (X<= -1)
	{
		printf("%s ", Nombre2);
		printf("%s ", Nombre1);
	}
	if (X>= 1)
	{
		printf("%s ", Nombre1);
		printf("%s ", Nombre2);
	}
	return 0;
}
