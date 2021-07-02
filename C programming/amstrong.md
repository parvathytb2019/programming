## Amstrong numbers
Python program to find amstrong numbers between 100 and 500
```c
#include<stdio.h>
void main()
{
	int i,rem,num,amstrong=0;
	for(i=100;i<=500;i++)
	{
		num=i;
		amstrong=0;
		while(num!=0)
		{
			rem=num%10;
			amstrong=amstrong+(rem*rem*rem);
			num=num/10;
		}
		if(amstrong==i)
			printf("%d\n",i);
			
	}
}
```
