
#include <stdio.h>
#include <stdlib.h>

/**
 * brief: la funcion carga los datos hardcodeados
 * param: no tiene
 * return: nada
 */

void cargaForzada(void)
{
int kilometros=7090;
float precioAerolineas=162965;
float precioLatam=159339;

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


printf("\nKMs Ingresados: %d",kilometros);

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

