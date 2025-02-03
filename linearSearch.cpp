#include<iostream>
using namespace std;

bool search( int arr[], int low,int high, int k)
{
    if( low >= high)
    {
        return -1;
    }
    if( arr[low] == k)
    {
        return true;
    }
    {
 search(arr,low+1,high,k);
    }
}
int main()
{
    int arr[5]={1,2,3,4,6};
    int n=5;
    int k=3;
    cout<<search(arr,0,n-1,k)<<endl;
}