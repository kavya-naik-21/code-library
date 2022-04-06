#include<stdio.h>
#include<string.h>
int visited[20],v,source,top=-1,stack[20];

void dfs(int v,int adj[v][v],int i,int prev)
{
    visited[i]=1;
    for(int j=0;j<v;j++)
        if(!visited[j] && adj[i][j])
            dfs(v,adj,j,i);
    stack[++top]=i;
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
    for(source=0;source<v;source++)
        if(!visited[source])
            dfs(v,adj,source,-1);
    printf("Topological order is: ");
    for(int i=top;i>=0;i--)
        if(stack[i]!=-1)
            printf("%d ",stack[i]);
}