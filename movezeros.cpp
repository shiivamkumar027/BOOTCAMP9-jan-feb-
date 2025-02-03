#include<iostream>
using namespace std;

void moveZeros(int arr[],int n)
{
    int count=0;
    for( int i=0;i<n;i++)
    {
        if(arr[i] != 0)
        {
         int temp=arr[i];
         arr[i]=arr[count];
         arr[count]=temp;
         count++;
        }
    }
}
int main()
{
    int arr[5]={0,1,9,8,3};
    int n=5;
    moveZeros(arr,n);

    cout<<"After Moving"<<endl;
    for( int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}