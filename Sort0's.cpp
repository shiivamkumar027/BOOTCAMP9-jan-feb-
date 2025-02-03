#include<iostream>
using namespace std;
void sort(int nums[],int n)
{
    int temp=0;
        for(int i=0;i<n;i++)
        {
         for(int j=i+1;j<n;j++)
         {
               if(nums[i] > nums[j]){
               temp=nums[j];
               nums[j]=nums[i];
               nums[i]=temp;
             }
        }
        }
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
        cout<<nums[i];
    }
}