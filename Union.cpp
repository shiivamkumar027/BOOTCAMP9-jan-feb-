#include<iostream>
using namespace std;
void FindUnion(int arr1[],int n1,int arr2[],int n2)
{
int i=0;
int j=0;
while(i < n1 && j< n2)
{
   // if i is smaller
    if(arr1[i] < arr2[j])
    {
        cout<<arr1[i++]<<" ";
    }
    // if j is smalller
    else if(arr2[j] < arr1[i])
    {
        cout<<arr2[j++]<<" ";
    }
    else{
    // Dubplicate
    cout<<arr1[i++]<<" ";
    j++;
    }
    // print first array rest elements
    while(i<n1)
    {
        cout<<arr1[i]<<" ";
    }
    //secondd array
    while(j<n2)
    {
        cout<<arr2[j]<<" ";
    }
}
}
void intersection(int arr[],int n,int arr2[],int n2)
{
    int i=0;
    int j=0;
    while( i<n && j<n2)
    {
        if(arr[i] < arr2[j])
        {
         i++;
        }
        else if(arr[j] < arr2[j])
        {
            j++;
        }
        else
        {
           cout<<arr[i]<<" ";
            i++;
            j++;
        }
    }
}
int main()
{
    int n1=5;
    int arr1[5]={1,2,3,4};
    int n2=4;
    int arr2[3]={5,4,3};
  FindUnion(arr1,n1,arr2,n2);
  intersection(arr1,n1,arr2,n2); 
}