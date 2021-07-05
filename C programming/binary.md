## Binary of a number
C program to find the binary value of a natural number
```c
#include<stdio.h>
void binary(int num);
void main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	binary(num);
}
void binary(int num)
{
	int rem,rev=0,count=1;
	while(num!=0)
	{
		rem=num%2;
		rev=rev+(rem*count);
		count=count*10;
		num=num/2;
	}
	printf("binary value is%d",rev);
}
```
