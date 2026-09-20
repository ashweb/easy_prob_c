/*
The Problem:
Write a C program that takes an array of integers (size entered by the user) 
and checks whether the array is sorted in non-decreasing (ascending) order.

If every element is greater than or equal to the one before it, print "Sorted".

If any element breaks that rule, print "Not Sorted".
*/

#include <stdio.h>
int size,arr[50],sorted=0,non_sorted=0, sort[50],non_sort[50],count1=-1,count2=-1;
void printarr (int x,int*y)
{

    printf("[ ");
    for(int o = 0; o <x ; o++)
    {
        printf("%d, ",y[o]);
    }
    printf("\b\b ]");


}

int main()
{
    
printf("Enter number of elements in need ");
scanf("%d",&size);
printf("Enter your array's element\n");
for(int i = 0; i<size; i++)
{
scanf("%d",&arr[i]);
}
for(int j=0;j<size-1;j++)
{
    if(j != size-1)
    {
    if(arr[j]<=arr[j+1])
    {
        sorted++;
        count1++;
        sort[count1] = arr[j];
    }
    else if(arr[j]>=arr[j+1])
    {
        non_sorted++;
        count2++;
        non_sort[count2] = arr[j];
    }
}
else if(j == size-1 && arr[size] > arr[size-1])
{
    sorted++;
    count1++;
    sort[count1] = arr[j];
}
else if (j == size-1 && arr[size] < arr[size-1])
{
    non_sorted++;
    count2++;
    non_sort[count2] = arr[j];
}
}
printarr(size, sort);
printf("\n");
printarr(size, non_sort);
printf("\nNUMBER OF SORTED %d",sorted);
printf("\nNUMBER OF UNSORTED %d",non_sorted);
if(non_sorted > 0)
{
    printf("\nFINAL ARRAY IS UNSORTED\n");
}
else
printf("\nFINAL ELEMENT IS SORTED\n");

return 0;
}
