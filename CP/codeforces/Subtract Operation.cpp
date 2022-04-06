#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int>v;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int temp; cin>>temp;
            v.push_back(temp);
            mp[temp]++;
        }
        bool ans=false;
        for(int i=0;i<n;i++){
            if(mp[v[i]+k]) ans=true;
        }
        if(ans) cout<<"yes";
        else cout<<"no";
        cout<<endl;
    }
    return 0;
}

/*
4
4 5
4 2 2 7
5 4
1 9 1 3 4
2 17
17 0
2 17
18 18

*/
