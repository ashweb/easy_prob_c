/*
The Problem:
Write a C program that takes an array of integers (size entered by the user) 
and checks whether the array is sorted in decreasing or increasing order.
If any element breaks that rule, print "Not Sorted".
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
int main()
{
    int size,arr[50];
    
    printf("ENTER SIZE OF ARRAY YOU WANNA PUT ");
    scanf("%d",&size);
    printf("ENTER YOUR ARRAY ELEMENTS\n");
    for(int i=0;i<size ; i++)
    {
    scanf("%d",&arr[i]);
    }
    //CHECKING THIS ARRAY IF ITS SORTED IN ANY FORM
//  1) INCREASING
    int incr = 0;
    for(int u=0;u<size-1;u++)
    {
        if(arr[u]<arr[u+1])
        {
            incr++;
        }
    }
//  2) DECREASING
    int decr = 0;
     for(int w=0;w<size-1;w++)
    {
        if(arr[w]>arr[w+1])
        {
            decr++;
        }
    }

    if(incr == size-1)
    {
        printf("\nTHE ARRAY IS SORTED IN INCRESING");
    }
    else if (decr == size-1)
    {
        printf("\nTHE ARRAY IS SORTED IN DECREASING");
    }
    else 
    {
        printf("\nTHE ARRAY IS NOT SORTED\n");
    }
return 0;
}
