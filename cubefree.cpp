#include<iostream>
#include<math.h>
using namespace std;
int isCubefree(int num)
{
    for(int i=2;i<=cbrt(num);i++)
    {
        if(num %(i*i*i)==0)
        {
            return 0;
        }
    }
return 1;
}
void findAandB(int n)
{
    for(int a=1;a<=cbrt(n);a++)
    {
        int a3 =a*a*a;
        if(n% a3 ==0)
        {
            int b =n/a3;
        if(isCubefree(b))
        {
            cout<<a<<b<<endl;
        }
    }
    }
}
int main()
{
    int n;
    cin>>n;
if(isCubefree(n))
{
    cout<<"True"<<endl;
}
else{
    cout<<"False"<<endl;
}

}