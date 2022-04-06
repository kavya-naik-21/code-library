#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define  fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    fast_io;
    ll t;
    cin>>t;
    while(t--)
    {
        int n,r1,r2,c1,c2,flag=0;
        cin>>n;
        char a[400][400];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='*')
                {
                    if(flag==0)
                    {
                        r1=i;
                        c1=j;
                        flag=1;
                    }
                    else
                    {
                        r2=i;
                        c2=j;
                    }
                }
            }
        }
        a[r1][c2]='*';
        a[r2][c1]='*';
        if(r1==r2)
        {
            if((r1+1)<n)
            {
                a[r1+1][c1]='*';
                a[r2+1][c2]='*';
            }
            else
            {
                a[r1-1][c1]='*';
                a[r2-1][c2]='*';
            }

        }
        if(c1==c2)
        {
            if((c1+1)<n)
            {
                a[r1][c1+1]='*';
                a[r2][c2+1]='*';
            }
            else
            {
                a[r1][c1-1]='*';
                a[r2][c2-1]='*';
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<a[i][j];
            }
            cout<<"\n";
        }
    }
    return 0;
}