#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        int n1=s1.length(),n2=s2.length();
        int dp[n1+1][n2+1];
        int ans=0;
        for(int i=0;i<=n1;i++){
            for(int j=0;j<=n2;j++){
                if(i==0 or j==0) dp[i][j]=0;
                else if(s1[i-1]==s2[j-1]) {
                    dp[i][j]=dp[i-1][j-1]+1;
                    ans=max(ans,dp[i][j]);
                }
                else dp[i][j]=0;    
            }
        }
        cout<<(n1+n2)-(2*ans)<<endl;
        
    }
    return 0;
}

/*
5
a
a
abcd
bc
hello
codeforces
hello
helo
dhjakjsnasjhfksafasd
adjsnasjhfksvdafdser

*/
