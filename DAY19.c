//18.Write a C program to count the total number of even and odd numbers in the array.
#include<stdio.h>
//to define the size of the array
#define SIZE 5
int main()
{
    int arr[SIZE],i,ec=0,oc=0;
    printf("Enter 5 numbers in the array:\n",SIZE);
    for(i=0;i<=SIZE-1;i++){
        scanf("%d",&arr[i]);
        //if the number is divisible by 2 0r not
        if(arr[i]%2==0){
            //add even numbers
            ec+=arr[i];
        }
        else{
            //add odd numbers
            oc+=arr[i];
        }
    }
    printf("Sum of even numbers elements in the array%d\n",ec);
    printf("Sum of odd numbers elements in the array%d\n",oc);
    return 0;
}