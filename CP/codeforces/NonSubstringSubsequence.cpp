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
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        vector<int>dp0(s.ln+1),dp1(s.ln+1);
        if(s[0]=='0') { dp0[1]=1; dp1[1]=0;}
        else  { dp0[1]=0; dp1[1]=1;}
        rep(i,2,s.ln+1){
            dp0[i]=dp0[i-1]; dp1[i]=dp1[i-1];
            if(s[i]=='0') dp0[i]++;
            else if(s[i]=='1') dp1[i]++;
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            if((s[l-1]=='0' && dp0[l-1]>=1) || (s[l-1]=='1' && dp1[l-1]>=1) || (s[r-1]=='0' && (dp0[s.ln]-dp0[r])>=1) || (s[r-1]=='1' && (dp1[s.ln]-dp1[r])>=1)) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
            // cout<<s[l-1]<<" "<<dp0[l-1]<<endl;
        }

    }
    return 0;
}

/*

6 3
001000
2 4
1 3
3 5
4 2
1111
1 4
2 3

*/