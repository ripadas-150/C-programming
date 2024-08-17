#include<stdio.h>
int main()
{
     char ch;
     printf("Enter a character ");
     scanf("%c",&ch);

     if(ch =='a' || ch =='e'|| ch =='i'|| ch =='o'||ch =='u'||ch =='A' ||
                               ch =='E'|| ch =='I'|| ch =='O'||ch =='U')
     printf("Vowel");

     else if(ch =='b' ||ch =='c' || ch =='d'|| ch =='f'|| ch =='g'||ch =='h'||ch =='j' ||
              ch =='k'|| ch =='l'|| ch =='m'||ch =='n'||ch =='s' || ch =='p'|| ch =='q'||
              ch =='r'||ch =='t'|| ch =='v'||ch =='w' || ch =='x'|| ch =='y'|| ch =='z'||
              ch =='B' ||ch =='C' || ch =='D'|| ch =='F'|| ch =='G'||ch =='H'||ch =='J'||
              ch =='K'|| ch =='L'|| ch =='M'||ch =='N'||ch =='S' || ch =='P'|| ch =='Q'||
              ch =='R'||ch =='T'|| ch =='V'||ch =='W' || ch =='X'|| ch =='Y'|| ch =='Z')
     printf("consonent");

     else
     printf("invalid");


    getch();
}
