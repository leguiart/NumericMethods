#include<stdio.h>
void main(){
	int tam=3;
	int M[tam][tam];
	int i,j;
	
	printf("\nEJEMPLO DE MATRICES\n");
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			printf("\nDame el elemento %d,%d: ",i,j);
			scanf("%d",&M[i][j]);
		}
	}

	printf("\n");
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++)
			printf("%d\t",M[i][j]);
			printf("\n");
		}
}