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

int main(void) {

	setbuf(stdout,NULL);
	int kilometrosIngresados;
	int precioLatamIngresado;
	int precioAerolineasIngresado;
	float precioUnitarioKmLatam;
	float precioUnitarioKmAerolineas;
	float precioLatamTb;
	float precioAerolineastb;
	float btc;
	float btcCalculadoLatam;
	float btcCalculadoAerolineas;
	float precioLatamTc;
	float precioAerolineasTc;
	int opcion;
	float diferencia;
	//int retornoFuncion;


	//Get Int de menu

	do{
		/*retornoFuncion =*/ getInt("\n Bienvenido. Ingrese una opcion\n 1. Ingresar Kilómetros:\n 2. Ingresar Precio de Vuelos:\n 3. Calcular todos los costos: \n 4. Informar Resultado\n 5. Carga forzada de datos \n 6. Salir",6,0,100000000, "Error,dato ingresado no valido",&opcion);
					/*if (retornoFuncion == -1)
					{
					printf("Datos Incorrectos");
					}
					else
					{
					printf("Datos Ingresados correctamente");
					}*/



			switch(opcion){
			case 1:
			{
				getInt("\n Ingrese cantidad de km",3,1,10000000,"Error,dato ingresado no valido",&kilometrosIngresados);
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
				printf("\n a) Tarjeta de débito \n b) Tarjeta de crédito  \n c) Bitcoin  \n d) Mostrar precio por km  \n e) Mostrar diferencia de precio ingresada");
				//calculos Precios Unitarios
				precioUnitarioKmLatam= (float)precioLatamIngresado/kilometrosIngresados;
				precioUnitarioKmAerolineas= (float)precioAerolineasIngresado/kilometrosIngresados;
				//precio con tarjeta debito -10 descuento
				precioLatamTb=precioLatamIngresado*0.90; //para calcular el 10%
				precioAerolineastb=precioAerolineasIngresado*0.90; //para calcular el 10%

				//valor btc
				btc=4505697.13;
				btcCalculadoLatam= btc*precioLatamIngresado;
				btcCalculadoAerolineas=btc*precioAerolineasIngresado;

				// tc precio +25 interes
				precioLatamTc=precioLatamIngresado*1.25;
				precioAerolineasTc=precioAerolineasIngresado*1.25;

				//diferencia de precio (deberia tener una bandera)
				diferencia=precioAerolineasIngresado-precioLatamIngresado;


				break;
			}


			case 5:
			{

			    //se movio calculos a 3
		if(precioAerolineasIngresado<precioLatamIngresado)//para que si x s mayor que y no de negativo
		{
		    diferencia=precioLatamIngresado-precioAerolineasIngresado;
		}
		else
		{
		    diferencia=precioAerolineasIngresado-precioLatamIngresado;
		}
				printf("\n Latam");
				printf("\n a) Precio con tarjeta de débito: %.2f",precioAerolineastb);
				printf("\n b) Precio con tarjeta de crédito:%.2f",precioLatamTc);
				printf("\n c) Precio pagando con bitcoin : %.2f",btcCalculadoLatam);
				printf("\n d) Precio unitario:: %.2f",precioUnitarioKmLatam);
				printf("\n Aerolíneas:");
				printf("\n a) Precio con tarjeta de débito:%.2f",precioLatamTb);
				printf("\n b) Precio con tarjeta de crédito:%.2f",precioAerolineasTc);
				printf("\n c) Precio pagando con bitcoin :%.2f",btcCalculadoAerolineas);
				printf("\n d) Precio unitario:%.2f",precioUnitarioKmAerolineas);
				printf("\n La diferencia de precio es :%.2f ",diferencia);



				break;
			}//cierre case 5


		}//cierre switch
	}while(opcion!=6);
		{
			return 0;
		}

	//se subio retorno a case 3


}



