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
#define print2d(mat, n, m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<< endl;}}
#define clr(a,x) memset(a,x,sizeof(a))
#define rr(v) for(auto &val:v)
#define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<endl;
#define ln length()
#define sz size()
#define mod 1000000007
#define elif else if
void read(vector<int>&v, int n) {rep(i,0,n) { int temp; cin>>temp; v.pub(temp);}}

int32_t main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        char prev=s[0];
        map<char,bool>mp;
        vector<int>d(s.ln+1,1);
        s[s.ln]='1';
        rep(i,1,s.ln+1){
            if(s[i]==prev) d[i]=d[i-1]+1;
            else if(d[i-1]%2!=0) mp[s[i-1]]=true;
            prev=s[i];
        }
        rr(mp) cout<<val.fi;
        cout<<endl;
    }
    return 0;
}

/*
a
zzaaz
ccff
cbddbb
*/