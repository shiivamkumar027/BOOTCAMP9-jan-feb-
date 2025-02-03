#include<iostream>
using namespace std;
int Sum(int n)
{
    if(n ==0 )
    {
        return n;
    }
    return n+Sum(n-1);
}
int main()
{
    int n;
    cout<<"Enter The Number-> "<<endl;
    cin>>n;
    cin>>n;
    int ans =Sum(n);
    cout<<"Sum Of Range 1 To N is -> "<<ans<<endl;
}