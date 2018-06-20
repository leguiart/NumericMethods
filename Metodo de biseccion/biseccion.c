#include <stdio.h>
#include <math.h>
float f(float *arr, int grado, float ev);

int main()
{
    float c, d=0, e, a, b, tol=0.1, *pol;
    int it=0, n,  cont=0, i;
    printf("Introducir grado del polinomio:\n");
    scanf("%d", &n);
    pol=(int*)malloc(n*sizeof(int));
    printf("\nIntroducir valor del intervalo correspondiente a 'a':\n");
    scanf("%f",&a);
    printf("\nIntroducir valor del intervalo correspondienta a 'b':\n");
    scanf("%f",&b);
    for(i=0;i<=n;i++)
    {
        printf("Introducir coeficiente de X^%d: \n", i);
        scanf("%f", &pol[i]);
    }
    do
    {
        c=(a+b)/2;
        e=f(pol,n,c);
        if(e==0)
        {
            cont++;
            printf("\nSolucion X%d: %f", cont, c);
            it=0;
            a=c;
            b=c+10;
            if(cont==n)
            {
                break;
            }
        }
        else
        {
            if(e*f(pol,n,a)<0)
            {
                b=c;
            }
            else
            {
                a=c;
            }
            e=f(pol,n,c)-f(pol,n,d);
            if(e<0)
            {
                e*=-1;
            }
        }
        it++;
        d=c;
    }
    while(e>tol || it<25);
    return 0;
}

float f(float *arr, int grado, float ev)
{
    float acum=0;
    int i;
    for(i=0;i<=grado;i++)
    {
        acum+=arr[i]*powf(ev,i);
    }
    if(ev==0)
    {
        return arr[0];
    }
    else
    {
        return acum;
    }
}

