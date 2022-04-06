#include <bits/stdc++.h>
using namespace std;
void dfs(int v,bool * visited,vector<int>* graph) 
    {
    visited[v] = true;
    for (int u : graph[v]) {
        if (!visited[u])
            {
                cout<<u<<" ";
                dfs(u,visited,graph);
            }
    }
    }
int main()
{
    int v, e;
    cin >> v >> e;
vector<int> graph[v + 1];
int n = v;
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for (int i = 1; i <= v; i++)
    {
        cout << i << "----->";
        for (auto j : graph[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << "FOR LOOP ENDED";

    int s; // source vertex

    queue<int> q;
    vector<bool> used(n);
    vector<int> d(n), p(n);
    s = 1;
    q.push(s);
    used[s] = true;
    p[s] = -1;
    while (!q.empty())
    {
        int vi = q.front();
        q.pop();
        for (int u : graph[vi])
        {
            if (!used[u])
            {
                used[u] = true;
                q.push(u);
                d[u] = d[vi] + 1;
                p[u] = vi;
            }
        }
    }
    int u = 2;
    if (!used[u])
    {
        cout << "No path!";
    }
    else
    {
        vector<int> path;
        for (int vi = u; vi != -1; vi = p[vi])
            path.push_back(vi);
        reverse(path.begin(), path.end());
        cout << "Path: ";
        for (int vi : path)
            cout << vi << " ";
    }
    bool visited[v+1];
    cout<<"\nDFS:------>";
    cout<<s<<" ";
    dfs(s,visited,graph) ;

    return 0;
}
