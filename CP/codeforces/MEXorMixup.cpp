#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define fi first
#define se second
#define pub push_back
#define pi pair<int,int>
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define all(v) (v).begin(), (v).end()
#define rep(i, l, r) for(int i=(int)(l);i<(int)(r);i++)
#define repd(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define clr(a,x) memset(a,x,sizeof(a))
#define rr(v) for(auto &val:v)
#define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<endl;
#define ln length()
#define sz size()
#define mod 1000000007
#define sorta(v) sort(all(v))
#define sortd(v) sort(all(v),greater<int>())
#define elif else if
void read(vector<int>&v, int n) {rep(i,0,n) { int temp; cin>>temp; v.pub(temp);}}

int32_t main()
{
    fastIO;
    int t; cin>>t;
    vector<int>xr(300001);
    xr[0]=0;
    rep(i,1,300001){
        xr[i]=i^xr[i-1];
    }
    while(t--){
        int a,b; cin>>a>>b;
        int x=xr[a-1];
        if(x==b) cout<<a<<endl;
        elif((x^b)!=a) cout<<a+1<<endl;
        else cout<<a+2<<endl;
    }
    return 0;
}

/*
5
1 1
2 1
2 0
1 10000
2 10000
*/
