#include<stdio.h>
int main()
{
     int a,x,c;
     printf("Enter any value\n");
     scanf("%d",&a);

     printf(" post increement value is %d\n",a++);//10
     printf(" pree increement value is %d\n",++a);//12
     printf(" post decreement value is %d\n",a--);//12
     printf(" pree decreement value is %d\n",--a);//10

     return 0;


}
