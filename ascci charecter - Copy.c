#include<stdio.h>
int main()
{
     char c,lower,upper;

     printf("Enter any lowercase letter:");
     scanf("%c",&lower);
     printf("The uppercase letter:%c\n",lower-32);

     printf("Enter any uppercase letter:");
     scanf("%c\n",&upper);
     printf("The lowercase letter is:%c\n",upper+32);

     printf("Enter any charecter :");
     scanf("%c ",&c);
     printf("The ASCII value is :%d\n",c);

     return 0;
}

