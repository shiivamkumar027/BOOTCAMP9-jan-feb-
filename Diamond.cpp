#include<iostream>
using namespace std;

void a(int n)
{
for(int i=0;i<n;i++)
{
    for(int sp=0;sp<n-i;sp++)
    {
        cout<<" ";
    }
   for(int j=0;j<i+1;j++)
   {
    cout<<"* ";
   } 
cout<<endl;
}
}
void b(int n)
{
    for(int i=0;i<n;i++)
{
    for(int sp=0;sp<=i;sp++)
    {
        cout<<" ";
    }
   for(int j=0;j<n-i;j++)
   {
    cout<<"* ";
   } 
cout<<endl;
}
}
int main()
{
    int n;
    cin>>n;
    a(n);
    b(n);
}