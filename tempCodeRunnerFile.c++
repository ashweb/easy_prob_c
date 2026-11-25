/*
THE PROBLEM :
CALCULATE TOTAL SUBARRAY INSIDE ARRAY ENTERED BY INPUT AND PRINT ALL THOSE ARRAY
*/

#include <iostream>
#include <vector>
using namespace std;
vector<int>vec;
int num=0;
int test=0;

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
for(int start =0;start<num;start++)
{
   for(int end =0;end<num;end++)
   {
      if(end<start)
      {
         cout<<"   ";
         continue;
      }
      cout<<"[ ";
      for(int ptr =start;ptr<=end;ptr++)
      {
         cout<<vec[ptr];
      }
      cout<<" ]";
   }
   cout<<endl;
}
return 0;

}
