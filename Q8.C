/*
The Problem:
Write a C program that takes an array of integers (size entered by the user), 
which may contain a mix of numbers and zeros.

Rearrange the elements in-place so that all zeros are pushed to the end of the array.

The non-zero elements must keep their original relative order.

Example:

Initial Array: [0, 1, 9, 0, 4, -5, 0]

Expected Output: [1, 9, 4, -5, 0, 0, 0]
*/

#include <stdio.h>

int size, arr[50],tmparr[50],count=0,count2=0;
int main()
{
    printf("Enter you size of array ");
    scanf("%d",&size);
    printf("Enter your array elements\n");
    for(int i = 0; i< size ; i++)
    {scanf("%d",&arr[i]);}

    for(int p=0;p<size;p++)
    {
        if(arr[p]!= 0)
        {
            tmparr[count] = arr[p];
            count++;
        }
    }
     for(int j=count;j<=size-1;j++)
    {
       
        
            tmparr[j] = 0;
            
        
    }





printf("[ ");

for(int r=0;r<size;r++)
{
    printf("%d, ",tmparr[r]);
}
printf("\b\b ]");

    return 0;
}
