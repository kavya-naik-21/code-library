#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int visited[10],v,source;

void dfs(int v,int adj[v][v],int i)
{
    visited[i]=1;
    printf("%d ",i);
    for(int j=0;j<v;j++)
        if(!visited[j] && adj[i][j])
            dfs(v,adj,j);
}

int main()
{
    memset(visited,0,sizeof(visited));
    printf("Enter the number of vertices: ");
    scanf("%d",&v);
    int adj[v][v];
    printf("Enter the adjacency matrix (%d * %d): ",v,v);
    for(int i=0;i<v;i++)
        for(int j=0;j<v;j++)
            scanf("%d",&adj[i][j]);
    printf("Enter source vertex: ");
    scanf("%d",&source);
    dfs(v,adj,source);
}