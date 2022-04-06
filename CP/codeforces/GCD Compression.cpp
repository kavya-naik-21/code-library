#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v(2*n);
        for(auto &u:v) cin>>u;
        vector<int>odds,evens;
        for(int i=0;i<2*n;i++){
            if(v[i]%2==0) evens.push_back(i);
            else odds.push_back(i);
        }
        if(odds.size()%2!=0) odds.pop_back(),evens.pop_back();
        else if(odds.size()) odds.pop_back(),odds.pop_back();
        else evens.pop_back(),evens.pop_back();
        for(int i=0;i<odds.size();i+=2) cout<<odds[i]+1<<" "<<odds[i+1]+1<<endl;
        for(int i=0;i<evens.size();i+=2) cout<<evens[i]+1<<" "<<evens[i+1]+1<<endl;
    }
    return 0;
}

