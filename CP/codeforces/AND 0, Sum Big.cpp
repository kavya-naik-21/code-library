#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        int ans=1;
        while(k--){
            ans=(ans*n)%1000000007;
        }
        cout<<ans<<endl;
    }
    return 0;
}
/*
2
2 2
100000 20

*/
