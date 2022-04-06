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
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        rep(i,0,n){
            int temp;
            cin>>temp;
            v.pub(temp);
        }
        vector<int>gcd(2);
        rep(i,0,n){
            gcd[i%2]=__gcd(v[i],gcd[i%2]);
        }
        map<int,bool>mp;
        mp[gcd[0]]=mp[gcd[1]]=false;
        rep(i,0,n){
            if(v[i]%gcd[(i+1)%2]==0) mp[gcd[(i+1)%2]]=true;
        }
        int ans=0;
        rr(mp){
            if(!val.se) ans=val.fi;
        }
        cout<<ans<<endl;
    }
    return 0;
    
}

/*
5
5
1 2 3 4 5
3
10 5 15
3
100 10 200
10
9 8 2 6 6 2 8 6 5 4
2
1 3
*/