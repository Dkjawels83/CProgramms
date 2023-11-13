#include<stdio.h>
int main()
{
	int i=1,n,r;
	printf("enter the value of number");
	scanf("%d",&n);
	do{
		r=n*i;
		printf("%d*%d=%d\n",n,i,r);
		i++;
	}
	while(i<=10);

return 0;
}

