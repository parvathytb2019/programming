#include<stdio.h>
void main()
{
	int limit,i,j;
	printf("enter the limit:");
	scanf("%d",&limit);
	for(i=limit;i>=1;i--)
	{
		for(j=1;j<=i;j++)
			printf("* ");
		printf("\n");
	}
}
