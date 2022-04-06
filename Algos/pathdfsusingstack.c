#include<stdio.h>
#include<string.h>
#define MAX 20
int visited[20],path[20],v,source,dest,stack[20],top=-1;
void push(int vertex)
{
        if(top == (MAX-1))
        {
                printf("\nStack Overflow\n");
                return;
        }
        top=top+1;
        stack[top] = vertex;

}/*End of push()*/

int pop()
{
        int vertex;
        if(top == -1)
        {
                printf("\nStack Underflow\n");
                return 0;
        }
        else
        {
                vertex = stack[top];
                top=top-1;
                return vertex;
        }
}/*End of pop()*/

int isEmpty_stack( )
{
  if(top == -1)
          return 1;
  else
          return 0;
}

void dfs(int v,int adj[v][v],int vertex)
{
    int j;
    push(vertex);
    while(!isEmpty_stack())
    {
        vertex=pop();
        if(visited[vertex]==0)
        {
            visited[vertex]=1;
            printf("%d ",vertex);
        }
        for(j=0;j<v;j++){
            if(!visited[j] && adj[vertex][j]){
                path[j]=vertex;
                push(j);
            }
        }
    }
    /*visited[i]=1;
    printf("%d ",i);
    for(int j=0;j<v;j++)
        if(!visited[j] && adj[i][j])
        {
            path[j]=i;
            dfs(v,adj,j);
        }*/
}

void pathfind(int a)
{
    if(a !=-1)
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
