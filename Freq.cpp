#include<iostream>
using namespace std;

int freq( int arr[] , int n,int k)
{
    int freq=0;
    for( int i=0;i<n;i++)
    {
            if(arr[i] == k)
            {
                freq++;
            }
    }
    return freq;
}
int main()
{
    int arr[5]={1,2,2,2,5};
    int n=5;
    int k=2;
    cout<<freq(arr,n,k)<<endl;
}