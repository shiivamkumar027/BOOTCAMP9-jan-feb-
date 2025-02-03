#include<iostream>
using namespace std;

void Print(int current , int n)
{
    if(current > n)
    {
        return;
    }
    Print(current +1, n);
    cout<<current<<endl;
}
int main()
{
    int n;
    cout<<"Enter value"<<endl;
    cin>>n;
    if(n<=0)
    {
        cout<<"Enter Positive<<endl"<<endl;
    }
    else{
        Print(1,n);
        cout<<endl;
    }
}