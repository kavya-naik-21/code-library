#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int temp; cin>>temp;
            mp[temp]++;
        }
        int max=0;
        for(auto u:mp){
            if(u.second>max) max=u.second;
        }
        int ans=0;
        while((n-max)>0){
            ans+=min(n-max,max);
            ans++;
            max*=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}

