#include<iostream>
using namespace std;

void Print(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    Print(n-1);
}
int main()
{
    int n;
    cout<<"Enter Number -> "<<endl;
    cin>>n;
    Print(n);
} 