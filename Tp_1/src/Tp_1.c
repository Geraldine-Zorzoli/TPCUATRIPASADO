/*
 ============================================================================
 Name        : Tp_1.c
 Author      : Geraldine
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 ============================================================================
 Name        : Tp.c
 Author      : Geraldine
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "MiLibreria.h"
#define BTC_value 4505697.13

int main(void){

	setbuf(stdout,NULL);
	int kilometrosIngresados;
	int precioLatamIngresado;
	int precioAerolineasIngresado;
	float precioUnitarioKmLatam;
	float precioUnitarioKmAerolineas;
	float precioLatamTb;
	float precioAerolineastb;
	float btcCalculadoLatam;
	float btcCalculadoAerolineas;
	float precioLatamTc;
	float precioAerolineasTc;
	float satoshiCalculadoAerolineas;
	float satoshiCalculadoLatam;
	int opcion;
	float diferencia;


	do{
		getInt("\n Bienvenido. Ingrese una opcion\n 1. Ingresar Kilómetros:\n 2. Ingresar Precio de Vuelos:\n 3. Calcular todos los costos: \n 4. Informar Resultado\n 5. Carga forzada de datos \n 6. Salir",6,0,100000000, "Error,dato ingresado no valido",&opcion);

			switch(opcion){
			case 1:
			{
				getInt("\n Ingrese cantidad de km \n",3,1,10000000,"Error,dato ingresado no valido",&kilometrosIngresados);
				break;
			}
			case 2:
			{

				getInt("\n Precio vuelo Latam:",3,1,10000000,"Error,dato ingresado no valido",&precioLatamIngresado);
				getInt("\nPrecio vuelo Aerolíneas:",3,1,10000000,"Error,dato ingresado no valido",&precioAerolineasIngresado);
				break;
			}

			case 3:
			{

				CalcularCostos(kilometrosIngresados,precioLatamIngresado,precioAerolineasIngresado, &precioUnitarioKmLatam, &precioUnitarioKmAerolineas,&precioLatamTb,&precioAerolineastb,&btcCalculadoLatam,&btcCalculadoAerolineas,&satoshiCalculadoAerolineas,&satoshiCalculadoLatam,&precioLatamTc,&precioAerolineasTc,&diferencia);
				break;
			}

			case 4:
			{
				MostrarResultados(kilometrosIngresados,precioLatamIngresado,precioAerolineasIngresado, &precioUnitarioKmLatam, &precioUnitarioKmAerolineas,&precioLatamTb,&precioAerolineastb,&btcCalculadoLatam,&satoshiCalculadoLatam,&btcCalculadoAerolineas,&satoshiCalculadoAerolineas,&precioLatamTc,&precioAerolineasTc,&diferencia);

				if(precioAerolineasIngresado<precioLatamIngresado)//Para que no de negativo
				{
					diferencia=precioLatamIngresado-precioAerolineasIngresado;
				}
				else
				{
					diferencia=precioAerolineasIngresado-precioLatamIngresado;
				}

				break;
			}
			case 5:
			{
				kilometrosIngresados=7090;
				precioLatamIngresado=159339;
				precioAerolineasIngresado=162965;

				CalcularCostos(kilometrosIngresados,precioLatamIngresado,precioAerolineasIngresado, &precioUnitarioKmLatam, &precioUnitarioKmAerolineas,&precioLatamTb,&precioAerolineastb,&btcCalculadoLatam,&btcCalculadoAerolineas,&satoshiCalculadoLatam,&satoshiCalculadoAerolineas,&precioLatamTc,&precioAerolineasTc,&diferencia);
				MostrarResultados(kilometrosIngresados,precioLatamIngresado,precioAerolineasIngresado, &precioUnitarioKmLatam, &precioUnitarioKmAerolineas,&precioLatamTb,&precioAerolineastb,&btcCalculadoLatam,&btcCalculadoAerolineas,&satoshiCalculadoLatam,&precioLatamTc,&satoshiCalculadoAerolineas,&precioAerolineasTc,&diferencia);
				break;
			}

		}
	}while(opcion!=6);
		{
			return 0;
		}

}




