#include<stdio.h>
#include<string.h>
int visited[10],v,source,flag=0;
typedef struct node
{
    int prev;
    int next;
}N;

void dfs(N status[],int v,int adj[v][v],int i,int prev)
{
    visited[i]=1;
    printf("%d ",i);
    for(int j=0;j<v;j++)
        if(adj[i][j])
        {
            status[i].prev=prev;
            status[i].next=j;
            for(int k=0;k<v;k++)
            {
                for(int l=0;l<v;l++)
                {
                    if((status[k].next==status[l].next && status[k].next!=-1 && status[l].next!=-1 && k!=l) || (source==status[l].next))
                        flag=1;
                }
            }
            if(!visited[j])
                dfs(status,v,adj,j,i);
        }
    for(int k=0;k<v;k++)
    {
        for(int l=0;l<v;l++)
        {
            if((status[k].next==status[l].next && status[k].next!=-1 && status[l].next!=-1 && k!=l) || (source==status[l].next))
                flag=1;
        }
    }
}

int main()
{
    memset(visited,0,sizeof(visited));
    printf("Enter the number of vertices: ");
    scanf("%d",&v);
    int adj[v][v];
    N status[v];
    for(int i=0;i<v;i++)
        status[i].prev=status[i].next=-1;
    printf("Enter the adjacency matrix (%d * %d): ",v,v);
    for(int i=0;i<v;i++)
        for(int j=0;j<v;j++)
            scanf("%d",&adj[i][j]);
    printf("Enter source vertex: ");
    scanf("%d",&source);
    dfs(status,v,adj,source,-1);
    if(flag)
        printf("There is a cycle present in graph.\n");
    else
        printf("There is no cycle present in graph.\n");
}