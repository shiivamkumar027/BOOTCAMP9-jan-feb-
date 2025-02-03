#include<iostream>
using namespace std;
int main()
{
int a,b,c,ch;
cin>>ch;
switch(ch)
{
case 1 :cout<<"Enter angles"<<endl;
        cin>>a>>b>>c;
        if(a+b+c == 180)
        {
            cout<<"valid triangle base on angles"<<endl;
        }
        else
        {
            cout<<"Not valid"<<endl;
        }
        break;
case 2:cout<<"Enter sides"<<endl;
        cin>>a>>b>>c;
        if((a+b)>=c && (b+c)>=a && (a+c)>=b)
        {
            cout<<"valid triangle with sides"<<endl;
        }
        else
        {
            cout<<"not valid"<<endl;
        }
        break;
default : cout<<"Enter right choice"<<endl;
break;
}
}