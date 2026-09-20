/*
The Problem:
Write a C program that takes an array of integers and an integer K (entered by the user). 
Rotate the elements of the array to the right by K positions.

Example: If your array is [1, 2, 3, 4, 5] and K = 2, 
shifting it to the right by 2 positions means the last two elements (4 and 5) 
wrap around to the front, resulting in [4, 5, 1, 2, 3].

*/

#include <stdio.h>

void printer(int x,int *y)
{
printf("[ ");
for(int h=0; h< x ; h++)
{
printf("%d, ",y[h]);
}
printf("\b\b ]");
}

int ogarr[50],arr,target,temparr[50];


int main()
{
    printf("Enter your number of array elements ");
    scanf("%d",&arr);
    printf("Enter your array elements\n");
    for(int i=0;i<arr;i++)
    {
            scanf("%d",&ogarr[i]);
    }
    printf("Enter your swap target ");
    scanf("%d",&target);
    
    for(int k = 0; k < arr ; k++)
    {
           temparr[(k+target)%arr] = ogarr[k];
    }
int count1=0;
    printer(arr,temparr);


    return 0;
}