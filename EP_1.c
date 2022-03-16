//Ejercicio 1 almacen descuento

//librerias
#include <stdio.h>

//prototipos
float calcularDescuento(float *cantidad);
void leerMonto(float *);


int main (){
	float cantidad,monto,descuento,valor;
	leerMonto(&monto);
	rangoMonto();
	return 0;
}

//leer monto

void leerMonto(float *monto){
	printf("Introduzca el monto\n");
	scanf("%f",monto);
}

//cantidad a pagar


