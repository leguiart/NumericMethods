#include<stdio.h>

struct alumno {
	char nombre[25];
	int edad;
};

int  main() {
	int i=0;
	int tamanio=5;
	struct alumno alums[tamanio];
	
	printf("\nEJEMPLO DE ARREGLOS DE ESTRUCTURAS\n");
	for (i=0;i<tamanio;i++) {
		printf("\nIntroduce el nombre del alumno[%d]: ",i);
		scanf("%s",&alums[i].nombre);
		printf("\nIntroduce la edad del alumno [%d]: ",i);
		scanf("%d",&alums[i].edad);
	}
	
	printf("\nLos datos de los alumnos creados son:\n");
	
	for (i=0;i<tamanio;i++) {
		printf("\nDatos del alumno[%d]\n",i);
		printf("\nNombre: %s \nEdad: %d\n",alums[i].nombre,alums[i].edad);
	}
}