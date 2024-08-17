int main()
{
     int num;
     printf("Enter a number ");
     scanf("%d",&num);

     if(num>100 && num<0 )
          printf("Invalid number");

     else if(num>=80 && num<=100)
          printf("A+");
     else if(num>=70 && num<=79)
          printf("A");
         else if(num>=60 && num<=69)
          printf("A-");
     else if(num>=50 && num<=59)
          printf("B");
     else if(num>40 && num<=49)
          printf("C");
     else if(num>=33 && num<=39)
          printf("D");

     else
          printf(" Fail");
     getch();
}
