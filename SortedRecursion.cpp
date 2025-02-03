#include<iostream>
using namespace std;
bool isSorted( int *arr,int n)
{
    if(n==0 || n==1)
    {
        return true;
    }
    if(arr[0]> arr[1])
    {
        return false;
    }
    else
    {
        bool ans=isSorted(arr+1,n-1);
        return ans;
    }
}
int main()
{
    int arr[6]={16,17,4,3,5,2};
    int n=6;
    bool ans= isSorted(arr,n);
    if(ans)
    {
        cout<<" Sorted"<<endl;
    }
    else
    {
        cout<<"Not Sorted"<<endl;
    }
}