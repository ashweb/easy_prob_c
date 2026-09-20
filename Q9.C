/*
The Problem:
Write a C program that takes an array of size N - 1. 
The array contains distinct integers ranging from 1 to N 
(meaning one number is completely missing from the sequence).
Find and print the missing number.
Example:Array Size: 4 (so N = 5, meaning numbers should range from 1 to 5)
Array Elements: [1, 2, 4, 5]  Expected Output: The missing number is 3
*/

#include <stdio.h>

int main()
{
    int size, arr[50],count1=0,sum=0;

    printf("Enter size of array ");
    scanf("%d",&size);
    printf("Enter array elements\n");
    for(int i=0;i<size-1;i++)
    {
        scanf("%d",&arr[i]);
    }

int calc = size*(size+1)/2;

for(int u=0;u<size-1;u++)
{
sum += arr[u];
}
printf("\nLEFT NUMBER BY USER IS %d",calc - sum);
return 0;
}