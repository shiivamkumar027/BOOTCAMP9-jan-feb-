#include<iostream>
using namespace std;
int main()
{
    int ch;
   int m,km,cm,kg,g;
   float metre,kilo;
    cout<<"Enter choice"<<endl;
    cin>>ch;
switch(ch)
{
case 1:cout<<"Enter metre"<<endl;
            cin>>m;
           cout<<m*100<<"cm"<<endl;
            break;
case 2: cout<<"Enter kilometre to convert into metre"<<endl;
        cin>>km;
        cout<<km*1000<<endl;
        break;
case 3 :cout<<"Enter cm to cenvert in metre"<<endl;
        cin>>cm;
        metre=cm/100;
        cout<<metre<<endl;
        break;

case 4:cout<<"Enter kg to convert into gram"<<endl;
        cin>>kg;
        cout<<kg*1000<<endl;
        break;
case 5:cout<<"Enter gram to convert into kg"<<endl;
        cin>>g;
        kilo=g/1000;
        cout<<kilo<<endl;
        break;
default: cout<<"Enter right choice"<<endl;
break;
}
}
