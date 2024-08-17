#include<stdio.h>
int main()
{
     char lower,upper;
     printf("Enter any lowercase letter:");
     scanf("%c,&lower");
     upper = toupper(lower);
     printf("Uppercase letter=%c\n",upper);
     printf("Enter any uppercase letter:");
     scanf("%c,&lower");
     lower = tolower(upper);
     printf("lowercase letter=%c",lower);
     return 0;
}
