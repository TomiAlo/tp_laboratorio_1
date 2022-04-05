/*

TOMAS ALONSO TP_01

ENUNCIADO:

Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas
para ofrecerlos a sus clientes.
Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.
Para ello el programa iniciará y contará con un menú de opciones:

1. Ingresar Kilómetros: ( km=x)

2. Ingresar Precio de Vuelos: (Aerolíneas=y, Latam=z)
- Precio vuelo Aerolíneas:
- Precio vuelo Latam:

3. Calcular todos los costos:
a) Tarjeta de débito (descuento 10%)
b) Tarjeta de crédito (interés 25%)
c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
d) Mostrar precio por km (precio unitario)
e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)

4. Informar Resultados
“Latam:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
Aerolíneas:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
La diferencia de precio es : r “

5. Carga forzada de datos

6. Salir

*/

#include <stdio.h>
#include <stdlib.h>

#include "Header.h"

int main(void) {
setbuf(stdout, NULL);

int opcion;

printf("1)Calcular costos "
"\n2)Carga forzada de datos"
"\n3)salir"
"\n\nQue opcion desea realizar: ");
scanf("%d",&opcion);

if(opcion==1)
{
int kilometros;

printf("ingrese la cantidad de kilometros: ");
scanf("%d",&kilometros);

while(kilometros<=0)
{
printf("Error, numero no valido ");
scanf("%d",&kilometros);
}

calculo(kilometros);

}


else if(opcion==2)
{
	cargaForzada();
}


else if(opcion==3)
{
	return 0;
}


else
{
	printf("error, numero no valido");
}

return 0;
}
