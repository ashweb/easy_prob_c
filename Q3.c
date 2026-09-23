/*
Write a C program that takes an array of integers (size entered by the user)
 and finds the second largest element in the array.

Example: If your array is [12, 35, 1, 10, 34, 1],
 the largest is 35 and the second largest is 34.
 */

 #include <stdio.h>
 void swap (int* x,int* y)
 {
    int temp = *x;
    *x = *y;
    *y = temp;
 }
 void printarr(int m, int *n)
 {
    printf("[ ");
    for(int z=0; z< m; z++)
    {
        printf("%d, ",n[z]);
    }
    printf("\b\b ]");
    
 }




int size, arr[50],larg,seclarg,count=0,temp,k;
int main()
{
printf("Enter your array size ");
scanf("%d",&size);
printf("Enter your array\n");
for(int i=0;i<size ;i++)
{
scanf("%d",&arr[i]);
}
larg =0;
for(int j=0;j<size;j++)
{
    if(arr[j]>larg)
    {
        seclarg = larg;
        larg = arr[j];
        
    }
    else if(arr[j]>seclarg)
    {
        seclarg = arr[j];
    }
}
printf("\nLARGEST NUMBER %d",larg);
if(seclarg != 0)
{
printf("\nSECOND LARGEST NUMBER %d",seclarg);
}




printf("\n\n\n\n\t-------ALTERNATIVELY DOING VIA SORTING-------\t\n");





printf("\n\n");
for(int u=0;u<size;u++)
{
for(int k=0;k<size-1;k++)
{
  
    
    if(arr[k]<arr[k+1])
    {
        swap(&arr[k],&arr[k+1]);
       
    }

}
}
printarr(size,arr);
printf("\nLARGEST NUMBER %d\n",arr[0]);
printf("SECOND LARGEST NUMBER %d",arr[1]);









    return 0;
 }