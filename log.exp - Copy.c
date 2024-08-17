#include<stdio.h>
#include<math.h>
int main()
{
     double x,y,result;
     printf("Enter any value of x\n");
     scanf("%lf",&x);
     result=log10(x);
     printf("log10(%.2lf)=%.2lf\n",x,result);

     printf("Enter any value of x\n");
     scanf("%lf",&x);
     result=exp(x);
     printf("exp(%.2lf)=%.2lf",x,result);
     return 0;

}
