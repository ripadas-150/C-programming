#include<stdio.h>
int main()
{
     int num1,num2,sum;
     double avg;
     printf("Enter two number :");
     scanf("%d%d",&num1,&num2);
     sum=num1+num2;
     printf("Sum is  %d\n",sum);
     avg=sum/2;
     printf("Avg is %.2lf\n",avg);
     return 0;
}
