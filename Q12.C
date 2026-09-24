//manipulating an array
/*
TAKE AN ARRAY INPUT FROM USER AND SEPERATE ALL EVEN AS WELL ODD NUMBERS 
INTO DIFFERENT TEMP ARRAY AND PRINT THOSE ARRAY
*/

#include <stdio.h>

void printer(int size,int *arr)
{
    printf("[ ");
    for(int q=0;q<size;q++)
    {
        printf("%d, ",arr[q]);
    }
    printf("\b\b ]\n");
}

int size, arr[50],even[50],odd[50],even2=0;odd2=0;
int main()
{
    printf("ENTER YOUR ARRAY SIZE ");
    scanf("%d",&size);
    printf("ENTER YOUR ARRAY ELEMENTS ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<size;j++)
    {

        if(arr[j] %2 ==0)
        {
            even[even2]=arr[j];
            even2++;
        }
        else if(arr[j] %2 !=0)
        {
            odd[odd2]=arr[j];
            odd2++;
        }
        else if(arr[j] == 0 || arr[j] < 0)
        {   printf("\nGIVE POSITIVE INTEGERS");}
    


    }

printer(even2,even);
printer(odd2,odd);


    return 0;
}