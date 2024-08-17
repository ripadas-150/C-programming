int main()
{
     char ch;
     printf("Enter a character ");
     scanf("%c",&ch);



     if(ch>='a' && ch<='z')
          printf("small letter is %c",ch);

     else if(ch>='A' && ch<='Z')
          printf("capital letter is %c",ch);

     else
          printf(" not a letter is %c ",ch);
     getch();
}

