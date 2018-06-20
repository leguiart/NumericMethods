#include<stdio.h>

void main(){
	int tamanio=5;
	int arreglo[tamanio];
	int i;

	printf("\nEJEMPLO ARREGLOS\n");
		
	for (i=0;i<tamanio;i++)
	{
		printf("\nIntroduce un numero, para almacenarlo en la posicion %d : ",i);
		scanf("%d",&arreglo[i]);
	}
	printf("\nEl arreglo ahora contiene: \n");
	for (i=0;i<tamanio;i++)
        {
                printf("\narreglo[%d]=%d",i,arreglo[i]);
        }
	printf("\n\nAdios...!!!\n");
}