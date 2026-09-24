/*The Problem:
Write a C program that takes an array of integers (size entered by the user) 
and reverses it in-place.

In-place means you cannot use a second temporary array to copy things over. 
You have to swap the elements directly inside the original array!

*/

#include <stdio.h>

void swap(int *x, int *y)
{
   int  temp = *x;
    *x = *y;
    *y = temp;
}
void printarr(int m,int *n)
{
    printf("[ ");
    for(int o = 0; o<m ; o++)
    {
        printf("%d, ",n[o]);

    }
    printf("\b\b ]");
}

int size, arr[50],temp;
int main()

{
printf("Enter number of elements in need ");
scanf("%d",&size);
printf("Enter your array's element\n");
for(int i = 0; i<size; i++)
{
scanf("%d",&arr[i]);
}
int left = 0, right = size-1;
printf("\n\n------BEFORE SWAP ARRAY IS-----\n\n");
printarr(size, arr);
while(left < right)
{
    swap(&arr[left],&arr[right]);
    left++;
    right--;
}
printf("\n\n------AFTER SWAP ARRAY IS-----\n\n");
printarr(size, arr);
    return 0;
}
