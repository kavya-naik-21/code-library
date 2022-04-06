#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            int temp; cin>>temp;
            mp[temp].push_back(i);
        }
        int ans=-1;
        for(auto u:mp){
            int mn=1e18;
            for(int i=1;i<u.second.size();i++){
                mn=min(mn,u.second[i]-u.second[i-1]);
            }
            if(mn!=1e18) ans=max(ans,n-mn);
        }
        cout<<ans<<endl;
    }
    return 0;
}
/*
4
7
3 1 5 2 1 3 4
6
1 1 1 1 1 1
6
1 4 2 8 5 7
2
15 15

*/
