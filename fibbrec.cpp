#include<stdio.h>
int fibrec(int num)
{
	if(num==0)
	{
		return 0;
	}
	else if(num==1)
	{
		return 1;
	}
	else 
	return fibrec(num-1)+fibrec(num-2);
}
int main(){

int num;
printf("enter a number for print fibbonaci series");
scanf("%d",&num);
for(int i=0;i<=num;i++)
{
	printf("%d  ", fibrec(i));
}
}
