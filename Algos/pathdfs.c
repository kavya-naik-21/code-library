#include<stdio.h>
#include<string.h>
int visited[20],path[20],v,source,dest;

void dfs(int v,int adj[v][v],int i)
{
    visited[i]=1;
    printf("%d ",i);
    for(int j=0;j<v;j++)
        if(!visited[j] && adj[i][j])
        {
            path[j]=i;
            dfs(v,adj,j);
        }
}

void pathfind(int a)
{
    if(a!=-1)
        pathfind(path[a]);
    if(a!=-1)
        printf("%d ",a);
}

int main()
{
    memset(visited,0,sizeof(visited));
    memset(path,-1,sizeof(path));
    printf("Enter the number of vertices: ");
    scanf("%d",&v);
    int adj[v][v];
    printf("Enter the adjacency matrix (%d * %d): ",v,v);
    for(int i=0;i<v;i++)
        for(int j=0;j<v;j++)
            scanf("%d",&adj[i][j]);
    printf("Enter source vertex: ");
    scanf("%d",&source);
    printf("Enter destination vertex: ");
    scanf("%d",&dest);
    dfs(v,adj,source);
    printf("Path between src and dest is: ");
    pathfind(path[dest]);
}