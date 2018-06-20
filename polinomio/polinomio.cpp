#include <stdio.h>
#include <stdlib.h>
int main(){
	/*Declaracion de variables*/
	int grado=0,i=0;
	float *px,*dpx;
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
	printf("Derivada");
for(i=1;i<=grado;i++){
		printf(" %f X^%i ",dpx[i],i-1);	
	}
	
free(px);
free(dpx);
 return 0;	
}
