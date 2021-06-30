#include<stdio.h>
void main()
{
int rev=0,rem,num,palin;
printf("enter number:");
scanf("%d",&num);
palin=num;
while(num!=0)
{
	rem=num%10;
	rev=(rev*10)+rem;
	num=num/10;
}
if(palin==rev)
	printf("%d is a palindrome number",palin);
else
	printf("%d is not a palindrome",palin);
}
