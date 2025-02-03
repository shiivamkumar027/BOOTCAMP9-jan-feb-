#include<iostream>
using namespace std;
bool isSorted( int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if( arr[i] > arr[i+1])
        {
            return false;
        }
  return false;
    }
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int n=5;
    if(isSorted(arr,n))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False";
    }
}