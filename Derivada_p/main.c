#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, *px, *dpx, n;
    printf("Introducir grado del polinomio:\n");
    scanf("%d",&n);
    px=(int*)malloc(n*sizeof(int));
    dpx=(int*)malloc((n-1)*sizeof(int));
    for(i=0;i<=n;i++)
    {
        printf("Coeficiente de X^%d\n", i);
        scanf("%d",&px[i]);
    }

    for(i=1;i<=n;i++)
    {
        dpx[i-1]=px[i]*i;
    }

    for(i=0;i<=n;i++)
    {
        if(i==0)
            printf("%d", px[i]);
        else
            printf(" + %dX^%d", px[i], i);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        if(i==0)
            printf("%d", dpx[i]);
        else
            printf(" + %dX^%d", dpx[i], i);
    }


    return 0;
}
