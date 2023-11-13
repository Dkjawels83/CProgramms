#include<stdio.h>

int main()
{float a,b,c,d,e,sum;
float per;
printf("enter the number of all subject\n");
scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
sum=a+b+c+d+e;
per=(sum/500)*100;
printf("the total number is%f\n",sum);

printf("the percent is %f\n",per);

}

