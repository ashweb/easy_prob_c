#include <iostream>
#include <vector>

using namespace std;
long pow(long n, double a);
int main()
{
/*
WE KNOW TOTAL TOTAL NUMBER OF DIGITS IN BINARY FORM OF NAY NUMBER IS LOG2N +1 FOR EXAMPLE 10 = 0X1000

SIMILARLY ALSO NOTE: NEVER GO BEYOND THE 10^8 NUMBER OF OPERATIONS FOR EG HERE 
CALCULATION OF 10^31 WONT HAPPEN VIA ORIDINARY FOR LOOP WITH DECIMAL NUMBERS INSTEAD CONVERT IT INTO BINARY AND THEN NUMBER OF OPERATION BECOMES LOG2N +1
*/
long binform_of_power;//base here
double base;

    cout<<"ENTER BASE ";
       cin>>base;
    cout<<"ENTER POWER ";
           cin>>binform_of_power;
    
    
 pow(binform_of_power,base);




    
    


    return 0;
}
long pow(long binform_of_power, double base)
{
    double ans =1 ;
while(binform_of_power>0)
        {
                if(binform_of_power%2==1)
                {
                    ans *= base;
                }
        base *= base;

            binform_of_power /= 2;
        }
    cout<<"ans is "<<ans;
    return 0;
}