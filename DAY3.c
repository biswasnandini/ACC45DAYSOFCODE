//write a program to create a calculater(sum,subtract,multiply and divide).
#include<stdio.h>
void main()
{
    char ch;
    int a,b,c;
 
    printf("+ addition\n");
    printf("- substraction\n");
    printf("* multiplication\n");
    printf("// division\n");
    printf("enter your choice:\n");
    scanf("%c",&ch);

    printf("enter two number:\n");
    scanf("%d%d",&a,&b);

    switch(ch)
    {
    case '+':
    c=a+b;
    break;
    case '-':
    c=a-b;
    break;
    case '*':
    c=a*b;
    break;
    case '/':
    if(b==0)
    {
        c=0;
    }
    else
    {
        c=a/b;
    }
    break;
    default:
    printf("invalid choice\n");
    }
printf("output is: %d",c);
}                   