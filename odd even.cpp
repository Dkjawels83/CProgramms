#include<stdio.h>
int main()
{
	int num;
	printf("enter the any number");
	scanf("%d",&num);
	if(num%2==0)
	//% is modulo operator.it calcluate the remainder when number is divided by 2
	{
		printf("even");
	}
	else{
		printf("odd");
	}




return 0;
}

