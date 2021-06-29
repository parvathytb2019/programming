#include<stdio.h>
void main()
{
	float i=1,j=1,factorial=1,sum=0;
	while(i<=7)
	{
		for(j=1;j<=i;j++)
		{
			factorial=factorial*j;
		}
		sum=sum+(1/factorial);
		i=i+1;
	}
	printf("sum of the series=%f",sum);
}
