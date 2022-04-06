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
#define clrg(i, l, r) for(int i=(int)(l);i<(int)(r);i++)visited[i]=0;
#define print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<< endl;}}
#define clr(a,x) memset(a,x,sizeof(a))
#define rr(v) for(auto &val:v)
#define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<"\n";
#define ln length()
#define sz size()
#define mod9 1000000009
#define elif else if

void dfs(int s,vector<int>adj[],vector<bool>&visited){
    visited[s]=true;
    cout<<s<<" ";
    for(auto u:adj[s])
        if(!visited[u])
        dfs(u,adj,visited);
}

void is_cyclic(int s,vector<int>adj[],vector<bool>&visited,int &c){
    
    visited[s]=true;
    for(auto u:adj[s]){
        cout<<u<<" ";
    }
    for(auto u:adj[s]){
        if(!visited[u]){
            is_cyclic(u,adj,visited,c);
        }
    }
    cout<<endl;
}
int32_t main()
{
    fastIO;
    int v,e;
    cin>>v>>e;
    vector<int>adj[v+1];
    vector<bool>visited(e+1);
    rep(i,0,e){
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    rep(i,0,v){
        visited[i]=false;
    }
    dfs(0,adj,visited);
    //////bfs
    rep(i,0,v){
        visited[i]=false;
    }
    queue<int>q;
    cout<<endl;
    q.push(0);
    visited[0]=true;
    while (!q.empty())
    {
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        for(auto u:adj[x]){
            if(!visited[u])
            {
                visited[u]=true;
                q.push(u);
            }
        }
        
    }
    for (int u = 0; u < v; u++)
    {
        cout << "Node " << u << " makes an edge with \n";
        for (auto it = adj[u].begin(); it!=adj[u].end(); it++)
        {
            cout << *it<<" ";
        }
        cout << "\n";
    }
    ///------Detect cycle in a graph --------///
    rep(i,0,v){
        visited[i]=false;
    }
    return 0;
}
/*
7 9
0 1
0 2 
1 2
1 3
1 4
2 6
3 6
3 4
3 5
*/