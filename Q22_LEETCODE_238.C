#include <iostream>
#include <vector>
using namespace std;
vector<int>vec = {1,2,3,4}; 
vector<int>ans; 
int main()
{
    int size = vec.size();


    cout<<"\n----------------BRUTE FORCE APPROCH-O(n^2)-----------\n";
    for(int i  =0; i<size;i++)
        {
            int product =1;
            for(int j  =0; j<size;j++)
                { 
                    if(vec.at(i) != vec.at(j))
                    {
                        product *= vec.at(j);                      
                    }
                }
            ans.push_back(product);
        }
    for(int i = 0; i< ans.size();i++)
        {
            cout<<ans.at(i)<<" ";
        }
    cout<<"\n--------------BETTER ALTERNATIVE-O(n)-----------\n"; 
    
    


    
}