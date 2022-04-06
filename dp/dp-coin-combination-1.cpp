#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(){
    int n; cin>>n;
    vector<int>c(n);
    for(auto &u:c) cin>>u;
    int sum; cin>>sum;
    vector<int>dp(sum+1);
    for(int i=1;i<=sum;i++) dp[i]=0;
    dp[0]=1;
    for(int i=0;i<=sum;i++){
        for(int j=0;j<n;j++){
            if(i-c[j]>=0)
                dp[i]=dp[i]+dp[i-c[j]];
        }
    }
    cout<<dp[sum];
}