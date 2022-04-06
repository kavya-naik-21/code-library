#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define fi first
#define se second
#define pub push_back
#define ii pair<int,int>
#define pi pair<int,ii>
#define all(v) (v).begin(), (v).end()
#define sorta(v) sort(all(v))
#define sortd(v) sort(all(v),greater<int>())
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
    while(t--){
        int n;
        cin>>n;
        vector<ii>v;
        rep(i,0,n){
            int k;  cin>>k;
            int ans=0;
            rep(j,0,k){
                int a;  cin>>a;
                ans=max(ans,a-j);
            }
            v.pub({ans,k});
        }
        sorta(v);
        int mx=0,sum=0;
        rr(v){
            mx=max(mx,val.fi-sum);
            sum+=val.se;
        }
        cout<<mx+1<<endl;
    }
    return 0;
}