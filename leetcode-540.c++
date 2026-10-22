#include <iostream>
#include <vector>
using namespace std;
vector<int>nums;
int vec_size;
int main()
{
    cout<<"ENTER YOUR ARRAY SIZE ";
    cin>>vec_size;
    cout<<"ENTER YOUR ARRAY ELEMENTS\n";
    for(int i =0;i<vec_size;i++)
        {
            int x;
            cin>>x;
            nums.push_back(x);
        }
   cout<<"\nMOST OPTIMISED APPROCH - BIN SEARCH!!\n";
    int st =0;
    int end = nums.size()-1;
    while(st<=end)
        {
            int mid = st + (end-st)/2;
                if(nums.at(mid)!=nums.at(mid-1)&&nums.at(mid)!=nums.at(mid+1))
                {
                    cout<<nums.at(mid);
                    return 0;
                }
           
            if(mid%2==0)
            {
                if(nums.at(mid)==nums.at(mid+1))
                {
                    st=mid+1;
                }
                else
                {
                    end = mid-1;
                }

            }
                if(mid%2!=0)
               
            {
                if(nums.at(mid)==nums.at(mid-1))
                {
                    st=mid+1;
                }
                else
                {
                    end=mid-1;
                }
            }
        }
    


    
} 