#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        // vector<pair<int,int>>ones,zeroes;
        map<int,int>ones,zeroes;
        vector<int>v;
        for(int i=0;i<n;i++){
            int temp; cin>>temp;
            v.push_back(temp);
        }
        string s; cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='1') ones[v[i]]=i;
            else zeroes[v[i]]=i;
        }
        int c=1;
        for(auto u:zeroes) v[u.second]=c,c++;
        for(auto u:ones) v[u.second]=c,c++;
        for(auto u:v) cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}

