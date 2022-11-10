//21.write a c program to find the maximum number between three numbers.
#include<stdio.h>
int main()
{
    int a ;
    int b ;
    int c ;

    printf("enter the first number\n");
    scanf("%d", &a);
    
    printf("enter the second number\n");
    scanf("%d", &b);

    printf("enter the third number\n");
    scanf("%d", &c);

    if (a>b && a>c)
    {
        printf("%d is greater then %d and %d\n", a, b , c);
    }
    
    else if (b>a && b>c)
    {
        printf("%d is greater then %d and %d\n", b, a , c);
    }
    
   else  if (c>b && c>a)
    {
        printf("%d is greater then %d and %d\n", c, b , a);
    } 
    else{
        printf("bye bye\n");
    }
    return 0;
}