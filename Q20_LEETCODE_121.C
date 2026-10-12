#include <iostream>
#include <vector>

using namespace std;

vector<int>price;
int main()
{
    long num_arr;
    
    int max_profit=0;
    cout<<"ENTER YOUR NUMBER OF ARRAY ELEMENTS ";
    cin>>num_arr;
    cout<<"\nENTER YOUR ARRAY ELEMENT\n";
    for(int i =0; i<num_arr;i++)
        { 
            int x=0;
            cin>>x;
            price.push_back(x);
        }
    int best_buy= price.at(0);
for(int i=0;i<num_arr;i++)
    {
       

        if(price.at(i)>best_buy)
        {
              max_profit = max(max_profit,price.at(i)-best_buy);  
        }
 best_buy = min(best_buy, price.at(i));
        
    }
    cout<<"\nMAX PROFIT IS "<<max_profit;
        cout<<"\nBEST BUY IS "<<best_buy;

  
}