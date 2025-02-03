#include<iostream>
#include<math.h>
using namespace std;

bool reverse(int x) {
    int count=1;
    while(x!=0)
    {
        x=x%10;
        count++;
        x=x/10;
    }
    int answer =0;
    int dub=x;
    while(x!=0)
    {
        int dt =x%10;
        answer = answer + pow(count,dt);
        x=x/10;
    }
    if(dub==answer)
    {
    return true;
    } else {
    return false;
    }
}
//int power(int n)
//{
    int ans =1;
  //  for(int i=1;i<=n;i++)
    //{
      //  ans = ans*i;
   // }
//return ans;
//}
int main()
{
    int n;
    cin>>n;
    if(reverse(n))
   {
    cout<<"Yes"<<endl;
   }
   else{
    cout<<"nope"<<endl;
   }
}