/*
The Problem:
Write a C program that takes an array of integers (size entered by the user).

Count the occurrence (frequency) of each unique element in the array 
*/
#include <iostream>
#include <vector>
using namespace std;
vector<int>vec;
int num;
int count=0;
int freq=0;
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
   for(int i=0;i<num;i++)
   {count=0;
      for(int j=0; j<num;j++)
      {
         if(j==i)
         {
            continue;
         }
         if(vec[j]==vec[i])
         {
            count=0;
            break;
         }
         if(vec[i] != vec[j])
         {
            count++;
         }
      }
      if(count >0)
      {
         cout<<"\nYOUR UNIQUE ELEMENT IS : "<<vec[i];
         freq++;
      }
   }
   cout<<"\nTOTAL FREQUENCY OF ALL UNIQUE ELEMENT : "<<freq;
}