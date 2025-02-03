#include<iostream>
using namespace std;
int binaryS(int arr[],int s,int e,int k)
{
    if(s>e)
    {
        return -1;
    }
int mid=(s+e)/2;
if(arr[mid]==k)
{
    return mid;
}
else if(arr[mid] < k)
{
    return binaryS(arr,s,mid-1,k);
}
else
{
    return binaryS(arr,s,mid+1,k);
}
}
int main()
{
    int arr[5]={2,4,5,3,1};
    int n=5;
    int k=3;
  int r=binaryS(arr,0,n-1,k);
    if( r == -1)
    {
        cout<<"Not Found -> "<<r<<endl;
    }
    else
    {
        cout<<"found ->"<<r<<endl;
    }
}