/*
Write a C program that takes an array of integers (size entered by the user)
 and finds the second largest element in the array.

Example: If your array is [12, 35, 1, 10, 34, 1],
 the largest is 35 and the second largest is 34.
 */

 #include <stdio.h>
 void swap (x,y)
 {
    temp = x;
    x = y;
    y = temp;
 }
 void printarr(m, *n)
 {
    printf("[ ");
    for(int z=0; z< m; z++)
    {
        printf("%d, ",n[z]);
    }
    printf("\b\b ]");
 }




int size, arr[50],larg,seclarg,count=0,temp;
int main()
{
printf("Enter your array size");
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
}
printf("\nLARGEST NUMBER %d",larg);
if(seclarg != 0)
{
printf("\nSECOND LARGEST NUMBER %d",seclarg);
}

// ALTERNATIVELY DOING VIA SORTING


for(k=0;k<size;k++)
{
    if(count <= size)
    {
    if(arr[k]<arr[k+1])
    {
        swap(arr[k],arr[k+1]);
        count++;
    }
}
}
printarr(size,arr);









    return 0;
 }