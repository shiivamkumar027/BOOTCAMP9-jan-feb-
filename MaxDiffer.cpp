#include<iostream>
using namespace std;

int maxdif(int arr[], int n)
{
   int currdif=arr[0];
   int maxdif=arr[1]-arr[0];
   for( int i=1;i<n;i++)
   {
     if( arr[i] - currdif > maxdif )
     {
        maxdif= arr[i]-currdif;
        maxdif = max(maxdif,currdif);
     }
   }
return maxdif;
}
int main()
{
    int arr[6]={1,5,8,9,11};
    int n=6;
    cout<<"Max Diff is->" <<maxdif(arr,n)<<endl;
}