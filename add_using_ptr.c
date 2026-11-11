#include <stdio.h>
    int arr[50],size,sum=0;
int main()
{
    
printf("ENTER YOUR ARRAY SIZE ");
scanf("%d",&size);
printf("Enter your array elements\n");
for(int i =0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
int* p = arr;
for(int i =0;i<size;i++)
{
   sum += *(p+i); 
}
printf("SUM OF THE ELEMENTS ARE %d ",sum);

}