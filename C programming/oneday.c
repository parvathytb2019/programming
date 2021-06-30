#include<stdio.h>
void main()
{
	int i;
	printf("12 midnight\n");
	for(i=1;i<=11;i++)
		printf("%d AM\n",i);
	printf("12 noon\n");
	for(i=1;i<=11;i++)
		printf("%d PM\n",i);
}
