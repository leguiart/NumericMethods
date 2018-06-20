#include<stdio.h>

struct datos {
	char nombre[25];
	char contra[25];
};

void main() {
	struct datos usuario;
	
	printf("\nEJEMPLO DE ESTRUCTURAS\n");
	printf("\nIntroduce el nombre del usuario: ");
	scanf("%s",usuario.nombre);
	printf("\nIntroduce la contrasenia del usuario [%s]: ",usuario.nombre);
	scanf("%s",usuario.contra);
	printf("\nLos datos del usuario creado son:\n");
	printf("\nNombre: %s \nPassword: %s\n",usuario.nombre,usuario.contra);
	printf("\nUsuario creado...!!\n");
}