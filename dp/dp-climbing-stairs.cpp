#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(){
    int n; cin>>n;
    vector<int>dp(n+1);
    dp[0]=dp[1]=1;
    for(int i=2;i<=n;i++)
        dp[i]=dp[i-1]+dp[i-2];
    cout<<dp[n];    
}