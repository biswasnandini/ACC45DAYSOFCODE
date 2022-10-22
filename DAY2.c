//2.write a program to check if a given number is armstrong number or not.
#include<stdio.h>
int main()
//armstrong number or not
{
    int n,r,sum=0,a;
    printf("enter the number");
    scanf("%d,&n");
    a=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n/=10;
    }
    if(a==sum)
    {
        printf("armstrong number");
    }
    else{
        printf("not an armstrong number");
    }
    return 0;
}