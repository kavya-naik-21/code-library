#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int temp; cin>>temp;
            v.push_back(temp);
        }
        bool same=true;
        for(int i=1;i<n;i++){
            if(v[i]!=v[0]) {
                same=false;
                break;
            }
        }
        if(same){
            cout<<"-1"<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        int mn=v[0],ans=0;
        for(int i=1;i<n;i++) ans=__gcd(ans,v[i]-mn);
        cout<<ans<<endl;
    }
    return 0;
}

/*
3
6
1 5 3 1 1 5
8
-1 0 1 -1 0 1 -1 0
4
100 -1000 -1000 -1000


*/
