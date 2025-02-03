#include<iostream>
using namespace std;

int leader(int arr[],int n)
{
int s=0;
int e=n-1;
int ldr=0;
while(s<e)
{
    if(arr[s] < arr[s+1])
    {
        break;
        s++;
    }
    else if( arr[s] > arr[s+1])
    {
        ldr=arr[s];
        s++;
    }
    return ldr;
}
}
int main()
{
    int arr[6]={16,17,4,3,5,2};
    int n=6;
    leader(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}