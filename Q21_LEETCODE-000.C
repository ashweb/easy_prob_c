#include <iostream>
#include <vector>
using namespace std;
vector<int>data1;
int max_water = 0;//ie : max area
int area;
int base;
int height;
int main()
{
    int data_num;
    
cout<<"ENTER NUMBER OF DATA ";
    cin>>data_num;
    cout<<"ENTER ELEMENTS OF DATA\n";
    for(int i =0 ;i<data_num;i++)
        {
            int x;
            cin>>x;
            data1.push_back(x);
        }
    cout<<"\n----------------BRUTE FORCE APPROCH-O(n^2)-----------\n";
    for(int i =0; i<data_num;i++)
        {
             for(int j =i; j<data_num;j++)
                 {
                     base = j - i;
                     height = min(data1.at(j),data1.at(i));
                     area = base*height;
                     max_water = max(max_water,area);
                 }
        }
        cout<<"\nMAX WATER IS "<<max_water;

    cout<<"\n------------TWO POINTERS APPROACH-O(n)-----------\n";
max_water = 0;
    int left_pointer = 0;
    int right_pointer= data_num -1;
    while(left_pointer<right_pointer)
    {
        base = right_pointer - left_pointer;
        height = min(data1.at(left_pointer),data1.at(right_pointer));
        area = height*base;
        max_water = max(max_water,area);
        data1.at(left_pointer) < data1.at(right_pointer) ?left_pointer++:right_pointer--;
    }
 cout<<"\nMAX WATER IS "<<max_water;





 return 0;   
}