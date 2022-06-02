/*
 * MiLibreria.c
 *
 *  Created on: 14 abr. 2022
 *      Author: Geraldine
 */
#include "MiLibreria.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BTC 3828461.03
#define SATOSHI_PRICE 26.136873357839285

//SATOSHI ES 0.00000001 BTC



void CalcularCostos(float kilometrosIngresados, float precioLatamIngresado, float precioAerolineasIngresado, float *pprecioUnitarioKmLatam,float *pprecioUnitarioKmAerolineas , float *pprecioLatamTb , float *pprecioAerolineastb ,float  *pbtcCalculadoLatam, float *pbtcCalculadoAerolineas ,float *pSatoshiCalculadoAerolineas, float* pSatoshiCalculadoAerolineasLatam, float *pprecioLatamTc , float *pprecioAerolineasTc , float *pdiferencia)
{


		printf("\n *Costos calculados* \n");
	  	 //PRECIOS UNITARIOS
		*pprecioUnitarioKmLatam= (float)precioLatamIngresado/kilometrosIngresados;
		*pprecioUnitarioKmAerolineas= (float)precioAerolineasIngresado/kilometrosIngresados;
		//PRECIO CON TARJETA DE DEBITO +10%
		*pprecioLatamTb=precioLatamIngresado*0.90; //para calcular el 10%
		*pprecioAerolineastb=precioAerolineasIngresado*0.90; //para calcular el 10%
		//PRECIO EN BTC
		*pbtcCalculadoLatam= BTC/precioLatamIngresado;
		*pbtcCalculadoAerolineas=BTC/precioAerolineasIngresado;

		//PRECIO SATOSHI
		*pSatoshiCalculadoAerolineas=SATOSHI_PRICE*precioAerolineasIngresado;
		*pSatoshiCalculadoAerolineasLatam=SATOSHI_PRICE*precioLatamIngresado;

		//PRECIO TARJETA DE CREDITO 25% INTERESES
		*pprecioLatamTc=precioLatamIngresado*1.25;
		*pprecioAerolineasTc=precioAerolineasIngresado*1.25;

		//DIFERENCIA DE PRECIO
		*pdiferencia=precioAerolineasIngresado-precioLatamIngresado;
}

void MostrarResultados(float kilometrosIngresados, float precioLatamIngresado, float precioAerolineasIngresado, float *pprecioUnitarioKmLatam,float *pprecioUnitarioKmAerolineas , float *pprecioLatamTb , float *pprecioAerolineastb ,float  *pbtcCalculadoLatam,float *pSatoshiCalculadoLatam, float *pbtcCalculadoAerolineas , float *pSatoshiCalculadoAerolineas,float *pprecioLatamTc , float *pprecioAerolineasTc , float *pdiferencia)
{
	printf("\n 1. Ingresar Kilómetros:%.2f",kilometrosIngresados);
	printf("\n 2. Ingresar Precio de Vuelos:");
	printf("\n -Precio vuelo Aerolíneas:%.2f",precioAerolineasIngresado);
	printf("\n -Precio vuelo Latam:%.2f \n",precioLatamIngresado);
	printf(" \n ** Latam: \n");
	printf("\n a) Precio con tarjeta de débito: %.2f",*pprecioAerolineastb);
	printf("\n b) Precio con tarjeta de crédito:%.2f",*pprecioLatamTc);
	printf("\n c) Precio pagando con bitcoin : %.2f",*pbtcCalculadoLatam);
	printf("\n c) Precio pagando con Satoshi :%.2f",*pSatoshiCalculadoLatam);
	printf("\n d) Precio unitario:: %.2f \n",*pprecioUnitarioKmLatam);
	printf("\n ** Aerolíneas: \n");
	printf("\n a) Precio con tarjeta de débito:%.2f",*pprecioLatamTb);
	printf("\n b) Precio con tarjeta de crédito:%.2f",*pprecioAerolineasTc);
	printf("\n c) Precio pagando con bitcoin :%.2f",*pbtcCalculadoAerolineas);
	printf("\n c) Precio pagando con Satoshi :%.2f",*pSatoshiCalculadoAerolineas);
	printf("\n d) Precio unitario:%.2f",*pprecioUnitarioKmAerolineas);
	printf("\n La diferencia de precio es :%.2f \n \n",*pdiferencia);
}


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
}




