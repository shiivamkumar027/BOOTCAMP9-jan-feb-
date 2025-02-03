#include<iostream>
using namespace std;
void p1(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
    cout<<endl;
    }
}
void p2(int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"*";
        }
    cout<<endl;
    }
}
int main()
{
    int n=5;
    p1(n);
    p2(n);

}