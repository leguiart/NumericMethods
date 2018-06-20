#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float valuarpx(float *polinomio, float x, int grado);
int main(){
	/*Declaracion de variables*/
	int grado=0,i=0;
	float *px,*dpx,xm;
	/*lectura de grado*/
	printf("GRADO DEL POLINOMIO");
	scanf("%d",&grado);
	px=(float *)malloc(sizeof(float)*grado);
	dpx=(float *)malloc(sizeof(float)*grado);
	
	/*lectura del polinomio*/
	for(i=0;i<=grado;i++){
		printf("X^%i: ",i);
		scanf("%f",&px[i]);	
	}
	/*derivacion*/
	for(i=1;i<=grado;i++){
		
		dpx[i-1]=px[i]*i;
	}
	/*impresion*/
printf("Polinomio");
for(i=0;i<=grado;i++){
		printf(" %f X^%i ",px[i],i);	
	}
	printf("\nDerivada");
for(i=1;i<=grado;i++){
		printf(" %f X^%i ",dpx[i-1],i-1);	
	}

printf("\n ingresa el numero para valuar la funcion\t");
scanf("%f",&xm);

	printf("px valuado en %f\t", xm);
	printf("%f\n", valuarpx(px,xm,grado));
	printf("dpx valuado en %f\t", xm);
	printf("%f\n", valuarpx(dpx,xm,grado));
free(px);
free(dpx);
 return 0;	
}


float valuarpx(float *polinomio, float x, int grado)
{
	int i;
	float valor;
	
	for(i=0;i<=grado;i++){
	
	valor+=(polinomio[i])*pow(x,i);
	
		
		}
	return valor;
		
}
