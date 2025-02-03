#include<iostream>
using namespace std;

void insersort(int arr[],int n)
{
    for( int i=1;i<n;i++)
    {
        int curr=i;
        int prev=i-1;
    
    while( prev >= 0 && arr[prev]> curr)
    {
        arr[prev+1]=arr[prev];
        prev--;
    }
    arr[prev+1]=curr;
    }
}
int main()
{
    int arr[6]={16,17,4,3,5,2};
    int n=6;
  insersort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}