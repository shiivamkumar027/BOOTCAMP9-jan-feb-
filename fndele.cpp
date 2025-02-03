#include<iostream>
using namespace std;
void findele(int arr[],int n,int k)
{
   int size=n;
    int freq=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
            if(freq==0)
            {
                ans=arr[i];
            }
            if(ans==arr[i])
            {
                freq++;
            }
         //   else
           // {
             //   freq--;
           // }
            if(freq >= size/k )
            {
                cout<<arr[i]<<" ";
            }
      }    
    }
int main()
{
    int n=7;
    int arr[n];
    int k=2;
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    findele(arr,n,k);
}    