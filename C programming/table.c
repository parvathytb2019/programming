#include<stdio.h>
void main()
{
	int num,i=1;
	printf("enter the number:");
	scanf("%d",&num);
	while(i<=10)
	{
		printf("%d*%d=%d\n",i,num,i*num);
		i++;
	}
}
