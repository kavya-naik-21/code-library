#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,x,y;
        ll count=0;
        cin>>a>>y>>x;
        for(ll i=0;i<a;i++)
        {
            y--;
            if(i%2==0)
            count=x+1;
            else
            count=x;
        }
        cout<<count<<endl;

    }
    return 0;
}