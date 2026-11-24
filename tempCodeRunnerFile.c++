/*
The Problem:
Write a C program that takes an array of integers and an integer K (entered by the user). 
Rotate the elements of the array to the right by K positions.

Example: If your array is [1, 2, 3, 4, 5] and K = 2, 
shifting it to the right by 2 positions means the last two elements (4 and 5) 
wrap around to the front, resulting in [4, 5, 1, 2, 3].

*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int>vec;
int k,size;
int main()
{
   cout<<"ENTER YOUR ARRAY SIZE : ";
    cin>>size;
    cout<<"ENTER YOUR k : ";
    cin>>k;
    cout<<"ENTER YOUR ARRAY HERE\n";
   for(int i=0;i<size;i++)
   {
    int x;
    cin>>x;
    vec.push_back(x);
   }
   int i=0;
   
   rotate(vec.begin(),vec.begin() +size-k,vec.end());
   
   
   cout<<"--------------";
   for(int j=0;j<size;j++)
   {
    cout<<vec[j];
   }
}