#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int arr[5]={2,5,6,3,1};
    int sum=11;

int cur_sum=0;
int max_sum=0;
for(int i=0;i<n;i++)
{
    cur_sum +=arr[i];
    max_sum=max(cur_sum,max_sum);
    if(max_sum == sum)
    {
        cout<<arr[0]<<arr[i];
    }
}
}