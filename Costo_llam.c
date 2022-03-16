//practica costo llamada

#include<stdio.h>

// prototipos
void leeDatos(int *, float*);
void costoLlamada(int, float, float *);
float calcularCosto(float, float);
void mostrar(float);

//main
void main( ){
   int CLAVE;
   float COSTO, NMIN;

   leeDatos(&CLAVE,&NMIN);
   costoLlamada(CLAVE, NMIN, &COSTO);
   mostrar(COSTO);
}

//leer datos
void leeDatos( int * CLAVE, float *NMIN){
   printf("Introduzca la clave \n");
   scanf("%d", CLAVE);
   printf("Introduzca el numero de minutos \n");
   scanf("%f", NMIN);
}

//costo llamada
void costoLlamada(int CLAVE, float  NMIN, float * COSTO){
  switch(CLAVE){
       case 12:  *COSTO =  
       	calcularCosto(NMIN,2.2);
			  break;
       case 18:  *COSTO = 
       	calcularCosto(NMIN,4.5);
			  break;
       case 19:  *COSTO = 
		calcularCosto(NMIN,3.5);
			  break;
       case 23:
       case 25:  *COSTO = 
       	calcularCosto(NMIN,6);
			  break;
    }
}

//calcular costo
float calcularCosto(float NMIN, float factor){
	float costo = NMIN*factor;	
	return costo;
}

//mostrar
void mostrar( float COSTO){
    printf("El costo total a pagar es: %.2f\n", COSTO);
}

