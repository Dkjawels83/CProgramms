
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
int toggle = 1;
while(toggle){
		printf("enter the choice\nchoose 1 for add\nchoose 2 for subtract\nchoose 3 for multipliction\nchoose 4 divison\nchoose 5 for exit ");
	scanf("%d",&choice);
printf("enter the value of num1\n");
	scanf("%f",&num1);
	printf("enter the value of num2\n");
	scanf("%f",&num2);

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
		
		case 5:
toggle=0;
		break;
		default:
			printf("error\n");
				
	
}
}
}


