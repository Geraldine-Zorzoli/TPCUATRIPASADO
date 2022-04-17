/*
 * MiLibreria.c
 *
 *  Created on: 14 abr. 2022
 *      Author: Geraldine
 */
#include "MiLibreria.h"
#include <stdio.h>
#include <stdlib.h>






int getInt(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[], int *pNumeroIngresado)

{
	int retorno=-1;
	int auxiliarInt;
	int retornoScanf;
	if (mensaje!= NULL && minimo<maximo && mensajeError != NULL && pNumeroIngresado != NULL && reintentos >0 )
	{
		printf("%s", mensaje);
		retornoScanf=scanf("%d",&auxiliarInt);
	}
	do{
		//printf("\n Quedan : %d reintentos \n",reintentos);
		if (retornoScanf != 1 || auxiliarInt>maximo  || auxiliarInt<minimo)
		{
			printf("%s", mensajeError);
			retornoScanf = scanf("%d",&auxiliarInt);
			reintentos--;
		}
		else{
			reintentos = 0;
			*pNumeroIngresado= auxiliarInt;
			retorno =  0;
			}

	}while (reintentos>0);


	return retorno;
}//cierre int
