#include <stdio.h>
#include <stdlib.h>

void imprimir(int **a,int c,int d);
int multiplicacion(int **a,int **b, int c);
void traspuesta(int **a, int c, int d);
int main()
{
    int i,j,**m1, **m2, m,n;
    printf("\nIntroducir numero de renglones: ");
    scanf("%d",&n);
    printf("Introducir numero de columnas: ");
    scanf("%d",&m);
    m1=(int**)malloc(sizeof(int*)*n);
    m2=(int**)malloc(sizeof(int*)*n);
    for(i=0;i<n;i++)
    {
        m1[i]=(int*)calloc(sizeof(int),m);
        m2[i]=(int*)calloc(sizeof(int),m);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Introducir valor de  m1 [%d][%d]: ",i+1,j+1);
            scanf("%d",&m1[i][j]);
            printf("Introducir valor de m2 [%d][%d]: ",i+1,j+1);
            scanf("%d",&m2[i][j]);
        }
    }
    printf("Matriz 1: \n");
    imprimir(m1, m, n);
    printf("Matriz 2: \n");
    imprimir(m2, m, n);

    if(m==n)
    {
        printf("\nProducto matricial de M1 por M2: \n");
        imprimir(multiplicacion(m1,m2,m),m,m);
    }
    else
    {
        printf("\nTraspuesta de M1: \n");
        traspuesta(m1,m,n);
        printf("\nTraspuesta de M2: \n");
        traspuesta(m2,m,n);
    }

    return 0;
}

void imprimir(int **a,int c,int d)
{
    int i,j;
    for(i=0;i<d;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("  %d  ",a[i][j]);
        }
        printf("\n");
    }
}

int multiplicacion(int **a, int **b, int c)
{
    int i, j, k , acum=0;
    int **arr;
    arr= (int**)malloc(sizeof(int*)*c);
    for(i=0;i<c;i++)
        arr[i]=(int*)calloc(sizeof(int),c);
    for(k=0;k<c;k++)
    {
        for(i=0;i<c;i++)
        {
            for(j=0;j<c;j++)
            {
                acum+=a[k][j]*b[j][i];
            }
            arr[k][i]=acum;
            acum=0;
        }
    }
    return arr;
}

void traspuesta(int **a, int c, int d)
{
    int i,j;
    for(j=0;j<c;j++)
    {
        for(i=0;i<d;i++)
        {
            printf("  %d  ",a[i][j]);
        }
        printf("\n");
    }
}


