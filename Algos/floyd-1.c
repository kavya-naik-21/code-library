#include<stdio.h>
#include<limits.h>
int min(int a,int b)
{
    if(a<b)
        return a;
    return b;
}

void floyd1(int n,int c[n][n])
{
    for(int k=0;k<n;k++)
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                int cumm;
                if(c[i][k]==INT_MAX || c[k][j]==INT_MAX)
                    cumm=INT_MAX;
                else
                    cumm=c[i][k]+c[k][j];
                c[i][j]=min(c[i][j],cumm);
            }
}

void display1(int n,int c[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }    
}          

int main()
{
    int n;
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
    floyd1(n,c);
    display1(n,c);
}