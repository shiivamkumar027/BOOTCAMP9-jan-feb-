#include<iostream>
using namespace std;
int mindiff(int arr[],int n,int m)
{
    if(m>n)
    return -1;

sort(arr,arr+n);
int res=arr[m-1]-arr[0];
for(int i=1;(i+m-1)<n;i++)
{
    res=min(res,arr[i+m-1]-arr[i]);
}
return res;
}
int main()
{
    int n;
    cout<<"Enter size-> "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter Elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int m;
    cout<<"Enter students"<<endl;
    cin>>m;
    cout<<"Min DIf-> "<<mindiff(arr,n,m)<<endl;
}