#include<iostream>
using namespace std;
void findpairs(int arr[],int n,int k)
{
    int left=0;
    int right=n-1;
bool found =false;
while(left < right)
{
    if(arr[left]+arr[right]==k)
    {
        cout<<"("<<arr[left]<<","<<arr[right]<<")"<<"  ";
        bool found=true;
        left++;
        right--;
    }
    else if( arr[left] < arr[right])
    {
        left++;
    }
    else
    {
        right--;
    }
}
}
int main()
{
    int n=5;
    int arr[n];
    int k =5;
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    findpairs(arr,n,k);
}