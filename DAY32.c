//32.write a c program to find power of two number through funtion.
#include<stdio.h>
int power(int,int);
int main()
{
    int a,b,p;
    printf("enter two number");
    scanf("%d%d",&a,&b);
    p=power(a,b);
    printf("power of %d and %d is %d",a,b,p);
    return 0;
}
int power(int x,int y){
    int pow=1;
    while(y>=1){
        pow*=x;
        y--;
    }
    return pow;
}