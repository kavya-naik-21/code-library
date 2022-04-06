#include<bits/stdc++.h>
using namespace std;
int main(){
  //standard bfs with dp works
  //start from root, push root into queue. then bfs over all vertices with
  // a visited array and a dp array. dp[child]=dp[parent]+1; dp denotes depth ofc.
  queue<int> q;
  int n; cin>>n;
  vector<int> adj[n+1]; //adjacency list
  int root;
  for(int i=0;i<n;i++){
    int p; cin>>p;
    if(p==-1){
      root=i;
      continue;
    }
    adj[i].push_back(p);
    adj[p].push_back(i);
  }
  int vis[n+1],dp[n+1];
  memset(vis,0,sizeof vis); memset(dp,0,sizeof dp);
  q.push(root);
  vis[root]=1;
  dp[root]=1;
  while(!q.empty()){
    int fr=q.front();
    q.pop();
    for(auto &child:adj[fr]){
      if(!vis[child]){
        vis[child]=1;
        dp[child]=dp[fr]+1;
        q.push(child);
      }
    }
  }
  int mx=0;
  for(int i=0;i<n;i++){
    mx=max(mx,dp[i]);
  }
  cout<<mx<<"\n";
  return 0;
}
