#include<iostream>
using namespace std;
void reverse(char str[],int start,int end)
{
   if(start>=end)
   {
    return;
   }
    char temp=str[start];
    str[start]=str[end];
    str[end] =temp;
    reverse(str,start+1,end-1);
    }
void print(char str[] ,int n)
{
    cout<<str<<endl;
}    
int main()
{
    char str[100];
    cout<<"Enter a string"<<endl;
    cin>>str;
    int l= strlen(str);
    reverse(str,0,l-1);
    print(str,l);
}