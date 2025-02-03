#include<iostream>
using namespace std;
int main()
{
 int y;
 cin>>y;   
   
 if( y % 400 == 0)
 {
    cout<<"Leap year"<<endl;
 }
 else if(y %100==0)
 {
    cout<<"Not a leap year"<<endl;
 }
else if(y %4 == 0)
{
    cout<<"Leap year"<<endl;
}
else{
    cout<<"Not a leap year"<<endl;
}
}