#include<iostream>
using namespace std;
bool search(int * arr,int n,int k)
{
    if(n==0)
    {
    return false;
    }
        if(arr[0] == k)
        {
            return true;
        }
        else
        {
    bool ans= search(arr+1,n-1,k);
    return ans;
        }   
    }
int main()
{
    int arr[6]={16,17,4,3,5,2};
    int n=6;
    int k=1;
    int ans=search(arr,n,k);
    if(ans)
    {
        cout<<"Present"<<endl;
    }
    else
    {
        cout<<"Absent"<<endl;
    }
}