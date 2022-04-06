#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<pair<int,int>>vp;
        for(int i=0;i<n;i++){
            int temp; cin>>temp;
            vp.push_back({temp,i+1});
        }
        sort(vp.begin(),vp.end());
        reverse(vp.begin(),vp.end());
        vector<int>v(n+1);
        v[0]=0;
        int i=1,c=0;
        int ans=0;
        for(auto val:vp){
            if(c==2) i++,c=0;
            v[val.second]=i;
            if(c==1) v[val.second]*=(-1);
            c++;
            ans+=(i*2*val.first);
        }
        cout<<ans<<endl;
        for(int i=0;i<=n;i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}

/*
4
3
1 2 3
5
3 8 10 6 1
5
1 1 1 1 1
1
0
*/
