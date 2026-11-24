/*
The Problem:
Write a C program that takes an array of integers (size entered by the user) 
and checks whether the array is sorted in decreasing or increasing order.
If any element breaks that rule, print "Not Sorted".
*/
 #include <iostream>
 #include <vector>
 using namespace std;
 vector<int>vec;
 int num;
int main()
{
   cout<<"ENTER YOUR ARRAY SIZE ";
   cin>>num;
 if(num <=1)
 {
   cout<<"GIVE MORE THAN 1 NUMBER FOR ARRANGING";
   return 1;
 }
   cout<<"ENTER YOUR ARRAY\n";
   for(int i=0;i<num;i++)
   {
      int x;
      cin>>x;
      vec.push_back(x);
   }
int incr=0;
int decr=0;
for(int i=0;i<num-1;i++)
{
if(vec[i]>=vec[i+1])
{
   decr++;
}
}
for(int i=0;i<num-1;i++)
{
   if(vec[i]<=vec[i+1])
   {
      incr++;
   }
}
if(incr == num-1)
{
   cout<<"ARRAY IS IN ASCENDING ORDER";
}
else if(decr == num-1)
{
   cout<<"ARRAY IS IN DECREASING ORDER";
}
else 
{
   cout<<"ARRAY IS NOT SORTED";
}


return 0;


}