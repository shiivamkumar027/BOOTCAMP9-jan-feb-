#include<iostream>
using namespace std;
int main()
{
    int n= 6;
for(int i=0;i<n;i++)
{
    for(int sp=0;sp<i;sp++)
    {
        cout<< " ";
    }
for(int j=0;j<2*n-(2*i+1);j++)
{
    cout<< "*";
}
 //for(int sp=0;sp<i;sp++)
   // {
     //   cout<< "-";
   // }
cout<<endl;
}
}