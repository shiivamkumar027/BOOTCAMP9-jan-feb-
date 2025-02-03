#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
  int row=1;
    while(row<=n)
    {
        int space=n-row;
        while(space)
        {
            cout<<"  ";
            space--;
        }
        int col=1;
        while(col<=row)
        {
            cout<<col<<" ";
            col++;
        }
        int col1=row-1;
        while(col1){
        cout<<col1<<" ";
        col1--;
        }
cout<<endl;
row++;
 }
}
