#include<stdio.h>
void main()
{
	int ram,shyam,ajay,small;
	printf("enter the age of ram:");
	scanf("%d",&ram);
	printf("enter the age of shyam:");
	scanf("%d",&shyam);
	printf("enter the age of ajay:");
	scanf("%d",&ajay);
	small=ram;
	if(shyam<small)
		small=shyam;
	if(ajay<small)
		small=ajay;
	if(small==ram)
		printf("ram is the youngest one");
	if(small==shyam)
		printf("shyam is the youngest one");
	if(small==ajay)
		printf("ajay is the youngest one");
}
