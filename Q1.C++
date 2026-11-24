/*Write a C program that takes an array of integers (size entered by the user) 
and finds all the peak elements in it then find the e\ultimate peak element in it.

A peak element is an element that is greater than or equal to its immediate neighbors.

-> For the first element, it only needs to be greater than or equal to the second element.
=> For the last element, it only needs to be greater than or equal to the second-to-last element.
Example: If the array is [1, 3, 20, 4, 1, 0, 5], 
the peak is 20 and 5.
*/
#include <iostream>
#include <vector>
using namespace std;
vector<int>h1;
int size;

int main()
{
    cout<<"ENTER YOUR ARRAY SIZE : ";
    cin>>size;
    cout<<"ENTER YOUT ARRAY HERE\n";
    for(int i =0;i<size;i++)
    {
        int x=0;
        cin>>x;
        h1.push_back(x);
    }
    int st=0;
for(int i=0;i<size;i++)
{
    if(i==0)
    {
        if(h1[i]>=h1[i+1])
        {
            cout<<"\n\n1st peak element is : "<<h1[i];
            if(h1[i]>=st)
            {
                st = h1[i];
            }
        } 
        continue;
    }
    if(i != size-1)
    {
    if(h1[i]>=h1[i+1] && h1[i]>=h1[i-1])
    {
        cout<<"\n\nnext peak element is : "<<h1[i];
         if(h1[i]>=st)
            {
                st = h1[i];
            }
    }
    }   
     if(i==size-1)
    {
        if(h1[i]>=h1[i-1])
        {
            cout<<"\n\nlast peak element : "<<h1[i];
             if(h1[i]>=st)
            {
                st = h1[i];
            }
        } 
        
    } 
    
    

}
cout<<"\n\nHENCE FINAL LARGEST AMOUNT IS "<<st;
   
}