#include<iostream>
using namespace std;
void str1(int n)
{
    for(int i=0;i<n;i++)
    {
        //star
     for(int j=0;j<=n-i-1;j++)
        {
            cout<<"*";
        }
        //space
        for(int sp=0;sp<=2*i-1;sp++)
        {
            cout<<" ";
        }
        //star
        for(int k =0;k<n-i;k++)
        {
            cout<<"*";
        }
   cout<<endl;
    }
}
void str2(int n)
{
    int space=2*(n-1);
    for(int i=0;i<n;i++)
    {
        //star
     for(int j=0;j<i+1;j++)
     {
        cout<<"*";
     }
        //space
     for(int sp =1;sp<=space;sp++)
     {
        cout<<" ";
     }   
        //star
    for(int k =0;k<i+1;k++)
    {
        cout<<"*";
    }
cout<<endl;
space = space-2;
    }
}
int main()
{
    int n=5;
    str1(n);
    str2(n);
}