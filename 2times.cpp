#include<iostream>
using namespace std;
void findele(int arr[],int n,int k)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                break;
            }
            if(count > n/k)
            {
                cout<<arr[i]<<" ";
            }
        }
    }
}
int main()
{
    int n=7;
    int arr[n];
    int k =2;
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    findele(arr,n,k);
}    