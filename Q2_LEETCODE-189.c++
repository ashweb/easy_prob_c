/*
The Problem:
Write a C program that takes an array of integers and an integer K (entered by the user). 
Rotate the elements of the array to the right by K positions.

Example: If your array is [1, 2, 3, 4, 5] and K = 2, 
shifting it to the right by 2 positions means the last two elements (4 and 5) 
wrap around to the front, resulting in [4, 5, 1, 2, 3].

*/


//METHOD 1-:

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int>arr;


int size,k,num=0;

int main()
{
    cout<<"ENTER NUMBER OF ARRAY ELEMENTS ";
    cin>>size;
    cout<<"ENTER ARRAY ELEMENTS\n";
    for(int p = 0; p<size;p++)
    {
        int x;
        cin>>x;
    arr.push_back(x);
    }   
    cout<<"ENTER ROTATED ELEMENTS ";
    cin>>k;
vector<int>tmparr(size);
    for(int y = size-k; y<size ; y++)
    {
        tmparr[num]=arr[y];
        num++;
    }
    
    for(int l=0;l<size-k;l++)
    {
        tmparr[num] = arr[l];
        num++;
    }


    cout<<"\nMETHOD 1 (STANDARD)\n\n";
      for(int j=0;j<size;j++)
   {
    cout<<tmparr[j];
   }

//METHOD 2 -:
 cout<<"\n-----------\n";

 cout<<"\nMETHOD -2 (BETTER ALT)\n";


    rotate(arr.begin(),arr.begin() +size-k,arr.end());//make sure you apply std:: in first while putting this on leetcode cause of fucntion name mismatch
   
      for(int j=0;j<size;j++)
   {
    cout<<arr[j];
   }

    
}