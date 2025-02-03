#include<iostream>
using namespace std;
void piramid(int n){
    for(int i=0;i<n;i++)
    {
    for(int sp=0;sp<n-i;sp++)
    {
        cout<<" ";
    }
    for( int j=0;j<i;j++)
    {
        cout<<"*";
    }
    for(int k=0;k<=i;k++)
    {
        cout<<"*";
    }
    cout<<endl;
    }
}
void Invpiramid(int n){
    for(int i=0;i<n;i++)
    {
    for(int sp=0;sp<=i+1;sp++)
    {
        cout<< " " ;
    }
    for( int j=0;j<n-i-1;j++)
    {
        cout<<"*";
    }
    for( int k=0;k<n-i-2;k++)
    {
        cout<<"*";
    }
    cout<<endl;
    }
}
int main()
{
    int n=10;
    piramid(n);
    Invpiramid(n);
}