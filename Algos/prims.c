#include<stdio.h>
#include<limits.h>
int minidx(int n,int dist[],int vis[])
{
    int min=INT_MAX,minidx=0;
    for(int i=0;i<n;i++)
    {
        if(dist[i]<min && !vis[i])
        {
            min=dist[i];
            minidx=i;
        }
    }
    return minidx;
}

void prims(int n,int c[n][n],int src)
{
    int vis[n],dist[n],path[n],u;
    for(int i=0;i<n;i++)
    {
        vis[i]=0;
        dist[i]=INT_MAX;
        path[i]=-1;
    }
    vis[src]=1;
    dist[src]=0;
    u=src;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(!vis[j] && c[u][j]<dist[j])
            {
                path[j]=u;
                dist[j]=c[u][j];
            }
        }
        u=minidx(n,dist,vis);
        vis[u]=1;
    }
    int mstweight=0;
    for(int i=0;i<n;i++)
    {
        printf("%d ",dist[i]);
        mstweight+=dist[i];
    }
    printf("\nMst weight is: %d\n",mstweight);
}

int main()
{
    int n,src;
    printf("Enter number of vertices: ");
    scanf("%d",&n);
    int c[n][n];
    printf("Enter cost matrix: ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&c[i][j]);
            if(i!=j && c[i][j]==0)
                c[i][j]=INT_MAX;
        }
    }
    printf("Enter source vertex: ");
    scanf("%d",&src);
    prims(n,c,src);
}