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
void readc(vector<int>&v, int n) {
    int sum=0;
    rep(i,0,n) { 
        int temp; cin>>temp;
        sum+=temp; 
        v.pub(sum);
    }
}
int32_t main()
{
    fastIO;
    int t; cin>>t;
    while(t--){
        int n,m;
        vector<int>r,b;
        cin>>n; readc(r,n);
        cin>>m; readc(b,m);
        int mx1=max(0ll,*max_element(all(r)));
        int mx2=max(0ll,*max_element(all(b)));
        int ans=max(0ll,(mx1+mx2));
        cout<<ans<<endl;
    }
    return 0;
}

/*
4
4
6 -5 7 -3
3
2 3 -4
2
1 1
4
10 -3 2 2
5
-1 -2 -3 -4 -5
5
-1 -2 -3 -4 -5
1
0
1
0
*/