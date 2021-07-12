## Efficency of workers
C program to find the efficency of workers according to working hours
```c
#include<stdio.h>
void main()
{
	float time;
	printf("enter the working hours:");
	scanf("%f",&time);
	if((time>=2.0) && (time<3.0))
		printf("highly efficent worker");
	if((time>=3.0) && (time<4.0))
		printf("worker needs to improve speed");
	if((time>=4.0) && (time<5.0))
		printf("need training to improve the worker's speed");
	if(time>5.0)
		printf("the worker will be terminated");
}
```
