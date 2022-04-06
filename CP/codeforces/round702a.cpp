#include<bits/stdc++.h>
using namespace std;
#define ll  unsigned  long  long
#define pub push_back
#define  fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);

void is_div(int n)
{
    while(n%2==0)
    {
        n=n/2;
    if(n>1)
    break;
    }
    if(n>1)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
}
int main()
{
    fast_io;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        while(n%2==0)
        {
        n=n/2;
        if(n==1)
        break;
        }
        if(n==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}
/*2
3
4
5
998244353
1099511627776
*/