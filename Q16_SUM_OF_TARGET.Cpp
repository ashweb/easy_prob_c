/*
THE PROBLEM;
GIVEN ARRAR\VECTOR ITS PAIR OF DIGIT EQUALS TO TARGET, DISPLAY ALL THOSE PAIR CLEANLY;
non repetetive-
eg: [3,4,1,5,6,2] target = 7 then
[3,4]
[6,1]
[5,2]
*/

#include <iostream>
#include <vector>
using namespace std;
vector<int>vec;
int num;
int target;

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
cout<<"PAIR'S ARE -: \n";
for(int i=0;i<num;i++)
{
for(int j=i+1;j<num;j++)
{
   
   if(i==j)
   {
      continue;
   }
   if(vec[i]+vec[j] == target)
   {
      cout<<"[ "<<vec[i]<<","<<vec[j]<<" ]"<<endl;
   }
}
}


}
