/*
THE PROBLEM;
GIVEN ARRAR\VECTOR ITS'S PAIR OF DIGIT EQUALS TO TARGET, DISPLAY ALL THOSE PAIR CLEANLY;
*/

#include <iostream>
#include <vector>
using namespace std;
vector<int>vex = {1,2,3,4,5};
vector<int>arr(0,0) ;
int target = 7;
int main()
{
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
    for(int i =0; i< size2;i++)
        {
            if(count==0)
            {
                cout<<"[";
            }
             count++;
            if(count != 1 && count != 0){
            if((count+1)%2 == 0)
            {
                cout<<"[";
            }
            }
            

    cout<<arr.at(i);
           
            
                if(count != 0){
            if(count%2 == 0)
            {
                cout<<"] ";
            }
                }
            
            if(count%2 !=0)
            {
                cout<<",";
            }
           
        }
    

    
    


    
}