#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        char c;
        cin>>n>>k;
        ll count=0;
        int flag=0;
        for(ll i=0;i<n;i++)
        {
            cin>>c;
            if(c=='*')
                count++;
            else
                count=0;
            if(count==k)
                {
                    cout<<"YES"<<endl;
                    flag=1;
                    //i=n;
                }
            //cout<<c<<" ";
            
            
        }
        if(flag==0)
        cout<<"NO"<<endl;


    }
    return 0;
}