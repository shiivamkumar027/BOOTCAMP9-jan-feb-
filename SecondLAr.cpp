#include<iostream>
using namespace std;
int Seclar(int arr[],int n)
{
    int lar =largest(arr,n);
    int sl=-1;

    for(int i=0;i<n;i++)
    {
        if(arr[i] > sl && arr[i] < lar)
        {
            sl=arr[i];
        }
    }
    return sl;
}
int largest(int arr[],int n)
{
    int lar=INT_MIN;
for(int i=0;i<n;i++)
{
    if(arr[i]>lar)
    {
        lar=arr[i];
    }
}
return lar;
}
int main()
{
    int n=5;
    int arr[5]={1,2,4,6,3};
    cout<<largest(arr,n)<<endl;
    cout<<Seclar(arr,n)<<endl;
}