#include <iostream>
#include <vector>
using namespace std;
vector<int>vec = {4,6,2,1,5,3};
int main()
{
    cout<<"\n---------BUBBLE SORT-O(n^2)-----------\n";
   for(int i=0;i<vec.size()-1;i++)
   {
       bool isswap = false;   //OPTIMIZATION PROCESS
    for(int j=0;j<vec.size()-i-1;j++)
    {
        if(vec.at(j)>vec.at(j+1))
        {
            swap(vec.at(j),vec.at(j+1));
            isswap = true;
        }
    }
       if(!isswap)

       {
           break;
       }
   }
   for(int i=0;i<vec.size();i++)
   {
    cout<<vec.at(i)<<" ";
   }
//-----------------------------------------------------------------
 cout<<"\n---------SELECTION SORT-O(n^2)-----------\n";
for(int i =0; i<vec.size()-1;i++)
    {
        int smallest = vec.at(i);
        for(int j = i+1;j<vec.size();j++)
            {
                if(vec.at(j)<smallest)
                {
                    smallest = vec.at(j);
                }
            }
        swap(vec.at(i),smallest);
    }
     for(int i=0;i<vec.size();i++)
   {
    cout<<vec.at(i)<<" ";
   }
//-----------------------------------------------------------------

 cout<<"\n---------INSERTION SORT-O(n^2)-----------\n";

    for(int i = 1; i<vec.size();i++)
        {
            int curr = vec.at(i);
            int prev = i-1;
            while(prev>=0 && vec.at(prev)>curr)
                {
                    vec.at(prev+1) == vec.at(prev);
                    prev--;
                }
            vec.at(prev+1)=curr;
        }
       for(int i=0;i<vec.size();i++)
   {
    cout<<vec.at(i)<<" ";
   }

//-----------------------------------------------------------------

 cout<<"\n---------MERGE SORT-O(n^2)-----------\n";
    
}