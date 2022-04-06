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
#define clrg(i, l, r) for(int i=(int)(l);i<(int)(r);i++)visited[i]=0;
#define print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<< endl;}}
#define clr(a,x) memset(a,x,sizeof(a))
#define rr(v) for(auto &val:v)
#define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<"\n";
#define ln length()
#define sz size()
#define mod9 1000000009
#define mod 1000000007
#define elif else if
int32_t main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int>a(n+1);
        vector<int>v(n+1,-1);
        int prev=-1;
        int pri=-1;
        rep(i,1,n+1){
            int temp;
            cin>>temp;
            a[i]=temp;
            if(temp==1) {
                v[i]=0;
                prev=v[i];
                pri=i;
            }
            else if(temp==2) {
                v[i]=0;
                int k=i-1;
                while(k>0)
                {
                    if(v[k]==-1) v[k]=i-k;
                     v[k]=min(v[k],i-k);
                     k--;
                }
            }
            else
                {
                    if(prev!=-1)
                    {
                        v[i]=prev+(i-pri);
                        prev=v[i];
                        pri=i;
                    }
                }
        }
        rep(i,0,m){
            int b;
            cin>>b;
            if(b==1) cout<<"0 ";
            else
            cout<<v[b]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
/*
100
11 3
0 0 1 2 0 1 0 1 1 1 0 

*/