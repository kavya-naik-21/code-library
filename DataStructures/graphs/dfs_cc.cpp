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
void dfs(vector<int> &visited, vector<int>adj[],int s,int &c){
    visited[s]=1;
    c++;
    for(auto u:adj[s])
        {
            if(!visited[u])
            dfs(visited,adj,u,c);
    }
}
int find_set(vector<int> &p,int v) {
    if (v == p[v])
        return v;
    return p[v] = find_set(p,p[v]);
}
void union_sets(vector<int> &p,int a, int b) {
    a = find_set(p,a);
    b = find_set(p,b);
    if (a != b)
        p[b] = a;
}
int32_t main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--)
    {
        int n,e;
        cin>>n;
        vector<int>v;
        vector<int>adj[n+1];
        vector<int> visited(n+1);
        rep(i,0,n){
            int temp;
            cin>>temp;
            v.pub(temp);
        }
        rep(i,1,n+1){
            rep(j,1,n+1){
                if((v[i]-i)!=v[j]-j){
                    union_sets(v,i,j);
                }
            }
        }
        rep(i,1,n+1){
            cout<<v[i]<<" ";
        }
        
    }
    return 0;
}