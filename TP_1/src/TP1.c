/*

TOMAS ALONSO TP_01


*/

#include <stdio.h>
#include <stdlib.h>

#include "Header.h"

int main(void) {
setbuf(stdout, NULL);

int opcion;
int kilometros;

printf("Que opcion desea realizar:  "
"\n\n1)Calcular costos"
"\n2)Carga forzada de datos"
"\n3)salir\n");
scanf("%d",&opcion);

switch(opcion)
{
case 1:
	printf("ingrese la cantidad de kilometros: ");
	scanf("%d",&kilometros);

	while(kilometros<=0)
	{
	printf("Error, numero no valido ");
	scanf("%d",&kilometros);
	}

	calculo(kilometros);

	break;

case 2:
	cargaForzada();
	break;

case 3:
	return 0;
	break;

default:
	printf("error, numero no valido");
	break;
}
}
