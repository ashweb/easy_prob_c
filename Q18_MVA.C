/*
THE PROBLEM
FIND THE MOST FREQUENT NUMBER IN AN ARRAY WHICH SHOULD BE GREATER THAN HALF OF SIZE OF AN ARRAY
*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<int> vec = {1, 1, 1, 2, 2, 2,1};
int n = vec.size();
    int count =0;
    int maj=0;

cout<<"\n\n-----BRUTE FORCE METHOD-O(n^2)------\n";
    for(int i = 0; i<n; i++)
        {
            count =0;
            for(int j=i;j<n;j++)
                {
                    if(vec.at(i)==vec.at(j))
                    {
                        count++;
                    }
                }
            
            if(count > n/2)
            {
                 maj = vec.at(i);
                break;
            }
            
        }
    cout<<maj;
    cout<<"\n\n--------SORTING AND FINDING-O(nlogn)+O(n) = O(nlogn)--------\n";
//METHOD 2
    // SORTING

    for(int i =0; i<n; i++)
        {
        for(int j=i;j<n;j++)
            {
            if(vec.at(i)>vec.at(j))
            {
        int temp = vec.at(i);
         vec.at(i) = vec.at(j);
         vec.at(j) = temp;
            }
            
            }
        }
   
    cout<<"\n";
   
     cout<<"\n";
     
         count = 0;  
      for(int i = 0; i<n-1;i++)
          {
              
         if(vec.at(i) == vec.at(i+1))
         {
             count++;
             
         }
              if(count > n/2-1)
              {
                  cout<<"\n"<<vec.at(i);
                  break;
              }
         if(vec.at(i) != vec.at(i+1))
        {
            count = 0;
        }
             
          }
    //MOORE'S ALGORITHM-:
     cout<<"\n\n------------MOORE'S VOTING ALGORITHM-O(n)------------\n";
int freq=0,ans=0;
    for(int i = 0; i< n; i++)
        {
            if(freq == 0)
            {
                ans = vec.at(i);
            }
            
            if(ans == vec.at(i))
            {
                freq++;            
            }else{
              freq--;
            }
}

cout<<"\n"<<ans;

    
}
