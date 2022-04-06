#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n,m; cin>>n>>m;
        vector<int>v(m);
        for(auto &u:v) cin>>u;
        int ans=0;
        for(int i=0;i<m;i++)
            for(int j=0;j<=i;j++)
                    if(v[j]<v[i]) ans++;
        cout<<ans<<"\n";
    }
    return 0;
}

