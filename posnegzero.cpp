#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n > 0)
    {
        cout<<"Positive"<<endl;
    }
    else if( n < 0)
    {
        cout<<"Negative"<<endl;
    }
    else
    {
        cout<<"Number is zero"<<endl;
    }
}