//10.Find the length of string without using standard library function strlen.
/*c program to find the length of a string without
 using any standard library function*/
 #include<stdio.h>
 int main()
 {
    /*here we are taking a char array of size 
    100 which means this array can hold a string 
    of 100 chars. you can this as per as your requirement */
    char str[100],i;
    printf("enter a string:\n");
    scanf("%s",str);

    //'\0' represents end of string
    for(i=0;str[i]!='\0';++i);
        printf("\nLength of input string:%d",i);

    return 0;
 }