#include<stdio.h>
int fact(int num)
{
	if(num==1)
	{
		return 1;
	}
	else
	{
		return num*fact(num-1);
	}
}
int main()
{ 
int num;
 printf("enter a number");
 scanf("%d",&num);
 int res=fact(num);
 printf("the factorial of this number is%d\n",res);
 
}

