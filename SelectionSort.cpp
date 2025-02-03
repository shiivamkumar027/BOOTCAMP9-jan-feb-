#include<iostream>
using namespace std;

void SelctionSort(int arr[],int n)
{
    for( int i=0;i<n-1;i++)
    {
        int min=i;
    for( int j=i+1;j<n;j++)
    {
        if(arr[j] < arr[min])
        {
            min=j;
        }    
    }
   swap(arr[i],arr[min]);
    }
}
int main()
{
    int arr[6]={16,17,4,3,5,2};
    int n=6;
    SelctionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}