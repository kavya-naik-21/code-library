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
#define repu(i, l, r) for(int i=(int)(l);i<=(int)(r);i++)
#define repd(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define clrg(i, l, r) for(int i=(int)(l);i<(int)(r);i++)visited[i]=0;
#define print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<< endl;}}
#define clr(a,x) memset(a,x,sizeof(a))
#define rr(v) for(auto &val:v)
#define gr(v) for(auto j:v)
#define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<"\n";
#define ln length()
#define sz size()
#define mod9 1000000009
#define mod 1000000007
#define elif else if
void dfs(int s,vector<int>adj[],vector<bool>&visited,int &c){
    visited[s]=true;
    c++;
    for(auto u:adj[s])
        if(!visited[u])
            {
                dfs(u,adj,visited,c);
            }
}
int32_t main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>adj[n+1];
        vector<bool>visited(n+1);
        rep(i,0,m){
            int x,y;
            cin>>x>>y;
            adj[x].pub(y);
            adj[y].pub(x);
        }
        rep(i,1,n+1){
            visited[i]=false;
        }
        int ans=0,num=1;
        rep(i,1,n+1){
            int c=0;
            if(!visited[i])
            {
                dfs(i,adj,visited,c);
                ans++;
                num*=c;
            }
        }
        cout<<ans<<" "<<num<<endl;
    }
    return 0;
}