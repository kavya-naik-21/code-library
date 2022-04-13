#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define Matrix vector<vector<ll>> 
#define mod 1000000007
ll n, m;
Matrix start;

void MatrixMultiply(Matrix &a, Matrix &b)
{
    Matrix prod(a.size(), vector<ll>(a.size(), 0));
    for(int i = 0; i < a.size(); i++)
        for(int j = 0; j < a.size(); j++)         
            for(int k = 0; k < a.size(); k++)                
                prod[i][j] = (prod[i][j] + (a[i][k] * b[k][j]) % mod) % mod;
    for(int i = 0; i < a.size(); i++)
        for(int j = 0; j < a.size(); j++){
            if(prod[i][j] < 0) prod[i][j] += mod;
            a[i][j] = prod[i][j];
        }
}

void MatrixPower(Matrix &res, ll n)
{
    Matrix M = start;
    if(n == 1) return;
    MatrixPower(res, n / 2);
    MatrixMultiply(res, res);
    if(n % 2 != 0)
        MatrixMultiply(res, M);
}

ll Solve(ll n)
{
    
    start = Matrix(m+1, vector<ll>(m+1, 0));
    start[0][0] = start[m][0] = start[m][m] = 1; 
    for(int i = 1; i <= m; i++)
        start[i-1][i] = 1;              
    Matrix M = start;
    MatrixPower(M, n-1);
    return M[0][0];
}

int main() 
{   
    cin >> n >> m;   
    cout << Solve(n + 2);    
    return 0;
}