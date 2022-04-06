#include<bits/stdc++.h>
#define int long long int
using namespace std;

int count_set_bits(int n){
    int c=0;
    for(int i=0;i<32;i++)
        if(n&(1<<i)) c++;
    
    return c;
}
int32_t main(){
    int n; cin>>n;
    int cost[n+1][n+1];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>cost[i][j];
    int len=pow(2,n);
    vector<int>dp(len);
    for(int i=1;i<len;i++) dp[i]=LLONG_MAX;
    dp[0]=0;
    for(int mask=0;mask<len;mask++){
        int x=count_set_bits(mask);
        for(int j=0;j<n;j++)
            if(!(mask&(1<<j)))
                dp[mask|(1<<j)]=min(dp[mask|(1<<j)],dp[mask]+cost[x][j]);
        
    }
    cout<<dp[len-1];
}

/*

3
3 2 7
5 1 3
2 7 2
*/