#include<stdio.h>
float percentage(int one,int two,int three);
float average(int one,int two,int three);
void main()
{
	int one,two,three;
	float per,ave;
	printf("enter the marks of three subjects(out of 100):");
	scanf("%d%d%d",&one,&two,&three);
	per=percentage(one,two,three);
	ave=average(one,two,three);
	printf("percentage is %f",per);
	printf("average mark is %f",ave);
}
float percentage(int one,int two,int three)
{
	float percent,sum;
	sum=one+two+three;
	percent=(sum/300)*100;
	return percent;
}
float average(int one,int two,int three)
{
	float aver;
	aver=(one+two+three)/3;
	return aver;
}
