/*
 * UtnCalculos.c
 *
 *  Created on: 15 abr. 2021
 *      Author: GOBESITO
 */
#include <stdio.h>
#include <stdlib.h>

float sumar(float numA,float numB)
{
	float resultado=numA+numB;
	return resultado;
}
float restar(float numA,float numB)
{
	float resultado=numA-numB;
	return resultado;
}
float multiplicar(float numA,float numB)
{
	float resultado=numA*numB;
	return resultado;
}
float dividir(float numA,float numB)
{
	float resultado=numA/numB;
	return resultado;
}
double factorial(int numA)
{
	double resultado=1;
	for(int i=numA;i>=1;i--)
	{
		resultado=resultado*i;
	}
	return resultado;
	/*int resultado;
	if(numA==1)
	{
	resultado=1;
	}
	resultado=numA*factorial(numA-1);
	return resultado;
	*/
}
