#include<stdio.h>
int main()
{
     int choice;
     float temp,convertedtemp;

     printf("Tempareture convertion menu\n ");
     printf("1.Fahrenheight to Celsius\n ");
     printf("2. Celsius to Fahrenheight\n ");
     printf("Enter your choice ");
     scanf("%d",&choice);
     switch(choice)
     {
     case 1:
          {
           printf("Enter the Fahrenheight temparature:");
           scanf("%f",&temp);
           convertedtemp=(temp-32)/1.8;
           printf("The temparature in Celsius is%f\n",convertedtemp);
           break;
          }
     case 2:
          {
           printf("Enter the Celsius temparature:");
           scanf("%f",&temp);
           convertedtemp=(1.8*temp)+32;
           printf("The temparature in Fahrenheight is%f\n",convertedtemp);
           break;
          }
     default:
          printf("Not a choice");
     }
    getch();
}
