
/*
The Problem:
Write a C program that takes an array of integers (size entered by the user), 
which may contain a mix of numbers and zeros.

Rearrange the elements in-place so that all zeros are pushed to the end of the array.

The non-zero elements must keep their original relative order.

Example:

Initial Array: [0, 1, 9, 0, 4, -5, 0]

Expected Output: [1, 9, 4, -5, 0, 0, 0]
*/
#include <iostream>
#include <vector>
using namespace std;
vector<int>vec;
int num;


int main()
{
   cout<<"ENTER YOUR ARRAY SIZE ";
   cin>>num;
   cout<<"ENTER YOUR ARRAY HERE\n";
   for(int i=0;i<num;i++)
   {
      int x;
      cin>>x;
      vec.push_back(x);
   }
   int end=0;
for(int i=num-1;i>=0;i--)
{
   
   if(vec[i]==0)
   {
      swap(vec[i],vec[num-1-end]);
      end++;
   }
}
for(int i=0;i<num;i++)
{
cout<<vec[i];
}
}