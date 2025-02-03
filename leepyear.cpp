#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter year"<<endl;
    cin>>n;

if(n %4==0)
{
    if( n %100 == 0)
    {
       if( n%400==0)
       {
        cout<<" Leap Year"<<endl;
       } 
       else{
        cout<<"Not a leap year"<<endl;
       }
    }else
    {
        cout<<"Leap Year"<<endl;

    }
}
else
{
    cout<<"Not a leap Year"<<endl;
}
}