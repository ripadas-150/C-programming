#include<stdio.h>
int main()
{
     int num1,num2;
     float result;
     printf("Enter two number:");
     scanf("%d%d",&num1,&num2);
     result=num1+num2;
     printf("Addition is %.2f\n",result);
     result=num1-num2;
     printf("Substraction is %.2f\n",result);
     result=num1*num2;
     printf("Multiplication is %.2f\n",result);
     result=(float)num1/num2;
     printf("Division is %.2f\n",result);
     result=num1%num2;
     printf("Reminder is %.2f\n",result);
     return 0;
}
