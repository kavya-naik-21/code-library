#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,temp;
        vector<ll>h;
        h.push_back(0);
        cin>>n;
        for (ll i = 1; i <= n; i++)
        {
            cin>>temp;
            h.push_back(temp);
        }
        stack<ll>s;
        double m;
        ll j,k;
        ll max=0,value=1;
        for (ll i = 1; i <n-1; i++)
        {
            m=(double)(h[n]-h[i])/(n-i);
            ll k=0;
            ll count=n-1;
            for (j = n-1; j > i;j--)
            {
                double y;
                y=m*(double)(j-i)+h[i];
                if(h[j]>y)
                {
                    m=(double)(h[j]-h[i])/(j-i);
                    count=count-k;
                    if(h[i]!=h[k])
                    k++;
                }
                else
                k++;
            }
        }
    }
    return 0;
}