int main()
{
     int num1;
     printf("Enter a number ");
     scanf("%d",&num1);



     if(num1%400==0)
          printf("Leap year is %d",num1);

     else if(num1%4==0 && num1%100!=0)
          printf("Leap year is %d",num1);

     else
          printf(" %d is Not leap year ",num1);
     getch();
}
