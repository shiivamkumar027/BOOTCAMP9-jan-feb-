#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int count =0;
for(int i=1;i<=n;i++)
{
    for(int j =2; j<=i;j++)
    {
        if(j%i !=0)
        {
            cout<<j<<endl;
            break;
        }
    }
}
}