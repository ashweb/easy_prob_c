/*
Write a C program that takes an array of integers (size entered by the user)
 and finds the second largest element in the array.

Example: If your array is [12, 35, 1, 10, 34, 1],
 the largest is 35 and the second largest is 34.
 */
 #include <iostream>
 #include <vector>
 using namespace std;
 vector<int>vec;
int size;
 int main()
 {
   cout<<"ENTER YOUR ARRAY SIZE ";
   cin>>size;
 if(size <=1)
 {
   cout<<"GIVE MORE THAN 1 NUMBER FOR COMPARISION";
   return;
 }
   cout<<"ENTER YOUR ARRAY\n";
   for(int i=0;i<size;i++)
   {
      int x;
      cin>>x;
      vec.push_back(x);
   }
   int larg=vec[0];
   int seclarg=vec[0];
   for(int i=0;i<size;i++)
   {
      if(vec[i]>=larg)
      {
         seclarg=larg;
         larg = vec[i];
      }
      if(vec[i]>=seclarg && vec[i]<larg)
      {
         seclarg = vec[i];
      }
   }
   if(seclarg == larg)
{
    cout<<"KINDLY GIVE DISTINCTIVE ARRAYS\n";
    return 1;
}
   
   cout<<"second largest : "<<seclarg<<endl<<"Largest : "<<larg;


 }