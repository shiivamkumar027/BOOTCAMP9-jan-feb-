#include<iostream>
using namespace std;

int sumofN(int n)
{
    if(n==1)
    return 1;
    int sum= n+ sumofN(n-1);
    return sum;
}
int main()
{
    int n;
    cout<<"Enter Number -> "<<endl;
    cin>>n;
    cout<<"Sum is :-> "<<sumofN(n)<<endl;
}