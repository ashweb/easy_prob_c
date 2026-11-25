//manipulating an array
/*
TAKE AN ARRAY INPUT FROM USER AND SEPERATE ALL EVEN AS WELL ODD NUMBERS 
INTO EACH DIFFERENT TEMP ARRAY AND PRINT THOSE ARRAY
*/

#include <iostream>
#include <vector>
using namespace std;
vector<int>vec;
vector<int>even;
vector<int>odd;
void printer(int num,vector<int>&vec);
int num=0;

int main()
{
   here1:
    cout<<"ENTER YOUR ARRAY SIZE ";
   cin>>num;
   if(num<2)
   {
    cout<<"ENTER MORE THAN 1 NUMBER TO CONTINUE\n";
    goto here1;
   }
   
   cout<<"ENTER YOUR ARRAY HERE\n";
   for(int i=0;i<num;i++)
   {
      int x;
      cin>>x;
      vec.push_back(x);
   }
//-----------------------------------------------------------------------
for(int i=0;i<num;i++)
{
   if(vec[i] %2 ==0)
   {
      even.push_back(vec[i]);
   }
   else if(vec[i] %2 !=0)
   {
       odd.push_back(vec[i]);
   }
}
printer(sizeof(even)/sizeof(even[0]),even);
printer(sizeof(odd)/sizeof(odd[0]),odd);
}
void printer(int size_taken,vector<int>&even_odd)
{
   cout<<"[ ";
   for(int i=0 ;i <size_taken;i++)
   {
      cout<<even_odd[i]<<" ";
   }
   cout<<" ]";
}
