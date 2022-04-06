#include<bits/stdc++.h>
#define ll long long int
#define row 1005
#define col 1005
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
       ll r,c,x;
       cin>>r>>c>>x;
       ll a[row],b[col];
       for(ll i=0;i<r;i++)
       {
             for(ll j=0;j<c;j++)
             {
                 cin>>a[i][j];
             }
       }
       for(ll i=0;i<r;i++)
       {
             for(ll j=0;j<c;j++)
             {
                 cin>>b[i][j];
             }
       }
    }
    return 0;
}