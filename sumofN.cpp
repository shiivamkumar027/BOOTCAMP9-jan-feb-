#include<iostream>
using namespace std;
int sum(int n)
{
    int sum =0;
    for(int i=0;i<=n;i++)
    {
        sum +=i;
    }
  return sum;
}
int main()
{
    int n;
    cin>>n;
    int ans =sum(n);
    cout<<"Sum of 1 to N is ::"<<ans<<endl;;
}