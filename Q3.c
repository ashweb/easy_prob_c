/*
Write a C program that takes an array of integers (size entered by the user)
 and finds the second largest element in the array.

Example: If your array is [12, 35, 1, 10, 34, 1],
 the largest is 35 and the second largest is 34.
 */

 #include<stdio.h>




int size,arr[50],larg,seclarg;
int main()
{
    here :
printf("\nENTER SIZEOF ARRAY ");
scanf("%d",&size);
if(size <2)
{
    printf("\\\\ENTER VALID SIZE\\\\");
    goto here;
}
printf("ENTER POSITIVE ARRAY ELEMENTS\n");
for(int i = 0; i<size;i++)
{
    scanf("%d",&arr[i]);
}
larg = 0;
seclarg = 0; 
for(int y = 0; y<size;y++)
{
    if(arr[y]>larg)
    {
        seclarg = larg;
        larg = arr[y];
    }
    else if(arr[y]>seclarg)
    {
        seclarg = arr[y];
    }
}
if(seclarg == larg)
{
    printf("\nKINDLY GIVE DISTINCTIVE ARRAYS");
    return 1;
}

printf("\nLARGEST NUMBER IS %d",larg);
printf("\nSECOND LARGEST NUMBER IS %d",seclarg);

    





    return 0;
}