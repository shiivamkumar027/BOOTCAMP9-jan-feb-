#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int sp=0;sp<n-i;sp++)
        {
            cout<<" ";
        }
    char ch=('A');
    for(int j=1;j<=i;j++)
    {
        cout<<ch;
        ch++;
    }
    char ch1=('A'+i);
    for(int j=0;j<=i;j++)
    {
        cout<<ch1;
        ch1--;
    }
   cout<<endl;
    }
}