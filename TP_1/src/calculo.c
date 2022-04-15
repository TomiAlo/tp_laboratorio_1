/*
 * calcular.c
 *
 *  Created on: 4 abr. 2022
 *      Author: Usuario
 */

//CODIGO DE LA FUNCION

#include <stdio.h>
#include <stdlib.h>

/**
 * brief: la funcion pide los precios y realiza los calculos
 * correspondientes
 * @param kilometros
 * return: nada(void)
 */

void calculo(int kilometros)
{
float precioAerolineas;
float precioLatam;

printf("ingrese el precio en Aerolineas: ");
scanf("%f",&precioAerolineas);

while(precioAerolineas<=0)
{
	printf("error, ingrese el precio en Aerolineas: ");
	scanf("%f",&precioAerolineas);
}


printf("ingrese el precio en Latam: ");
scanf("%f",&precioLatam);

while(precioLatam<=0)
{
	printf("error, ingrese el precio en Latam: ");
	scanf("%f",&precioLatam);
}
//A: Aerolineas   ||  L: Latam

float precioDebitoA;
precioDebitoA=precioAerolineas-(precioAerolineas*10)/100;

float precioCreditoA;
precioCreditoA=precioAerolineas+(precioAerolineas*25)/100;

float precioBTCA;
precioBTCA=precioAerolineas/4886492.54;

float precioUnitarioA;
precioUnitarioA=precioAerolineas/kilometros;

float precioDebitoL;
precioDebitoL=precioLatam-(precioLatam*10)/100;

float precioCreditoL;
precioCreditoL=precioLatam+(precioLatam*25)/100;

float precioBTCL;
precioBTCL=precioLatam/4886492.54;

float precioUnitarioL;
precioUnitarioL=precioLatam/kilometros;

float diferencia;
diferencia=precioAerolineas-precioLatam;


printf("KMs Ingresados: %d",kilometros);

printf("\n\nAerolíneas: $%.2f"
		"\na) Precio con tarjeta de débito: $%.2f"
		"\nb) Precio con tarjeta de crédito: $%.2f"
		"\nc) Precio pagando con bitcoin : %.4f BTC"
		"\nd) Precio unitario: $%.2f",precioAerolineas,precioDebitoA,precioCreditoA,precioBTCA,precioUnitarioA);

printf("\n\nLatam: $%.2f"
		"\na) Precio con tarjeta de débito: $%.2f"
		"\nb) Precio con tarjeta de crédito: $%.2f"
		"\nc) Precio pagando con bitcoin : %.4f BTC"
		"\nd) Precio unitario: $%.2f",precioLatam,precioDebitoL,precioCreditoL,precioBTCL,precioUnitarioL);

printf("\n\nLa diferencia de precio es : $%.2f",diferencia);


}
