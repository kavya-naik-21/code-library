#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(){
    int n; cin>>n;
    vector<int>dp(n+1);
    for(int i=0;i<=n;i++) dp[i]=0;
    for(int i=2;i<=n;i++)
        for(int j=1;j<=i/2;j++)
            dp[i]=max(dp[i],max(j*(i-j),j*dp[i-j]));
    cout<<dp[n]<<endl;
}