#include<iostream>
using namespace std;

int countdt(int n)
{
    if(n==0)
    return 0;
    return 1+countdt(n/10);
}
int main()
{
    int n;
    cout<<"Enter Number -> "<<endl;
    cin>>n;
  if( n==0)
  {
    cout<<"Count is 1"<<endl;
  }
  else
  {
    cout<<countdt(n)<<endl;
  }
} 