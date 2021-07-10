## Octal equivalent of a number
C program to find the octal equivalence of a decimal number
```c
#include<stdio.h>
void main()
{
	int num,rem,rev=0,count=1;
	printf("enter a number:");
	scanf("%d",&num);
	while(num!=0)
	{
		rem=num%8;
		rev=rev+(rem*count);
		count=count*10;
		num=num/8;
	}
	printf("octal value is%d",rev);
}
```
