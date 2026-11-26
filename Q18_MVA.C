/*
THE PROBLEM
FIND THE MOST FREQUENT NUMBER IN AN ARRAY WHOSE FREQUENCY SHOULD BE GREATER THAN HALF THE SIZE OF AN ARRAY
EG   : {1, 1, 1, 2, 2, 2,1}              - ANS IS 1 (ITS THE MOST FREQUENT) 
HINT : USE SORTING THEN FIND             - SLIGHTLY LESS OPTIMISED
HINT : USE MVA(MOORE'S VOTING ALRORITHM) - MOST OPTIMISED- (WORKS ON UNSORTED ARRAY)
--------------------------------------------------------------------------------------
DRAWBACK OF MVA - MVA WORKS OR GIVES CORRECT ANSWER ONLY IF SOME ELEMENT DOES APPEAR MORE THAN
HALF THE NUMBER OF ELEMENTS IN ARRAY ELSE IT GIVES WRONG ANS SO ALWAYS CHECK BY APPLYING LAST
SINGLE FOR LOOP IF THAT PERTICULAR ELEMENT DOES OCCUR MORE THAN REQUIRED
*/

#include <iostream>
#include <vector>
using namespace std;
vector<int>vec;
int num=0;


int main()
{
   here1:
   cout<<"ENTER YOUR ARRAY SIZE ";
   cin>>num;
   if(num<2)
   {
    cout<<"ENTER MORE THAN 1 NUMBER TO CONTINUE\n";
    goto here1;
   }
   
   cout<<"ENTER YOUR ARRAY HERE\n";
   for(int i=0;i<num;i++)
   {
      int x;
      cin>>x;
      vec.push_back(x);
   }
//-----------------------------------------------------------------------
//METHOD -1 #
//MOORE'S VOTING ALGORITHM
int freq =0;
int ans =0;
for(int i=0;i<num;i++)
{
   if(freq ==0)
            {
               ans = vec[i];
            }
          vec[i]==ans?freq++ : freq--;
}
//checking if answer is correct
int count =0;
     for(int i=0;i<num;i++)
      {
                 if(vec[i]==ans)
                         {
                            count++;
                         }
      }
  if(count<=num/2)
      {
         cout<<"NO MAJORITY";
         return 1;
      }
             cout<<"\nANS IS "<<ans;
}
//METHOD 2 -:
//SORTING TO FIND THE MAJORITY


