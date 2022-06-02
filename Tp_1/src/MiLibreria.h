/*
 * MiLibreria.h
 *
 *  Created on: 14 abr. 2022
 *      Author: Geraldine
 */

#ifndef MILIBRERIA_H_
#define MILIBRERIA_H_
#include <stdio.h>
#include <stdlib.h>

void CalcularCostos(float kilometrosIngresados, float precioLatamIngresado, float precioAerolineasIngresado, float *pprecioUnitarioKmLatam,float *pprecioUnitarioKmAerolineas , float *pprecioLatamTb , float *pprecioAerolineastb ,float  *pbtcCalculadoLatam, float *pbtcCalculadoAerolineas ,float *pSatoshiCalculadoAerolineas, float* pSatoshiCalculadoAerolineasLatam, float *pprecioLatamTc , float *pprecioAerolineasTc , float *pdiferencia);

//void CalcularCostos(float kilometrosIngresados, float precioLatamIngresado, float precioAerolineasIngresado, float *pprecioUnitarioKmLatam,float *pprecioUnitarioKmAerolineas , float *pprecioLatamTb , float *pprecioAerolineastb ,float *pbtcCalculadoLatam, float *pbtcCalculadoAerolineas , float *pprecioLatamTc , float *pprecioAerolineasTc , float *pdiferencia);
void MostrarResultados(float kilometrosIngresados, float precioLatamIngresado, float precioAerolineasIngresado, float *pprecioUnitarioKmLatam,float *pprecioUnitarioKmAerolineas , float *pprecioLatamTb , float *pprecioAerolineastb ,float  *pbtcCalculadoLatam,float *pSatoshiCalculadoLatam, float *pbtcCalculadoAerolineas , float *pSatoshiCalculadoAerolineas,float *pprecioLatamTc , float *pprecioAerolineasTc , float *pdiferencia);

int getInt(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[], int *pNumeroIngresado);

//void MostrarResultados(float kilometrosIngresados, float precioLatamIngresado, float precioAerolineasIngresado, float *pprecioUnitarioKmLatam,float *pprecioUnitarioKmAerolineas , float *pprecioLatamTb , float *pprecioAerolineastb ,float  *pbtcCalculadoLatam, float *pbtcCalculadoAerolineas , float *pprecioLatamTc , float *pprecioAerolineasTc , float *pdiferencia);
//comentado por el momento hastas ver que este todo ok

#endif /* MILIBRERIA_H_ */
