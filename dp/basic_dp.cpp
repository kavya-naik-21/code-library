#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define fi first
#define se second
#define pub push_back
#define pi pair<int,int>
#define all(v) (v).begin(), (v).end()
#define rep(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define repd(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define clrg(i, l, r) for(int i=(int)(l);i<(int)(r);i++)vis[i]=0,v[i].clear();
#define print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<< endl;}}
#define clr(a,x) memset(a,x,sizeof(a))
#define rr(v) for(auto &val:v)
#define gr(v) for(auto j:v)
#define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<"\n";
#define ln length()
#define sz size()
#define mod 1000000009
#define elif else if

int fun(int n)
{
    if(n==0) return 1;
    if(n==1) return 1;
    int r=fun(n-1);
    if((n-4)>=0) r=r+fun(n-4);
    if((n-3)>=0) r=r+fun(n-3);
    return r;
}
int32_t main()
{
    fastIO;
    int t;
    cin>>t;
    int N=1000000;
    int dp[N];
    dp[0]=dp[1]=dp[2]=1;
    dp[3]=2;
    rep(i,4,N+1) dp[i]=dp[i-1]+dp[i-3]+dp[i-4];
    while(t--)
    {
        
        int n;
        cin>>n;
        //RECURISVE APPROACH
        cout<<fun(n)<<endl; 
        //DYNAMIC APPORACH
        cout<<dp[n]<<endl;
    }
    return 0;
}