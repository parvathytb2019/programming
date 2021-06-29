  
#include<stdio.h>
float prod(int one,float two);
void main()
{
	int one;
	float two,product;
	printf("enter the first number:");
	scanf("%d",&one);
	printf("enter the second number:");
	scanf("%f",&two);
	product=prod(one,two);
	printf("product is %f",product);
}
float prod(int one,float two)
{
	float value;
	value=one*two;
	return value;
}
