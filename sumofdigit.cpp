#include<iostream>
using namespace std;

int SoD(int n)
{
    if(n==0)
    return 0;
    return n%10+SoD(n/10);
}
int main()
{
    int n;
    cout<<"Enter Number -> "<<endl;
    cin>>n;
  int ans= SoD(n);
  cout<<ans<<endl;
} 