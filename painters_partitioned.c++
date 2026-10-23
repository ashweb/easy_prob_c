/*
Painter's Partition Problem   
Given are N boards of length of each given in the form of array, and M painters, 
such that each painter takes 1 unit of time to paint 1 unit of the board.   
The task is to find the minimum time to paint all boards under the constraints that 
any painter will only paint continuous sections of boards   
*/

#include <iostream>
#include <vector>
using namespace std;
vector<int>vec;
int vec_size;
int painter;

bool midcheck(vector<int>&vec,int m, int mid)
{
    int painter=1,time=0;
    for(int i=0;i<vec.size();i++)
    {
        if(time+vec.at(i)<=mid)
        {
            time += vec.at(i);
        }
        else 
        {
            painter++;
            time =vec.at(i);
        }
    }
         return painter>m?false:true;
    }
   

int main()
{
    cout<<"ENTER THE SIZE OF ARRAY ";
    cin>>vec_size;
    cout<<"ENTER ARRAY ELEMENTS\n";
    for(int i =0; i<vec_size;i++)
{
    int x;
    cin>>x;
    vec.push_back(x);
}
int sum=0;
cout<<"\nENTER NUMBER OF painters ";
cin>>painter;
if(painter>vec.size())
{
    return -1;
}
for(int i=0;i<vec_size;i++)
{
    sum += vec.at(i);
}

int st=0;
int end = sum;
int ans = -1;
while(st<end)
{

    int mid = st + (end-st)/2;
    if(midcheck(vec,painter,mid))
    {
        ans = mid;
       end = mid-1; 
    }
    else
    {
        st = mid+1;
    }
    
}
    cout<<"\nMINIMUM OF MAXIMUM NUMBER OF TIME TO A PAINTER IS "<<ans;
}
