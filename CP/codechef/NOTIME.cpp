#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,x,a,flag=0;
    cin>>n>>h>>x;
    int b;
    b=h-x;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>=b)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}