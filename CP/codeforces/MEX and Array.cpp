#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v(n);
        for(auto &u:v) cin>>u;
        int ans=0;
        for(int i=0;i<n;i++){
            vector<int>temp;
            for(int j=i;j<n;j++){
                temp.push_back(v[j]);
                map<int,int>mp;
                for(auto u:temp) mp[u]++;
                ans+=temp.size()+mp[0];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

