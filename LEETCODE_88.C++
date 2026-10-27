/*
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order,
 and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. 
To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged,
and the last n elements are set to 0 and should be ignored. nums2 has a length of n.
*/
//MERGE - TWO - SORTED ARRAY

#include <iostream>
#include <vector>
using namespace std;
vector<int>nums1 = {1,4,6,7,8,9,0,0,0,0,0,0};
vector<int>nums2 = {5,7,9,12,17,20};
int main()
{
    int m=6,n=6;
    int indx=m+n-1;
    int i=m-1,j=n-1;
   while(i>=0&&j>=0)
   {
    if(nums1[i]>nums2[j])
    {
        nums1[indx--]=nums1[i--];
    }
    else
    {
         nums1[indx--]=nums2[j--];
    }

    }
    while(j>=0)
    {
        nums1[indx--]=nums2[j--];
    }
   
    for(int k=0;k<nums1.size();k++)
        {
            cout<<nums1.at(k)<<" ";
        }
}