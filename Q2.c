/*
The Problem:
Write a C program that takes an array of integers and an integer K (entered by the user). 
Rotate the elements of the array to the right by K positions.

Example: If your array is [1, 2, 3, 4, 5] and K = 2, 
shifting it to the right by 2 positions means the last two elements (4 and 5) 
wrap around to the front, resulting in [4, 5, 1, 2, 3].

*/

# include<stdio.h>



void printer(int x,int *y)
{
    printf("[ ");
    for(int k=0;k<x;k++)
    {
        printf("%d ,",y[k]);
    }
    printf("\b\b ]");
}


int size,arr[50],tmparr[50],k,num=0;
int main()
{
    printf("ENTER NUMBER OF ARRAY ELEMENTS ");
    scanf("%d",&size);
    printf("ENTER ARRAY ELEMENTS\n");
    for(int p = 0; p<size;p++)
    {
    scanf("%d",&arr[p]);
    }   
    printf("ENTER ROTATED ELEMENTS ");
    scanf("%d",&k);

    for(int y = size-k; y<size ; y++)
    {
        tmparr[num]=arr[y];
        num++;
    }
    for(int l=0;l<size-k;l++)
    {
        tmparr[num] = arr[l];
        num++;
    }

    printer(num,tmparr);
return 0;
}