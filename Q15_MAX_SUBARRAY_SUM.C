//THE PROGRAM-
//TO FIND THE MAXIMUM OF SUB ARRAY IN A GIVEN ARRAY/ OR INPUTTED ARRAY - USE VECTORS

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    
     vector<int>vec = {-2,1,-3,4,-1,2,1,-5,4};
    int size = vec.size();
    

    for(int st = 0; st<size; st++)
        {
            for(int end = st; end<size; end++)

                {
                    for(int i = st; i<=end; i++)

                        {
                            cout<<vec.at(i)<<",";
                        }
                    cout<<"   ";
                }
            cout<<endl;
        }

 cout<<"\n"<<"\n-----MAXIMUM SUBARRAY----\n";
    
int curr_sum = 0;
int maxsum = vec.at(0);


    for(int st = 0; st<size; st++)
        {
            curr_sum = 0;
            for(int end = st; end<size; end++)

                {
                    curr_sum += vec.at(end);
                   maxsum  = max(curr_sum,maxsum);
                }
            
            
            cout<<endl;
        }

    cout<<maxsum;
    cout<<"\n-----VIA KADANE'S ALGORITHM------\n";
int curr_Sum = vec[0];
 maxsum = vec.at(0);
     for(int st = 0; st<size; st++)
         {
             curr_Sum += vec.at(st);
             if(curr_Sum < 0)
             {
                 curr_Sum = 0;
             }
             maxsum = max(curr_Sum,maxsum);
         }
    cout<<"\n"<<maxsum;



    
}