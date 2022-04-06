#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define  fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    fast_io;
    ll t;
    cin>>t;
    while(t--)
    {
            ll w,h,n;
            ll count=1;
            cin>>w>>h>>n;
            while(w%2==0)
            {
                count*=2;
                w=w/2;
            }
            while(h%2==0)
            {
                count*=2;
                h=h/2;
            }
            if(count>=n)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
    }
    return 0;

}
/*5
2 2 3
3 3 2
5 10 2
11 13 1
1 4 4

*/