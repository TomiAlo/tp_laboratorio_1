/*

TOMAS ALONSO TP_01


*/

#include <stdio.h>
#include <stdlib.h>

#include "Header.h"

int main(void) {
setbuf(stdout, NULL);

int opcion;

printf("Que opcion desea realizar:  "
"\n\n1)Calcular costos"
"\n2)Carga forzada de datos"
"\n3)salir\n");
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
