/*
You are given an array (nums) with n objects colored red, white, or blue, 
sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.
*/
#include <iostream>
#include <vector>
using namespace std;
vector<int>vec = {2,1,0,2,1,0,2};

int count0 =0,count1 =0,count2=0;

int main()
{
     cout<<"\n---------------BRUTE FORCE METHOD -O(NLOG(N))-----------\n";
    for(int i = 0; i<vec.size();i++)
    {
if(vec.at(i)==0)
{
    count0++;
}
else if(vec.at(i)==1)
{
    count1++;
}
else if(vec.at(i)==2)
{
    count2++;
}
    }
for(int i=0;i<count0;i++)
{
    vec[i]=0;
}
for(int i=count0;i<count1+count0;i++)
{
    vec[i]=1;
}
for(int i=count1+count0;i<=count2+count1+count0;i++)
{
     vec[i]=2;
}
for(int i =0; i<vec.size();i++)
{
    cout<<vec.at(i)<<" ";
}
   /*
    cout<<"\n--------ANOTHER BRUTE FORCE METHOD -O(NLOG(N))-----------\n";
    sort(vec.begin(), vec.end());
    for(int i =0; i<vec.size();i++)
{
    cout<<vec.at(i)<<" ";
}
*/
    cout<<"\n-----MOST OPTIMISED METHOD - DUTCH NATIONAL FLAG ALGORITHM(DNF) -O(n)----\n";
int n = vec.size();
    int low =0,mid=0,high = n-1;
    while(mid<=high)
        {
            if(vec.at(mid)==0)
            {
                swap(vec.at(low),vec.at(mid));
                mid++;
                low++;
            }
            else if(vec.at(mid)==1)
            {
                mid++;
            }
            else 
            {
                swap(vec.at(high),vec.at(mid));
                high--;
            }
        }
    for(int i =0; i<vec.size();i++)
{
    cout<<vec.at(i)<<" ";
}
}