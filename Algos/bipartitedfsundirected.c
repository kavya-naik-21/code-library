#include<stdio.h>
#include<string.h>
int visited[20],v,source,colour[20],flag=0;

void dfs(int v,int adj[v][v],int i,int prevcolour)
{
    visited[i]=1;
    colour[i]=!prevcolour;
    printf("%d ",i);
    for(int j=0;j<v;j++)
        if(adj[i][j])
        {
            if(colour[j]!=-1 && colour[j]!=!colour[i])
                flag=1;
            if(!visited[j])
                dfs(v,adj,j,colour[i]);
        }
}

int main()
{
    memset(visited,0,sizeof(visited));
    memset(colour,-1,sizeof(colour));
    printf("Enter the number of vertices: ");
    scanf("%d",&v);
    int adj[v][v];
    printf("Enter the adjacency matrix (%d * %d): ",v,v);
    for(int i=0;i<v;i++)
        for(int j=0;j<v;j++)
            scanf("%d",&adj[i][j]);
    printf("Enter source vertex: ");
    scanf("%d",&source);
    dfs(v,adj,source,1);
    if(flag)
        printf("Graph is not bipartite.\n");
    else
        printf("Graph is bipartite.\n");
}