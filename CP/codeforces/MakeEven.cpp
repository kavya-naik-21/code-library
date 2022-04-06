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
        string s;
        cin>>s;
        int c=-1;
        rep(i,0,s.ln){
            if(s[i]%2==0)  c=i;
        }
        if(c==(s.ln-1)) cout<<"0"<<endl;
        else if(s[0]%2==0) cout<<"1"<<endl;
        else if(c==-1) cout<<"-1"<<endl;
        else cout<<"2"<<endl;
    }
    return 0;
}

/*
3876
387
4489
3
*/
