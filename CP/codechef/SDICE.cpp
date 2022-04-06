#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define fi first
#define se second
#define pub push_back
#define pi pair<int,int>
#define all(v) (v).begin(), (v).end()
#define rep(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define repd(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define clrg(i, l, r) for(int i=(int)(l);i<(int)(r);i++)vis[i]=0,v[i].clear();
int power(int x, unsigned int y){int res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}
int powermod(int x, unsigned int y, int p){int res = 1;x = x % p;while (y > 0){if (y & 1){res = (res*x) % p;}y = y>>1; x = (x*x) % p;}return res;}
#define print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<< endl;}}
#define clr(a,x) memset(a,x,sizeof(a))
#define rr(v) for(auto &val:v)
#define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<"\n";
#define ln length()
#define sz size()
#define mod 1000000007
#define elif else if
int32_t main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n>4)
        {
            int x=n%4;
            if(x==1)
              cout<<60*(n/4)+20-(x)*4<<endl;
            else if(x==2)
              cout<<60*(n/4)+36-(x)*4<<endl;
            else if(x==3)
              cout<<60*(n/4)+51-(x)*4<<endl;
            else if(x==0)
              cout<<60*(n/4)<<endl;
        }
        else
           {
               if(n==1)
               cout<<"20"<<endl;
               else if(n==2)
               cout<<"36"<<endl;
               else if(n==3)
               cout<<"51"<<endl;
               else if(n==4)
               cout<<"60"<<endl;
           }
    }
    return 0;
}