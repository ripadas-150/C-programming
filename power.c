#include <stdio.h>
#include<math.h>

int main()
{
     int a,b;
     printf("Enter any two value:");
     scanf("%d%d",&a,&b);
     double result=pow(a,b);
     printf("power is %.2lf",result);
     return 0;

}
