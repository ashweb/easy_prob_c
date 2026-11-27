/*THE PROBLEM -:
FIND THE MAX AREA THE ARRAY OF BUCKET KINDA CAN CONTAIN
EG: Input: height = [1,8,6,2,5,4,8,3,7]
    Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, 
the max area of water (blue section) the container can contain is 49.
*/
#include <iostream>
#include <vector>
using namespace std;
vector<int>vec;
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
//----------------------TWO POINTER'S APPROACH-------------------------------------------
int left_ptr = 0;
int right_ptr =num-1;
int maxwater =0; 
while(left_ptr<right_ptr)
{
   //if vec[left_ptr] = vec[right_ptr] then min value returns first argument ans area still comes satisfied
   int base = right_ptr-left_ptr;
   int area = min(vec[left_ptr],vec[right_ptr])*base;
   maxwater = max(maxwater,area);
   vec[left_ptr]<=vec[right_ptr] ? left_ptr++ : right_ptr--;
}
cout<<"\nMAX AREA OF WATER IS : "<<maxwater;
}