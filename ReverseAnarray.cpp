#include<iostream>
using namespace std;

void reverse(int arr[],int low ,int high)
{
    if(low>=high)
    {
    return;
    }
    int temp=arr[low];
    arr[low]=arr[high];
    arr[high]=temp;
    reverse(arr,low+1,high-1);
}
void print(int arr[],int n)
{
     for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter size of an array -->"<<endl;
    cin>>n;
    int Arr[n];
    //inputing array elements
    for( int i=0;i<n;i++)
    {
        cin>>Arr[i];
    }    
    cout<<"Current Array is -> "<<endl;
    //printing array
    for(int j=0;j<n;j++)
    {
        cout<<Arr[j]<<endl;
    }
    cout<<"After reverse"<<endl;
    reverse(Arr,0,n-1);
    print(Arr,n);
}