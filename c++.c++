#include <iostream>

using namespace std;
int here;
char name[50];
long long phone_number,password2,password1;
long car_number;
int main()
{
    cout<<"WELCOME TO CAR REGSITRATION\n";
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"\nENTER YOUR PHONE NUMBER ";
    cin>>phone_number;
    cout<<"\nENTER YOUR PASSWORD ";
    cin>>password1;
    cout<<"\nHEY "<<name<<" YOUR CAR HAS BEEN SUCCESSFULLY REGISTERD\n";
    here :
    cout<<name<<" kindly re-enter your password to confirm registration\n";
    cin>>password2;
    
if(password1 == password2)

{
    cout<<"THANKYOU! YOUR CAR HAS BEEN SUCCESSFULLY REGISTERED";
}
else
{
    cout<<"YOUR PASSWORD "<<password2<<" IS WRONG\n";
    goto here;
}
return 0;
}