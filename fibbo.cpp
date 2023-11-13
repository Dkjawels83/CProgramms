#include<stdio.h>
int main()
{
int a=0,b=1,c=0,i=0,n;
printf("enter the number\n");
scanf("%d",&n);
printf("%d\t%d\t",a,b);
while(i<n-2)
{
	c=a+b;
	printf("%d\t",c);
	a=b;
	b=c;
	i++;
}
}

