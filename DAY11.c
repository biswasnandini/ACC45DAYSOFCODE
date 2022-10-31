//11.write a progrm to generate a following series:1 2 2 4 8 32 nth term
#include<stdio.h>
int main()
{
    int i=1,j=2,n,k=1,t=1;
    printf("enter the nth term");
    scanf("%d",&n);
    printf("the given series is\n%d\n",i);
    for(k=1;k<=n;k++)
    {
        t=j;
        j=i*j;
        i=t;
        printf("%d\n",i);
    } 
}