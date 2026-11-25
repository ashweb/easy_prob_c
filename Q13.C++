/*
THE PROBLEM;
TAKE SET OF NUMBERS AS INPUT FROM THE USER AND CHECK IF ANY NUMBER IN NON REPEATED IF THERE 
IS ANY NUMBER NON REPEATED PRINT THAT IN PROPER WAY
USING BITWISE XOR LOGIC WE KNOW -:
0^0 - 0
1^0 - 1
0^1 - 1
1^1 - 0
Rule of thumb: same bits give 0, different bits give 1

N^0 - UNCHANGED(N XOR WITH 0 UNCHANGED)
N^0 - CHANGED(N XOR WITH 1 CHANGED)

*/

#include <iostream>
#include <vector>
using namespace std;
vector<int>arr;
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
      arr.push_back(x);
   }
//-----------------------------------------------------------------------
for(int y=0;y<num;y++)
        {
          test = test^arr[y];
        }
         if(test != 0)
        {
           cout<<"UNIQUE ELEMENT IS "<<test; 
        }
        else
        {
           cout<<"NO UNIQUE NUMBER IN YOUR ARRAY";
        }
return 0;

}
