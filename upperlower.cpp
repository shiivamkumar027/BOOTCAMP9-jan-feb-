#include<iostream>
using namespace std;
int main()
{
char ch;
cout<<"Enter your char"<<endl;
cin>>ch;
if(ch >=65 && ch <=90 )
{
    cout<<"Upper case "<<endl;
}
else if( ch >=97 && ch <= 122)
{
    cout<<"Lower case"<<endl;
}
else if( ch >=33 && ch<=47)
{
    cout<<"Special char"<<endl;
}
else
{
    cout<<"wrong input"<<endl;
}
}