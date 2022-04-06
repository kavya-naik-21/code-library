#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int k; cin>>k;
        vector<pair<int,int>>vp;
        for(int i=0;i<n;i++){
            int temp; cin>>temp;
            vp.push_back({temp,i});
        }
        sort(vp.begin(),vp.end());
        int c=1;
        for(int i=1;i<n;i++){
            if(vp[i].second-vp[i-1].second!=1) c++;
        }
        cout<<(c<=k?"yes":"no")<<endl;
    }
    return 0;
}

