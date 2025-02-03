#include<iostream>
using namespace std;

int ispalindrome(char str[],int start,int end)
{
    if(start>=end)
    {
        return 1;
    }
    if(str[start] != str[end])
    {
        return 0;
    }
    ispalindrome(str , start+1, end-1);
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
    ispalindrome(str,0,l-1);
   if(ispalindrome(str,0,l-1))
   {
    cout<<"String is palindrome"<<endl;
   }
   else
   {
    cout<<"String is not palindrome"<<endl;
   }
}