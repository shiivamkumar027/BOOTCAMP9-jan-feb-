#include<iostream>
using namespace std;
bool BinarySearch( int arr[], int s , int e,int k)
{
    if(s > e)
    return false;
    int mid= s+(e-s)/2;
    if( arr[mid] == k)
        return true;
    else if(arr[mid] < k)
    {
        return BinarySearch(arr,mid+1,e,k);
    }
    else
    {
        return BinarySearch(arr,s,mid-1,k);
    }
}
int main()
{
    int n=6;
    int arr[6]={2,3,4,5,6,7};
    int ke=2;
    cout<<"Present or not-> "<<BinarySearch(arr,0,n-1,ke)<<endl;
}