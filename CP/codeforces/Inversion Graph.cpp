#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<pair<int,int>>vp;
        map<int,int>mp;
        vp.push_back({0,0});
        for(int i=0;i<n;i++){
            int a; cin>>a;
            vp.push_back({a,a});
        }
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if(vp[i].first>vp[j].second) {
                    if(vp[j].second!=vp[j].first) vp[i].second=vp[j].second;
                    vp[j].second=vp[i].second;
                }
            }
        }
        for(int i=1;i<=n;i++) mp[vp[i].second]++;
        cout<<mp.size()<<endl;
    }
    return 0;
}
