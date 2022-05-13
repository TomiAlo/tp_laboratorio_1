/*s
 ============================================================================
 Name        : TP2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "arrayPassengers.h"

#define PASAJEROS 3

int main(void) {
	setbuf(stdout, NULL);

	int validacionInit;
	int validacionAgregado;
	int validacionBusca;
	int validacionRemover;
	int validacionOrdenar;
	int validacionOrdenarDos;
	int opcionOrdenar;
	int opcionInformar;
	int opcionModificar;
	int opcionMostrarUno;
	int opcionMostrar;
	int validacionModificar;
	int id;
	int opcion;
	int respuesta;
	int i = 0;

	Passenger arrayPasajeros[PASAJEROS];

	validacionInit = initPassengers(arrayPasajeros, PASAJEROS);

	if(validacionInit==0){
		do{
			respuesta=utn_getNumero(&opcion, "\n1-Alta. \n2-Modificar. \n3-Baja. \n4-Informar. \n5-Carga forzada. \n6-Salir. \n",0,6);
			if(respuesta == 0){
				switch(opcion){
				case 1:
						validacionAgregado=addPassenger(arrayPasajeros, PASAJEROS, arrayPasajeros[i].id, arrayPasajeros[i].name,arrayPasajeros[i].lastName,
							arrayPasajeros[i].price, arrayPasajeros[i].typePassenger, arrayPasajeros[i].flycode, arrayPasajeros[i].statusFlight);
						i++;
					break;

				case 2:
						utn_getNumero(&id,"Que id quiere modificar: ", 0, PASAJEROS);
						validacionBusca=findPassengerById(arrayPasajeros, PASAJEROS, id);
						if(validacionBusca!=-1){
							utn_getNumero(&opcionModificar,"\n1-Nombre. \n2-Apellido. \n3-Precio. \n4-Tipo de pasajero. \n5-Codigo de vuelo \n", 0, 5);
							validacionModificar=ModifyPassenger(arrayPasajeros, PASAJEROS, opcionModificar, id);
						}
						break;


				case 3:
						utn_getNumero(&id,"Que pasajeros quiere eliminar: ", 0, PASAJEROS);
						validacionRemover=removePassenger(arrayPasajeros, PASAJEROS, id);
						break;

				case 4:
						utn_getNumero(&opcionInformar,"\n1-Listado ordenado alfabeticamente. \n2-Total, promedio y pasajeros que superan el promedio. \n3-Listado de pasajeros por codigo de vuelo y estado activo. \n", 0, 3);
						switch(opcionInformar){
						case 1:
							utn_getNumero(&opcionMostrar, "0(ascendete) o 1(descendente): ", 0, 1);
							validacionOrdenar=sortPassengers(arrayPasajeros, PASAJEROS, opcionMostrar);
							break;

						case 2:
							validacionOrdenar=calculateTotalAveragePassenger(arrayPasajeros, PASAJEROS);
							break;

						case 3:
							utn_getNumero(&opcionOrdenar,"0(ascendete) o 1(descendente): ", 0, 1);
							validacionOrdenarDos=sortPassengersByCode(arrayPasajeros, PASAJEROS, opcionOrdenar);
							break;
						}
						break;

				case 5:
						altaForzada(arrayPasajeros, PASAJEROS, i);
						break;
				}
			}
		}while(opcion != 6);
	}

	return EXIT_SUCCESS;
}
