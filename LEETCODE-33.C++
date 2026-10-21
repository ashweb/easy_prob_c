//LEETCODE -33




#include <iostream>
#include <vector>
using namespace std;
vector<int>vec;
int vec_size;
int tar;
int main()
{
cout<<"ENTER YOUR ARRAY SIZE ";
    cin>>vec_size;
    cout<<"ENTER YOUR ARRAY ELEMENTS\n";
    for(int i=0;i<vec_size;i++)
        {
            int x ;
            cin>>x;
            vec.push_back(x);
        }
    cout<<"ENTER YOUR TARGET ELEMENT ";
    cin>>tar;
    int st= 0;
    int end = vec_size-1;
    while(st<=end)
        {
        int mid = st + (end-st)/2;
            if(vec.at(mid)==tar)
            {
                return mid;
            }
           
            if(vec.at(mid)>=vec.at(st))//LEFT SIDE IS SORTED
            {
            if(tar>=vec.at(st)&& tar<=vec.at(mid))//checking if our target lies in the LEFT side 
            {
                end = mid-1;
            }
                else
            {
                st = mid+1;
            }}

           else if(vec.at(mid)<=vec.at(end))//RIGHT SIDE IS SORTED
            {
            if(tar>=vec.at(mid)&& tar<=vec.at(end))//checking if our target lies in the RIGHT side 
            {
                st = mid+1;
            }
                else
            {
                end = mid-1;
            }}

            
        }





    
}