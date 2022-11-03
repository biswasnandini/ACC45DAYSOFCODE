//14.Write a program to display a to the power b.
#include<stdio.h>
int main() {
    int i=1,a,b, pow=1;

    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    while(i<=b)
    {
        pow*=a;
        i++;
    }
    printf("a to the power of b is %d",pow);

    return 0;
}
