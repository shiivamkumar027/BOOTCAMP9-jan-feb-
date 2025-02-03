#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
for(int i =1;i<=n;i++)
{
    for(int sp=1;sp<=n-i;sp++)
    {
        cout<<" ";
    }
   for(int j=1;j<=2*i-1;j++)
   {
    if(i==n || j==2*i-1 || j==1 )
    {
    cout<<"*";
    }
    else{
        cout<<" ";
    }
   } 
cout<<endl;
}
}
