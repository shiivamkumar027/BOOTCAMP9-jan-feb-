#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int number=x;
    int ans=0;
    while(x>0)
    {
        int ld= x%10;
        ans =(ans*10) + ld;
        x = x/10;
    }
     if(number == ans)
     {
        cout<<"True"<<endl;
     }
     else
     {
       cout<<"false"<<endl;
     }
}
