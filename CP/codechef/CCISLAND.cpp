/* C program to find the number of islands using DFS */

#include<bits/stdc++.h>
using namespace std;
/*checks whether the given index is out of the array. Out of array is considered as 0 */

int isSafe(int N,int M,int i,int j)
{
	if(i < 0 || i >= N || j < 0 || j >= M)
		return 0;
	return 1;
}
/* this function does the DFS for every new one 1 found and assign every connected one to zero */
int delIsland(int **A,int N,int M,int i,int j,long long int  y)
{
	if(isSafe(N,M,i,j) && A[i][j] == 1)
		{
			A[i][j] = 0;
			delIsland(A, N , M , i-1, j-1);
			delIsland(A, N, M, i-1, j);
			delIsland(A, N, M, i-1, j+1);
			delIsland(A, N, M, i, j-1);
			delIsland(A, N, M, i, j+1);
			delIsland(A, N, M, i+1, j-1);
			delIsland(A, N, M, i+1, j);
			delIsland(A, N, M, i+1, j+1);
            return ++y;
		}
}

/* get the input and calls the function */
int main()
{
	int N,M;
	int i,j;
    cin>>N,M;
	int **A = (int **)malloc(N * sizeof(int *));
	for (i = 0; i < N; i++)
		A[i] = (int *)malloc(M * sizeof(int));
		for(i = 0; i < N ; i++)
			for(j = 0; j < M; j++)
				cin>>A[i][j];
    long long int x=N*M;
    int count[x]={0};
    int y=0;
    for(i=0;i<N;i++)
		{
			for(j=0;j<M;j++)
				if(A[i][j] == 1)
					{
						
						count[y]=delIsland(A,N,M,i,j,count[y]);
                        y++;
					}
		}
    
	return 0;
}