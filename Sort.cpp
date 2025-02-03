#include<iostream>
using namespace std;
void sort(int arr[],int n)
{
      int k=0;
      for(int i=1;i<n;i++)
      {
        if(arr[i] < arr[k])
        {
            swap(arr[i],arr[k]);
            k++;
        }
    }
 //   if(arr[0] < arr[n-1])
   // {
    //    swap(arr[0],arr[n-2]);
   // }
}
int main()
{
    int n;
    cout<<"Enter size of an Array -> "<<endl;
    cin>>n;
    int nums[n];
    cout<<"Enter Elements-> "<<endl;
    for( int i=0; i<n;i++)
    {
        cin>>nums[i];
    }
    sort(nums,n);
     for( int i=0; i<n;i++)
    {
       cout<<endl;
        cout<<nums[i]<<endl;
    }
}