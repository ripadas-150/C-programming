

#include<stdio.h>
int main()
{
     int num,temp,r,sum=0,initialnum,finalnum,i;
     printf("Enter initial num  :");
     scanf("%d",&initialnum);

     printf("Enterfinal num :");
     scanf("%d",&finalnum);

     for(i=initialnum; i<=finalnum; i++)
     {

     temp = i;

     while( temp !=0)
     {
          r = temp%10;
          sum = sum+r*r*r;
          temp = temp/10;
     }
     if(sum== i)
     {
          printf("Armstrong number : %d\n",i);
     }
     sum=0;

     getch();
     }
}
