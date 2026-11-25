/*
The Problem:
Write a C program that takes an sorted array of size N - 1. 
The array used to contain sorted distinct integers ranging from 1 to N 
(meaning one number is completely missing from the sequence).
Find and print the missing number.
Example:Array Size: 4 (so N = 5, meaning numbers should range from 1 to 5)
Array Elements: [1, 2, 4, 5]  Expected Output: The missing number is 3
*/
#include <iostream>
#include <vector>
using namespace std;
vector<int>vec;
int num;
int sum_total =0;
int sum_array=0;
int main()
{
   cout<<"ENTER YOUR MISSING ARRAY SIZE ";
   cin>>num;
   cout<<"ENTER YOUR N-1 ARRAY HERE\n";
   for(int i=0;i<num;i++)
   {
      int x;
      cin>>x;
      vec.push_back(x);
   }
   sum_total = num*(num+1)/2;
   for(int i=0;i<num;i++)
   {
      sum_array += vec[i];
   }
   cout<<"\nTHE MISSING NUMBER IS "<<sum_array-sum_total;
   return 0;
}