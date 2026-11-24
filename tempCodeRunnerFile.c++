/*
The Problem:
Write a C program that takes an array of integers (size entered by the user) 
and checks whether the array is a palindrome 
If it's a palindrome, print "Palindrome".
If it breaks symmetry anywhere, print "Not a Palindrome".

Example 1:
Array: [1, 2, 3, 2, 1]
Expected Output: Palindrome
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
   cout<<"ENTER YOUR ARRAY\n";
   for(int i=0;i<num;i++)
   {
      int x;
      cin>>x;
      vec.push_back(x);
   }
   int st=0;
   int end=num-1;
   int count=0;
   while(st<end)//dont put equals else count wont be equal if num is odd
   {
      if(vec[st]==vec[end])
      {
         count++;
      }
      st++;end--;
   }
   if(count == (num/2) )
   {
      cout<<"YOUR ARRAY IS A PALINDROME";
   }
   else
   {
      cout<<"ARRAY IS NOT A PALINDROME";
   }
}