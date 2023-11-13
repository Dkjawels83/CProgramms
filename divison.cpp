#include<stdio.h>
int main()
{
   float sub1,sub2,sub3,sum,per;
   printf("enter the marks of s student\n");
   scanf("%f%f%f",&sub1,&sub2,&sub3);
   sum=sub1+sub2+sub3;
   per=(sum*100)/300;
printf("the per is \n%f",per);"\n";
   if(per>85)
   {
   	printf("divison is first\n");
   }
   else if( per>60&&per<=84)
   {
   	printf("second\n");
}
 else if( per>40&&per<=59)
 {
 	printf("you are third");
 }
else
{
	printf("you fail");
}


return 0;
}

