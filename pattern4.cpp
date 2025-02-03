#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

for(int i=0;i<n;i++)
{
for(int sp=0;sp<i;sp++)
{

    cout<<"_";
}    
for(int j=i;j<n;j++)
{
    cout<<"*";
}
cout<<endl;
}
}    