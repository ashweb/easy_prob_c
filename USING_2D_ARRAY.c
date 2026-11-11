#include <stdio.h>

void readmat(int col,int row,int arr[col][row])
{
    for(int i=0;i<col;i++)
    {
for(int j=0;j<row;j++)
{
    printf("Enter your array matrix %d %d ",i+1,j+1);
    scanf("%d",&arr[i][j]);
    printf("\n");
}
    }
    
}
void rowsum (int col,int row,int arr[col][row])
{
    
    for(int i=0;i<col;i++)
    {int sum=0;
        for(int j=0;j<row;j++)
        {  
                sum += arr[i][j];      
        }
         printf("Sum of the rows %d element is %d\n ",i+1,sum);          
    }
}
void colsum(int col,int row,int arr[col][row])
{   

printf("\n\n");
    for(int i =0;i<row;i++)
    {int sum =0;
        for(int j=0; j<col;j++)
        {
           sum += arr[i][j];
        }
        printf("Sum of the columns %d element is %d\n ",i+1,sum);
        
    }

}
void totsum(int col,int row,int arr[col][row])
{int sum=0;
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            sum+=arr[i][j];
        }
    }
    printf("\n\nTOTAL SUM OF ENTIRE ARRAY IS %d ",sum);
}

void printmat(int col,int row,int arr[col][row])
{
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            printf("%d, ",arr[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int col,row;
    printf("enter order of matrix ");
    scanf("%d %d",&col,&row);
    int arr[col][row];
    readmat(col,row,arr);
    printmat(col,row,arr);
    rowsum(col,row,arr);
    colsum(col,row,arr);
    totsum(col,row,arr);
    return 0;
}