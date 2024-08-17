#include<stdio.h>
int main()
{
     int num;
     printf("Enter any value\n");
     scanf("%d",&num);

     if(num%2==0)
     printf(" Even number is %d\n",num);
     else if(num%2!=0)
     printf("Odd number is %d\n",num);
     else
     printf("Invalid number");

     return 0;


}

