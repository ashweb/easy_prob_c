/*
The Problem:
Write a C program that takes an array of integers (size entered by the user).

Count the occurrence (frequency) of each unique element in the array and 
print how many times each number appears.
*/
#include <stdio.h>

int arr[50],size,count = 0;

int main()
{
printf("Enter the size of array ");
scanf("%d",&size);
printf("Enter elements of array\n");
for(int i =0; i< size;i++)
{
    scanf("%d",&arr[i]);
}

for(int y=0;y<size;y++)
     {
    
for(int k=0;k<size;k++)
      {
if(arr[y] == arr[k])
{
   count++;
}

      }
      int already_counted=0;

  
        for(int m=0; m < y ;m++)
        {
            if(arr[y]==arr[m])
            {
                already_counted=1;
            }
        }
    
if(already_counted ==1)
{
    continue;
}
 printf("\nThe number of times %d occur is %d\n", arr[y] ,count);

 count -= count;


          }





    return 0;
}