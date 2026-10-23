#include <iostream>
#include <vector>
using namespace std;
vector<int>vec = {4,6,2,1,5,3};
int main()
{
    int n = vec.size();
    cout<<"\n---------BUBBLE SORT-O(n^2)-----------\n";
    //ASCENDING ORDER
    for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1;j++)
                {
                    if(vec.at(i)<=vec.at(j))
                    {
                        swap(vec.at(i),vec.at(j));
                    }
                }
        }
    for(int i=0;i<=vec.size();i++)
        {
            cout<<" "<<vec[i];
        }
//-----------------------------------------------------------------
 cout<<"\n---------SELECTION SORT-O(n^2)-----------\n";


 cout<<"\n---------INSERTION SORT-O(n^2)-----------\n";


 cout<<"\n---------MERGE SORT-O(n^2)-----------\n";
    
}