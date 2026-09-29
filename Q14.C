/*
THE PROBLEM :
CALCULATE TOTAL SUBARRAY INSIDE ARRAY ENTERED BY INPUT AND PRINT ALL THOSE ARRAY
*/
#include <stdio.h>
int num, arr[50];
int main()
{
printf("ENTER YOUR NUMBER OF ELEMENTS ");
    scanf("%d",&num);
    printf("ENTER YOUR ELEMENTS\n");
    for(int i =0;i<num;i++)
    {
    scanf("%d",&arr[i]);
   }
   for(int start=0;start<num;start++)
   {
    for(int end=0;end<num;end++)//im using here putting end =0 instead end = start to get that space so it looks proper inverted triangle
    {
        for(int k=start;k<=end;k++)
        {
            printf("%d",arr[k]);
        }
        printf(" ");
    }
    printf("\n");
   }



    return 0;
}