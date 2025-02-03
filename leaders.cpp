#include<iostream>
using namespace std;
void leader(int arr[],int n)
{
    int curr_ldr=arr[n-1];
    cout<<curr_ldr<<" ";

    for( int i=n-2;i>=0;i--)
    {
        if(curr_ldr < arr[i])
        {
            curr_ldr=arr[i];
            cout<<curr_ldr<<" ";
        }
    }
}
int main()
{
    int arr[6]={16,17,4,3,2,5};
    int n=6;
    leader(arr,n);
}