/*
THE PROBLEM
TO FIND THE UNIQUE PAIR IN GIVEN SORTED ARRAY\VECTOR USING THE MOST OPTIMISED METHOD in O(N) time and space
NOTE: There is single pair in array which is equal to target;
eg: [1,2,4,6] target : 7
pair - [1,6]
hint : using two pointer's method
*/

#include <iostream>
#include <vector>
using namespace std;
vector<int>vec;
int num=0;
int target=0;

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
   cout<<"ENTER YOUR TARGET NUMBER: ";
   cin>>target;
   
   cout<<"ENTER YOUR ARRAY HERE\n";
   for(int i=0;i<num;i++)
   {
      int x;
      cin>>x;
      vec.push_back(x);
   }
//-----------------------------------------------------------------------
int ptr_1 = 0;
int ptr_2 = num-1;
while(ptr_1<ptr_2)
{
   if(vec[ptr_1]+vec[ptr_2]>target)
   {
      ptr_2--;
   }
  else if(vec[ptr_1]+vec[ptr_2]<target)
   {
      ptr_1++;
   }
   else if(vec[ptr_1]+vec[ptr_2]==target)
   {
      cout<<"[ "<<vec[ptr_1]<<","<<vec[ptr_2]<<" ]"<<endl;
      break;
   }
}
}

