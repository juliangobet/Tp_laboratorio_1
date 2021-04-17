/*
 * UtnMenu.c
 *
 *  Created on: 11 abr. 2021
 *      Author: GOBESITO
 */
#include <stdio.h>
#include <stdlib.h>
#include "UtnCalculos.h"
int menu()
{
	float resultadoSuma=0;
	float resultadoResta=0;
	float resultadoMultiplicar=0;
	float resultadoDividir=0;
	double resultadoFactorialA=0;
	double resultadoFactorialB=0;
	int opcionElejida=0;
	int flag1=0;
	int flag2=0;
	float num1;
	float num2;

	do
	{
		printf("Bienvenido, ingrese una opcion: \n"
				"1.Ingresar el primer operando \n"
				"2.Ingresar el segundo operando \n"
				"3.Realizar las operaciones \n"
				"4.Informar resultados \n"
				"5.Salir \n");
		scanf("%d",&opcionElejida);
		if(opcionElejida<1||opcionElejida>5)
		{
			printf("ERROR. Elija una opcion del menu: \n");
			scanf("%d",opcionElejida);
		}
		switch(opcionElejida)
			{
				case 1:

					printf("Ingrese el primer opeador: \n");
					scanf("%f",&num1);
					if(num1<0)
					{
						printf("Ingrese solo numeros positivos. Vuelva a ingresar un numero: \n");
						scanf("%f",&num1);
						flag1++;
					}
					else
					{
						flag1++;
					}
				break;

				case 2:

					if(flag1==0)
					{
						printf("Primero debe de ingresar el primer operando");

					}
						printf("Ingrese el segundo opeador: \n");
						scanf("%f",&num2);
								if(num2<0)
								{
									printf("Ingrese solo numeros positivos. Vuelva a ingresar un numero: \n");
									scanf("%f",&num2);
									flag2++;
								}
								else
								{
								flag2++;
								}

				break;

				case 3:

					if(flag1==0||flag2==0)
					{
						printf("Falta ingresar uno o dos denominadores para poder hacer los calculos \n");
					}
					else
					{

						resultadoSuma=sumar(num1,num2);
						resultadoResta=restar(num1,num2);
						resultadoMultiplicar=multiplicar(num1,num2);
						resultadoDividir=dividir(num1,num2);
						resultadoFactorialA=factorial(num1);
						resultadoFactorialB=factorial(num2);
						printf("Se realizaron todas los calculos con exito.\n");

					}
					break;

				case 4:

					printf("Los resultados son: \n"
							"Primer operador: %f \n"
							"Segundo operador: %f \n"
							"Suma: %.2f \n"
							"Resta: %.2f \n"
							"Multiplicar: %.2f \n"
							"Dividir: %.2f \n"
							"Factorial del primer operador: %.2lf \n"
							"Factorial del segundo operador: %.2lf \n",num1,num2,resultadoSuma,resultadoResta,resultadoMultiplicar,resultadoDividir,resultadoFactorialA,resultadoFactorialB);
					break;

				case 5:

					opcionElejida=10;
					break;

			}
	}
	while(opcionElejida>=1&&opcionElejida<=5);

	return 0;
}

