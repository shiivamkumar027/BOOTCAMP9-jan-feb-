#include<iostream>
using namespace std;
int main()
{
    int n=5;

    for(int i=0;i<n;i++)
    {
        int num=i+1;
    for(int sp=0;sp<n-i;sp++)
    {
        cout<<" ";
    }
    for( int j=1;j<=i;j++)
    {
        cout<<j;
    }
    for(int k=0;k<=i;k++)
    {
        cout<<num;
        num--;
    }
    cout<<endl;
    }

}