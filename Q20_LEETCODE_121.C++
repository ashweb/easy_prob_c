/*THE PROBLEM -:
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock 
and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.
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
int best_buy = vec[0];
int max_profit = 0;
for(int i=0;i<num;i++)
{
   if(vec[i]>best_buy)
   {
      max_profit = max(max_profit,vec[i]-best_buy);
   }
   best_buy = min(best_buy,vec[i]);
}
cout<<"\nMAX PROFIT IS "<<max_profit;
        cout<<"\nBEST BUY IS "<<best_buy;

}