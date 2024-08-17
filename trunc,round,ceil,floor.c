#include<stdio.h>
#include<math.h>
int main()
{
     double x,y,result;
     printf("Enter any value of x\n");
     scanf("%lf",&x);
     result=round(x);
     printf("round(%.2lf)=%.2lf\n",x,result);

     printf("Enter any value of x\n");
     scanf("%lf",&x);
     result=trunc(x);
     printf("trunc(%.2lf)=%.2lf\n",x,result);

     printf("Enter any value of x\n");
     scanf("%lf",&x);
     result=ceil(x);
     printf("ceil(%.2lf)=%.2lf\n",x,result);

     printf("Enter any value of x\n");
     scanf("%lf",&x);
     result=floor(x);
     printf("floor(%.2lf)=%.2lf\n",x,result);
     return 0;

}
