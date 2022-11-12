//23.Write a c program to add two array of 3*3 matrix.
#include<stdio.h>
void main()
{
    int arr[3][3],arr1[3][3],arr2[3][3]={0},i,j;
    printf("enter the element of first 3*3 matrix\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&arr[i][j]);
            
        }
    }
    printf("enter the element of second 3*3 matrix\n");
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&arr1[i][j]);

        }
    }
    printf("output of arr1 3*3 matrix is\n");
     for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            arr2[i][j]=arr[i][j]+arr1[i][j];
            printf("%d",arr2[i][j]);
        }
        printf("\n");
    }
}
