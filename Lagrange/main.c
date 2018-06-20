#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double lagrange(double[10],double[10],double,int);

void main(){
		double x[10];
		double fx[10];
		double xint,fxint;
		int N,i;

		printf("\nMetodo de interpolacion de Lagrange\n");
		printf("\nIntroduce el grado del polinomio: ");
		scanf("%d",&N);
		printf("\nIntroduce datos al vector x[]: ");
		for(i=0;i<=N;i++)
		{
			printf("\nx[%d]: ",i);
			scanf("%lf",&x[i]);
		}
		printf("\nIntroduce datos al vector fx[]: ");
		for(i=0;i<=N;i++)
		{
			printf("\nFx[%d]: ",i);
			scanf("%lf",&fx[i]);
		}
		printf("\nIntroduce el valor a interpolar Xi: ");
		scanf("%lf",&xint);

		printf("\nContenido del vector x[] y fx[]: ");
		for(i=0;i<=N;i++)
		{
			printf("\n%lf          %lf",x[i],fx[i]);
		}

		fxint=lagrange(x,fx,xint,N);
		printf("\n\n\tPara Xi= %lf \n\tF(x)= %lf\n\n",xint,fxint);

}

double lagrange(double x[10],double fx[10],double xint, int N)
{
		double fxint=0,l;
		int i=0,j;

		while(i<=N)
		{
			l=1;
			j=0;
			while(j<=N)
			{
				if(i!=j)
				{
					l=l*(xint-x[j])/(x[i]-x[j]);
				}
				j++;
			}
			fxint=fxint+l*fx[i];
			i++;
		}

		return fxint;
}
