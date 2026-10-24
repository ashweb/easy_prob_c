/*
Aggressive Cows Problem
Assign C cows to N stalls such that min distance between them is largest possible.
Return largest minimum distance.   
N = 5   arr = [1, 2, 8, 4, 9]   C = 3   
*/

#include <iostream>
#include <vector>
using namespace std;
vector<int>vec;
int cows;
int size1;
bool isvalid(vector<int>&vec,int maxalloweddist,int givencows)
{
    int cows =1, dist =0;
    for(int i=0;i<vec.size();i++)
    {
        if(vec.at(i)+dist<=maxalloweddist)
        {
            dist += vec.at(i);
        }
        else
        {
            cows++;
            dist = vec.at(i);
        }
    }
    return cows>givencows?false:true;
}
int main()
{
cout<<"ENTER YOUR ARRAY SIZE ";
    cin>>size1;
    cout<<"ENTER YOUR ARRAY ELEMENTS\n";
    for(int i =0 ;i<size1;i++)
        {
            int x;
            cin>>x;
            vec.push_back(x);
        }
    cout<<"ENTER NUMBER OF COWS ";
    cin>>cows;
    int sum=0;
    for(int i=0;i<vec.size();i++)
    {
        sum += vec.at(i);
    }
    int st=0;
    int end = sum;
    int ans =0;
    while(st<=end)
    {
        int mid = st + (end-st)/2;
        if(isvalid(vec,mid,cows))
        {
            ans = mid;
            end = mid-1;
        }
        else
        {
            st = mid+1;
        }
    }
    cout<<ans;
}