#include<stdio.h>
#include<limits.h>
void warshall(int n,int a[n][n])
{
    for(int k=0;k<n;k++)
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                a[i][j]=a[i][j] || (a[i][k] && a[k][j]);
}

void display(int n,int a[n][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }    
}          

int main()
{
    int n;
    printf("Enter number of vertices: ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter adjacency matrix: ");
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    warshall(n,a);
    display(n,a);
}