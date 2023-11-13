#include<stdio.h>
float add(float a,float b){
	return a+b;
}
float sub(float a,float b){
	return a-b;
}
float multi(float a,float b){
	return a*b;
}
float div(float a,float b){
	return a/b;
}
int main(){

float num1,num2,res;
int choice;
while(1){
	printf("enetr the value of num1\n");
	scanf("%f",&num1);
	printf("enter the value of num2\n");
	scanf("%f",&num2);
	printf("enetr the choice 1 to 4\n");
	scanf("%d",&choice);
if(choice==0)
{
	printf("end the calculator\n");
}
switch(choice){
	case 1:
		res=add(num1,num2);
		printf("%f+%f=%f\n",num1,num2,res);
		break;
		case 2:
		res=sub(num1,num2);
		printf("%f-%f=%f\n",num1,num2,res);
		break;
		case 3:
		res=multi(num1,num2);
		printf("%f*%f=%f\n",num1,num2,res);
		break;
		case 4:
		res=div(num1,num2);
		printf("%f/%f=%f\n",num1,num2,res);
		break;
		
}
}
}

