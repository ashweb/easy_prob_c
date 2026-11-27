/*
THE PROBLEM -:
Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

 Example 1:

Input: x = 2.00000, n = 10
Output: 1024.00000
-------------------------------------EXPLAINATION--------------------------------------------

WE KNOW TOTAL NUMBER OF DIGITS IN BINARY FORM OF ANY NUMBER IS LOG2N + 1 FOR EXAMPLE 10 = 1000(log10base2=3+1=4)

SIMILARLY ALSO NOTE: NEVER GO BEYOND THE 10^8 NUMBER OF OPERATIONS FOR EG HERE 
CALCULATION OF 10^31 WONT HAPPEN VIA ORIDINARY FOR LOOP WITH DECIMAL NUMBERS INSTEAD CONVERT IT INTO 
BINARY AND THEN NUMBER OF OPERATION BECOMES LOG2N +1
*/

#include <iostream>
using namespace std;
double pow(long n, double a);
int main()
{

double binform_of_power;
double base;

    cout<<"ENTER BASE ";
       cin>>base;
    cout<<"ENTER POWER ";
           cin>>binform_of_power;
    
    
 double ans = pow(binform_of_power,base);
 cout<<"POWER OF X^N IS : "<<ans;
    return 0;
}
double pow(long n, double a)
{
double ans=1;
while(n>0)
{
    if(n%2 == 1)
    {
        ans *= a;
    }
    a *= a;
    n/=2;
}

return ans;

}

    

