//4.write a program to print a pattern with equal number of rows and column using for loop.
#include<stdio.h>
int main()
{
    int n;
    printf("enter number of rows:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}