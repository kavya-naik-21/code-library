#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void bfs(int v, int m[v][v], int source) {
    int queue[20];
    int front = 0, rear = 0, u, i;
    int visited[10];
    for (i= 0; i < v; i ++)
        visited[i] = 0;
    queue[rear] = source;
    visited[source] = 1;
    printf("The BFS Traversal is... \n");
    while (front <= rear) {
        u = queue[front];
        printf("%d\t", u);
        front = front + 1;
        for(i=0;i<v;i++) {
            if(m[u][i] == 1 && visited[i] == 0) {
                visited[i] = 1;
                rear = rear + 1;
                queue[rear] = i;
            }
        }
    }
}
int main() {
    int v,source;
    printf("Enter the number of vertices: ");
    scanf("%d",&v);
    printf("Enter the adjacency matrix (%d * %d): ",v,v);
    int adj[v][v];
    for(int i=0;i<v;i++)
        for(int j=0;j<v;j++)
            scanf("%d",&adj[i][j]);
    printf("Enter source vertex: ");
    scanf("%d",&source);
    bfs(v,adj,source);
}