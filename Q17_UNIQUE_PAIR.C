/*
THE PROBLEM
TO FIND THE UNIQUE PAIR IN GIVEN ARRAY\VECTOR USING BRUTE FORCE AND THE MOST OPTIMISED METHOD
*/
#include <iostream>
#include <vector>
using namespace std;
vector<int>vex = {1,2,3,6};
vector<int>arr(0,0) ;
int target = 7;
int main()
{
    cout<<"\n\n--------using BRUTE FORCE METHOD- O(n^2)------\n\n";
    int size = vex.size();
    for(int i = 0; i<size; i++)
        {
           for(int j = i+1; j<size; j++)
               {
                   if(vex.at(i) + vex.at(j) == target)
                   {
                       arr.push_back(vex.at(i));
                       arr.push_back(vex.at(j));
                   }
               }
            
        }
int count=0;
    int size2 = arr.size();
    for(int i =0; i< size2-1;i++)
        {
            cout<<arr.at(i)<<", "<<arr.at(i+1);
        }
    
cout<<"\n\n--------using TWO POINTERS METHOD INSTEAD- O(n)------\n\n";
int a=vex.at(0);
int b =vex.at(size-1);
    int num =1;
    while(a+b != target)
        {
            
            int c = a+b;
            if(c>target)
            {
                b=vex.at(size-1-num);
            }
           else if(c<target)
            {
                a=vex.at(0+num);
            }
            else if(c==target)
            {
               break;
            }
        }
    cout<<"\n"<<a<<", "<<b;
    
    


    
}