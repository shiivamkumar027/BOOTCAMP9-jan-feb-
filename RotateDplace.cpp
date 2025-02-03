#include<iostream>
using namespace std;

void rd(int arr[],int n,int k)
{
    int temp[4];
    for( int i=0;i<n;i++)
    {
        temp[(i+k)%n] = arr[i];
    }
    arr =temp;
}
 void print(int arr[],int n)
 {
    for( int i =0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
 }
int main()
{
    int arr[4]={-1,-100,3,99};
    int n=4;
    int k=2;
    rd(arr,n,k);
    print(arr,n);
}