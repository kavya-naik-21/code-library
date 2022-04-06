#include<stdio.h>
#include<string.h>
#include<limits.h>
int miniv(int dist[],int visited[],int n,int u)
{
    int min=INT_MAX;
    int v=u+1;
    for(int i=0;i<n;i++)
    {
        if(dist[i]<min && !visited[i])
        {
            min=dist[i];
            v=i;
        }
    }
    return v;
}

int mini(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}

void dijkstra(int n,int weight[n][n], int q)
{
    int visited[n],dist[n],path[n];
    memset(visited,0,sizeof(visited));
    memset(path,0,sizeof(path));
    int u=0;
    visited[u]=1;
    for(int i=0;i<n;i++)
        dist[i]=weight[u][i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(!visited[j])
            {
                int cumm;
                if(dist[u]==INT_MAX || weight[u][j]==INT_MAX)
                    cumm=INT_MAX;
                else
                    cumm=dist[u]+weight[u][j]; 
                int min=mini(cumm,dist[j]);
                if(min==cumm && cumm!=INT_MAX)
                {
                    dist[j]=dist[u]+weight[u][j];
                    path[j]=u;
                }
            }  
        }
        u=miniv(dist,visited,n,u);
        visited[u]=1;
    } 
    for(int i=0;i<q;i++)
    {
        int t;
        scanf("%d",&t);
        printf("%d\n",dist[t]);
    }     
}
int main()
{
    int n,e,q;
    scanf("%d %d",&n,&e);
    int weight[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
                weight[i][j]=weight[j][i]=0;
            else
                weight[i][j]=weight[j][i]=INT_MAX;
        }
    }
    for(int i=0;i<e;i++)
    {
        int src,dest,t;
        scanf("%d %d %d",&src,&dest,&t);
        if(t<weight[src][dest])
            weight[src][dest]=t;
    }
    scanf("%d",&q);
    dijkstra(n,weight,q);
}