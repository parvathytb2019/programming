#include<stdio.h>
void main()
{
	int limit,i,j;
	printf("enter the limit:");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d ",j);
		printf("\n");
	}
}
