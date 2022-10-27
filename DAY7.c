//7.wite a program to count a number.
#include<stdio.h>
#include<conio.h>
void main()
{
   int n,count=0;
   printf("enter a number :");
   scanf("%d",&n);
   do
   {
    n/=10;
    count++;
   }
   
    while(n>0);
    printf("%d",count);
    getch();
}