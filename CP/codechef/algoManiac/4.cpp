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
	    int m,n,x,y;
        cin>>n>>m>>x>>y;
        int mn=min(n,m),mx=max(n,m);
        int ans=min((mn-1)*y,(n-1)+(m-1)*n)+(mn-mx)*x;
        cout<<ans<<endl;
	}
    return 0;
}