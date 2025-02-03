#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;

if( ch>'a' && ch < 'z')
{
    if( ch =='a' || ch=='e' || ch=='i' ||ch =='o'|| ch=='u' )
    {
        cout<<"Vowel"<<" = "<<ch<<endl;
    }
    else
    {
        cout<<ch<<" is "<<"Consonent"<<endl;
    }
}
else{
    cout<<"out of range"<<endl;
}

}