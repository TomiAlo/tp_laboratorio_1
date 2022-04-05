/*

TOMAS ALONSO TP_01

ENUNCIADO:

Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerol�neas Argentinas
para ofrecerlos a sus clientes.
Se deber� ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicaci�n es mostrar las diferentes opciones de pagos a sus clientes.
Para ello el programa iniciar� y contar� con un men� de opciones:

1. Ingresar Kil�metros: ( km=x)

2. Ingresar Precio de Vuelos: (Aerol�neas=y, Latam=z)
- Precio vuelo Aerol�neas:
- Precio vuelo Latam:

3. Calcular todos los costos:
a) Tarjeta de d�bito (descuento 10%)
b) Tarjeta de cr�dito (inter�s 25%)
c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
d) Mostrar precio por km (precio unitario)
e) Mostrar diferencia de precio ingresada (Latam - Aerol�neas)

4. Informar Resultados
�Latam:
a) Precio con tarjeta de d�bito: r
b) Precio con tarjeta de cr�dito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
Aerol�neas:
a) Precio con tarjeta de d�bito: r
b) Precio con tarjeta de cr�dito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
La diferencia de precio es : r �

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
