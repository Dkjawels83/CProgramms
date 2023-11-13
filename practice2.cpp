#include<stdio.h>
int printFunction(int num);
int printOddeven( int n);

int main()

{
	int num;
int toggle=1;
while(toggle){
	printf("enter the number\n");
	scanf("%d",&num);
	printf("choose one' \n1. to print table \n2 check odd even'\n");
	int input;
	scanf("%d",&input);
	if(input==1){
		printFunction(num);
	}
	else if(input==2){
		printOddeven(num);
	}
	else
	{
		printf("error");
	}
}
return 0;
}

int printFunction(int num)
{
		int i
		;

for(i=1;i<=10;i++)
{
	printf("%d*%d=%d\n",num,i,(num*i));
}

	return num;
	
}

int printOddeven(int n)
{
	if(n%2==0)
	{
		printf("the number is even");
	}
	else
	{
		printf("the number is odd");
	}
	return n;
}



