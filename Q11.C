/*
The Problem:
Write a C program that takes an array of integers (size entered by the user) 
and checks whether the array is sorted or not in decreasing or increasing order (as per user demand).
ask user if he wanna sort it into any form then do it!
If any element breaks that rule, print "Not Sorted".
and then at last sort in the following way asked;
*/

#include <stdio.h>

void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
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
    here :
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
valid :
    printf("\nWHAT SORTING DO YOU NEED\n1). INCREASING\n2). DECREASING\n3). NOTHING JUST PRINT OUT MY OWN ARRAY AND EXIT\n4). INPUT ARRAY AGAIN\n");
    int option;
    scanf("%d",&option);
    switch(option)
    {
        case 1:
        {
           
for (int r = 0; r < size - 1; r++)
{
    for (int g = 0; g < size - r - 1; g++)
    {
        if (arr[g] > arr[g + 1]) 
        {
            swap(&arr[g], &arr[g + 1]);
        }
    }
}
            printer(size,arr);
            goto valid;
            break;
        }
        case 2:
        {
          
for (int r = 0; r < size - 1; r++)
{
    for (int g = 0; g < size - r - 1; g++)
    {
        if (arr[g] < arr[g + 1]) 
        {
            swap(&arr[g], &arr[g + 1]);
        }
    }
}
            printer(size,arr);
            goto valid;
            break;
        }
        case 3: 
    {
        printer(size,arr);
        break;
    }
    case 4:
    {
        goto here;
        break;
    }
        default : 
        {
            printf("ENTER VALID OPTION");
            goto valid;
        }




    }



    return 0;
}