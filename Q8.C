
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


void printer(int size,int *arr)
{
    printf("[ ");
    for(int q=0;q<size;q++)
    {
        printf("%d, ",arr[q]);
    }
    printf("\b\b ]");
}

int size, arr[50],tmparr[50],non_zeroes = 0;
int main()
{
printf("ENTER YOUR ARRAY SIZE ");
scanf("%d",&size);
printf("ENTER YOUR ARRAY ELEMENTS\n");
for(int i = 0; i<size;i++)
{
    scanf("%d",&arr[i]);
}
int zeroes =size-1;
int count1=0,count2=0;
for(int j=0;j<size;j++)
{
    if(arr[j] == 0)
    {
        tmparr[zeroes] = arr[j];
        zeroes--;
        count1++;
    }
    else if(arr[j] != 0)
    {
        tmparr[non_zeroes]=arr[j];
        non_zeroes++;
        count2++;
    }
   
}
 int total = count1 + count2;
    printer(total,tmparr);


    return 0;
}