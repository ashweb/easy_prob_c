//THE PROGRAM-
//TO FIND THE SUM OF MAXIMUM SUB ARRAY IN A GIVEN ARRAY/ OR INPUTTED ARRAY - USE VECTORS


#include <iostream>
#include <vector>
using namespace std;
vector<int>vec;
int num;

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
//FINDING SUM OF MAXIMUM SUBARRAY USING ---KADANE'S ALGORITHM----
int curr_sum=0;
int max_sum=0;
for(int i=0;i<num;i++)
{
   curr_sum += vec[i];
   if(curr_sum <0)
   {
      curr_sum=0;
   }
   max_sum = max(curr_sum,max_sum);
}
cout<<"SUM OF MAXIMUM SUBARRAY : "<<max_sum;
}
