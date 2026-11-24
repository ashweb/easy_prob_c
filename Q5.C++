/*The Problem:
Write a C program that takes an array of integers (size entered by the user) 
and reverses it in-place.

In-place means you cannot use a second temporary array to copy things over. 
You have to swap the elements directly inside the original array!

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
   int st=0,end=num-1;
   while(st<=end)
   {
      swap(vec[st],vec[end]);
      st++;end--;
   }
for(int i=0;i<num;i++)
{
   cout<<vec[i];
}


   return 0;
}
