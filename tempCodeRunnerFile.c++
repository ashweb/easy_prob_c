/*
The Problem:
Write a C program that takes an array of integers (size entered by the user) 
and checks whether the array is sorted or not in decreasing or increasing order (as per user demand).
ask user if he wanna sort it into any form then do it!
If any element breaks that rule, print "Not Sorted".
and then at last sort in the following way asked;
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int>vec;
void printer(int num,vector<int>&vec);
int num;

int main()

{here1:
   cout<<"ENTER YOUR ARRAY SIZE ";
   cin>>num;
   
   cout<<"ENTER YOUR ARRAY HERE\n";
   for(int i=0;i<num;i++)
   {
      int x;
      cin>>x;
      vec.push_back(x);
   }
here2:
int menu=0;
   cout<<"\n\n----*******MENU*******-----\n\nCHECK YOUR ARRAY SORTNG(PRESS 1)\nCHANGE ITS ORDER(PRESS 2)\nENTER YOUR ARRAY AGAIN(PRESS 3)\nRESTART MENU(PRESS 4)\nEXIT(PRESS 0)\n";
   cin>>menu;
   switch(menu)
   {
      case 1 : 
      {
int incr=0;
int decr=0;
for(int i =0; i<num-1;i++)
{
   
   if(vec[i+1]>vec[i])
   {
      incr++;
   }
    if(vec[i+1]<vec[i])
   {
      decr++;
   }
}
if(incr == num-1)
{
   cout<<"YOUR ARRAY IS IN INCREASING ORDER";
}
else if(decr == num-1)
{
   cout<<"YOUR ARRAY IS IN DECREASING ORDER";
}
else 
{
   cout<<"ARRAY NOT SORTED";
}
      }goto here2;
      break;
   case 2 : 
   {
      reverse(vec.begin(),vec.end());

      printer(num,vec);
   }goto here2;
   break;
   case 3 :
   {
      vec.clear();
         goto  here1;
   }goto here2;
   break;
   case 4 :
   {
      goto  here2;
   }
   break;
   case 0 :
   {
     return 1;
   }
   break;
   default : cout<<"\nENTER MENU CORRECTLY\n";goto  here2;
   }
return 0;
}
void printer(int num,vector<int>&vec)
{
   cout<<"\n[ ";
   for(int i=0 ;i<num;i++)
   {
      cout<<vec[i]<<" ";
   }
   cout<<" ]\n";
}