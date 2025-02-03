#include<iostream>
using namespace std;
int sum(int * arr,int n,int i)
{
   if(n==0) return 0;
   if(n==1) return arr[0];
    if(i >= n)
    {
        return 0;
    }
    else{
    return arr[i]+sum(arr,n,i+1);
 }
}
int main()
{
    int arr[0];
    int n=0;
  cout<<"Sum is-> "<<sum(arr,n,0)<<endl;
}