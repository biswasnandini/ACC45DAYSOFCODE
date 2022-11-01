/*12.Write a program to print the following pattern
*****
 ****
  ***
   **
    *
    */
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("enter rows:");
    scanf("%d",&n);
//to enter the numbers of rows
    for(row=1;row<=n;row++)
    {
      //to add space for the pattern
          for(col=1;col<=n+row;col++)
          {
            printf(" ");
          }
          //for star pattern
          for(col=1;col<=n-row+1;col++)
          {
            printf("*");
          }
          printf("\n");
    }
    return 0;
}    