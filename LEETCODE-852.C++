#include <iostream>
#include <vector>
using namespace std;
vector<int>arr;
int vec_size;
int main()
{
    cout<<"ENTER YOUR ARRAY SIZE ";
    cin>>vec_size;
    cout<<"ENTER YOUR MOUNTAIN ARRAY ELEMENTS\n";
    for(int i =0;i<vec_size;i++)
        {
            int x;
            cin>>x;
            vec.push_back(x);
        }
   
    
    int st =1 ;
    int end = arr.size()-2;
    while(st<=end)
        {
            int mid = st + (end-st)/2;
            if(arr.at(mid)>=arr.at(mid-1)&&arr.at(mid)>=arr.at(mid+1))
            {
                
                return mid;
            }
        if(arr.at(mid)>=arr.at(mid-1)&&arr.at(mid)<=arr.at(mid+1))
        {
            st=mid+1;
        }
            if(arr.at(mid)<=arr.at(mid-1)&&arr.at(mid)>=arr.at(mid+1))
        {
            end=mid-1;
        }
            
        }


    
}