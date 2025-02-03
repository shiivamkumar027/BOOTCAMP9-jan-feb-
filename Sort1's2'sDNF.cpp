#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sort(vector<int>& nums,int n)
{
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high)
    {
        if(nums[mid]==0)
        {
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter size->"<<endl;
    cin>>n;
    vector<int>vec(n);
    for(int i=0;i<vec.size();i++)
    {
        cin>>vec[i];
    }
    sort(vec,n);
     for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
}
