#include<iostream>
using namespace std;

int find(int arr[],int n , int target)
{
    int ans=0;
    int ans2=0;
    for( int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if( arr[j]==target-arr[i])
            {
                ans=arr[i];
                ans2=arr[j];
                break;
            }
        }
    }
    cout<<" "<<ans2<<" "<<ans<<" ";
}
int main()
{
    int n,k;
    cout<<"Enter size of an Array -> "<<endl;
    cin>>n;
    cout<<"Enter Target->"<<endl;
    cin>>k;
    int nums[n];
    cout<<"Enter Elements-> "<<endl;
    for( int i=0; i<n;i++)
    {
        cin>>nums[i];
    }
    cout<<find(nums,n,k)<<endl;
}