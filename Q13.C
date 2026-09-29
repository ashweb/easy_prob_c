/*
THE PROBLEM;
TAKE SET OF NUMBERS AS INPUT FROM THE USER AND CHECK IF ANY NUMBER IN NON REPEATED IF THERE 
IS ANY NUMBER NON REPEATED PRINT THAT IN PROPER WAY

*/

#include <stdio.h>
int num, arr[50],tmparr[50],test=0;


int main()
{

    printf("ENTER YOUR NUMBER OF ELEMENTS ");
    scanf("%d",&num);
    printf("ENTER YOUR ELEMENTS\n");
    for(int i =0;i<num;i++)
    {
    scanf("%d",&arr[i]);
   }
        for(int y=0;y<num;y++)
        {
          test = test^arr[y];
        }
       

        if(test != 0)
        {
           printf("UNIQUE ELEMENT IS %d ",test); 
        }
        else
        {

        printf("NO UNIQUE NUMBER IN YOUR ARRAY");
    
        }




    return 0;
}