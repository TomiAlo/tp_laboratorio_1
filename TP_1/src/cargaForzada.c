
#include <stdio.h>
#include <stdlib.h>



void cargaForzada(void)
{
int kilometros=7090;
int precioAerolineas=162965;
int precioLatam=159339;

printf("KMs Ingresados: %d"

		"\n\nLatam: $%d"
		"\na) Precio con tarjeta de débito: $143405.1"
		"\nb) Precio con tarjeta de crédito: $199173.75"
		"\nc) Precio pagando con bitcoin : 0.03458 BTC"
		"\nd) Precio unitario: $22.47"
		"\n\nAerolíneas: $%d"
		"\na) Precio con tarjeta de débito: $146668.5"
		"\nb) Precio con tarjeta de crédito: $203706.25"
		"\nc) Precio pagando con bitcoin : 0.03537 BTC"
		"\nd) Precio unitario: $22.98"

		"\n\nLa diferencia de precio es : $3626",kilometros,precioLatam,precioAerolineas);
}
