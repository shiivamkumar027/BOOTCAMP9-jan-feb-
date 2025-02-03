#include<iostream>
using namespace std;

void reverse( int arr[] , int n)
{
    int low=0;
    int high=n-1;
    while(low <= high)
    {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=5;
    reverse(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}