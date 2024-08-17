#include<stdio.h>
int main()
{
    int num4,num5,i,n;
    float num1=10.5,num2=10.568,f;
    double num3=10.123456789,d;
    char c,ch;

    printf("num1 is %.1f,\n%.3f\n",num1,num2);
    printf("num3 is %lf\n",num3);
    printf("Take user define variable :");
    scanf("%d",&num4);
    printf("This is user define variable: %d\n",num4);
    printf("press a number :");
    scanf("%d",&num5);
    printf("This is user define variable: %d\n",num5);
    printf("Size of integer variable %d bytes\n",sizeof(i));
    printf("Size of floate variable %d bytes\n",sizeof(f));
    printf("Size of double variable %d bytes\n",sizeof(d));
    printf("Size of charecter variable %d bytes\n",sizeof(c));
    printf("Enter any ASCII value :");
    scanf("%d",&n);
    printf("The ASCII charecter is :%c\n",n);
    printf("Enter any ASCII charecter :");
    scanf("%c\n",&ch);
    printf("The ASCII value is :%d\n",ch);

    return 0;

    }
