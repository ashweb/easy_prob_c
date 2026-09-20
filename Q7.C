/*
The Problem:
Write a C program that takes an array of integers (size entered by the user) 
and checks whether the array is a palindrome 
If it's a palindrome, print "Palindrome".
If it breaks symmetry anywhere, print "Not a Palindrome".

Example 1:
Array: [1, 2, 3, 2, 1]
Expected Output: Palindrome
*/
#include <stdio.h>

int size, arr[50],count=0;

int main()
{
    printf("Enter you size of array ");
    scanf("%d",&size);
    printf("Enter your array elements\n");
    for(int i = 0; i < size ; i++)
    {scanf("%d",&arr[i]);}
    if(size%2 != 0)
{
    int mid = size/2 ;
    for(int k = 0; k <= mid;k++)
    {
        if(arr[k] == arr[size -k -1])
        {
            count++;
        }
    }
    if(count == mid+1)
    {
        printf("\nARRAY IS PALINDROME\n");
    }
    else
    {
        printf("ARRAY IS NOT A PALINDROME\n");
    }
}
else if(size %2 == 0)
{
    int mid = size/2 ;
    for(int k = 0; k <= mid-1;k++)
    {
        if(arr[k] == arr[size-1 -k])
        {
            count++;
        }
    }
    if(count == mid)
    {
        printf("\nARRAY IS PALINDROME\n");
    }
    else
    {
        printf("ARRAY IS NOT A PALINDROME\n");
    }
}



    



    return 0;
}