#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long m,n,x;
        cin>>n>>m>>x;
        long long row,col;
        col=(x-1)/n+1;
        row=(x-1)%n+1;
        cout<<col+(row-1)*m<<endl;
    }
    return 0;
}