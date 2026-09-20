/*Write a C program that takes an array of integers (size entered by the user) 
and finds all the peak elements in it.

A peak element is an element that is greater than or equal to its immediate neighbors.
-> For the first element, it only needs to be greater than or equal to the second element.
=> For the last element, it only needs to be greater than or equal to the second-to-last element.
Example: If the array is [1, 3, 20, 4, 1, 0, 5], 
the peaks are 20 and 5.
*/

void printer(int x,int *y)
{
    printf("[ ");
    for(int k=1;k<=x;k++)
    {
        printf("%d ,",y[k]);
    }
    printf("\b\b ]");
}
#include <stdio.h>


int arr[50], peak[50],peak1=0,num,x,y;

int main()
{
    printf("Enter how many numbers you wanna put ");
    scanf("%d",&num);
      if(num ==1)
    {
printf("There's no peak in single number give more than 1");
return 1;
    }
    printf("Enter elements of your array\n");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<num;j++)
    {
        if(j==0)
        {
            if(arr[j] >=arr[j+1])
            { peak1++;
                peak[peak1]=arr[j];
            }
        }
     else if(j>0 && j<num-1)
        {
            if(arr[j]>=arr[j-1] && arr[j] >= arr[j+1])
            
            {
                peak1++;
                peak[peak1] = arr[j];
            }
        }
     else
     {
           if(arr[j] >= arr[j-1] )
           {
            peak1++;
            peak[peak1] = arr[j];
           }

        }
    }
        
    
    printf("\n--------------YOUR PEAK VALUES ARE-----------------\n");
  
    
printer(peak1,peak);
    
    return 0 ;
}

