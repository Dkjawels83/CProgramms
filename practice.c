
#include<stdio.h>
int main()
{
	int num,i,res;
	printf("enter a number ");
	scanf("%d",&num);
	for(i=1;i<=10;i++)
	{ 
	   res=num*i;
		printf("%d * %d =%d\n",num,i,res);
	}
}

