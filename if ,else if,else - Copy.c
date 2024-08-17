#include<stdio.h>
int main()
{
     int N,M;
     printf("Enter any value ");
     scanf("%d%d",&M,&N);

     if(N>M)
     printf(" Large number is %d\n",N);

     else if(M>N)
     printf("Large number is %d\n",M);

     else
     printf("Invalid number");

     getch();


}
