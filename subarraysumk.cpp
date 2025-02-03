#include<iostream>
using namespace std;
void isSubSum(int arr[], int n, int sum)  
{ 
    for (int i = 0; i < n; i++) {  
        int curr = 0;          
        for (int j = i; j < n; j++) {  
            curr += arr[j];  
             
            if (curr == sum)  
                cout<<" "<<i<<" " <<j<<endl;  
        } 
    }    
} 
int main()
{
    int n=5;
    int sum;
    cout<<"Enter Sum ->"<<endl;
    cin>>sum;
    int arr[5];
    cout<<"Enter elements"<<endl;
    for( int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     isSubSum(arr,n,sum);

}