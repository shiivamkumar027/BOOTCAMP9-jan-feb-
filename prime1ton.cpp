#include<iostream>
using namespace std;
int main()
{
    int count =0;
    int n;
    cin>>n;
for(int i=2;i<=n;i++)
{
    for(int j=1;j<=i;j++)
    {
        if(i%j == 0)
        {
            count++;
        }
    }    
 if(count == 2)
 {
    cout<<i<<endl;
    break;
 }
}
} 