
/*
The Problem:
Write a C program that takes an array of integers (size entered by the user)
 and finds both the maximum (largest) and minimum (smallest) values in that array.

Print out both the maximum and minimum numbers found.
*/

#include <stdio.h>
void swap (int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int size, arr[50];
int main()
{
    printf("Enter you size of array ");
    scanf("%d",&size);
    printf("Enter your array elements\n");
    for(int i = 0; i< size ; i++)
    {scanf("%d",&arr[i]);}

    //METHOD 1 - VIA ARRAY TRAVERSAL

    int larg = arr[0], small = arr[0];

    for(int k=0;k<size;k++)
    {
        if(arr[k]>larg){
            larg = arr[k];
        }
         if(arr[k]<small)
        {
            small = arr[k];
        }
    }
    printf("\n[ ");
    for(int o=0; o<size; o++)
    {
        printf("%d, ",arr[o]);

       
    }
     printf("\b\b ]\n");
     printf("\nSMALLEST IS %d\n",small);
     printf("LARGEST IS %d\n",larg);


// METHOD - 2 - VIA SORTING OUT AND PRINTING

for(int y=0;y<size;y++)
{
    for(int p=0;p<size-1;p++)
    {
        if(arr[p]>arr[p+1])
        {
            swap(&arr[p], &arr[p+1]);
        }
    }
}
printf("\n\n-------METHOD 2 - VIA SORTING-------\n\n");
 printf("\n[ ");
    for(int m=0; m<size; m++)
    {
        printf("%d, ",arr[m]);

       
    }
     printf("\b\b ]\n");

printf("\nSMALLEST NUMBER IS %d\n",arr[0]);
printf("LARGEST NUMBER IS %d\n",arr[size-1]);
    return 0;
}