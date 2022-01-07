#include <stdio.h>
#include <conio.h>

void main()
{
    //TO CHECK WHETHER THE ENTERED YEAR IS LEAP YEAR//

 int y;

 printf("enter any year\n");

 scanf("%d",&y);

 if(y%4==0&&y%100!=0)
 {
     printf("entered year is a leap year\n");
 }
 else if(y%100==0&&y%400==0)
 {
     printf("entered year is a leap year\n");
 }
 else
 {
     printf("entered year is not a leap year\n");
 }
 getch();
}
