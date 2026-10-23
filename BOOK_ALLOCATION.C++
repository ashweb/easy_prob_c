/*
There are N books, each ith book has A[i] number of pages.  
You have to allocate books to M number of students so that the maximum number of pages allocated to a student is minimum.   
Each book should be allocated to a student.   
Each student has to be allocated at least one book.   
Allotment should be in contiguous order.   
Calculate and return that minimum possible number.   
Return -1 if a valid assignment is not possible.   
*/

#include <iostream>
#include <vector>
using namespace std;
vector<int>vec;
int vec_size;
int student;

bool midcheck(vector<int>&vec,int m, int mid)
{
    int student=1,pages=0;
    for(int i=0;i<vec.size();i++)
    {
        if(pages+vec.at(i)<=mid)
        {
            pages += vec.at(i);
        }
        else 
        {
            student++;
            pages =vec.at(i);
        }
    }
         return student>m?false:true;
    }
   

int main()
{
    cout<<"ENTER THE SIZE OF ARRAY ";
    cin>>vec_size;
    cout<<"ENTER ARRAY ELEMENTS\n";
    for(int i =0; i<vec_size;i++)
{
    int x;
    cin>>x;
    vec.push_back(x);
}
int sum=0;
cout<<"\nENTER NUMBER OF STUDENT ";
cin>>student;
if(student>vec.size())
{
    return -1;
}
for(int i=0;i<vec_size;i++)
{
    sum += vec.at(i);
}

int st=0;
int end = sum;
int ans = -1;
while(st<end)
{

    int mid = st + (end-st)/2;
    if(midcheck(vec,student,mid))
    {
        ans = mid;
       end = mid-1; 
    }
    else
    {
        st = mid+1;
    }
    
}
    cout<<"\nMINIMUM OF MAXIMUM NUMBER OF PAGES TO A STUDENT IS "<<ans;
}
