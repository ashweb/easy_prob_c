
/*
The Problem:
Write a C program that takes an array of integers (size entered by the user)
 and finds both the maximum (largest) and minimum (smallest) values in that array.

Print out both the maximum and minimum numbers found.
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
   if(num<2)
   {
      cout<<"GIVE NUMBER MORE THAN 1";
      return 1;
   }
   cout<<"ENTER YOUR ARRAY HERE\n";
   for(int i=0;i<num;i++)
   {
      int x;
      cin>>x;
      vec.push_back(x);
   }
   int larg=0;
   int min=vec[0];
for(int i=0;i<num;i++)
   {
      if(vec[i]>=larg)
      {
         larg = vec[i];
      }
      if(vec[i]<=min)
      {
         min = vec[i];
      }
   }
   cout<<"LARGEST : "<<larg<<"\nMINIMUM : "<<min;

}