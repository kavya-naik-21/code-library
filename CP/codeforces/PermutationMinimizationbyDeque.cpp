#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define fi first
#define se second
#define pub push_back
#define puf push_front
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
int power(int x, unsigned int y){int res = 1;while (y > 0){ if (y & 1){res = res*x;} y = y>>1;x = x*x;}return res;}

int32_t main()
{
    fastIO;
    int t=1; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v;
        read(v,n);
        deque<int>dq;
        dq.pub(v[0]);
        rep(i,1,n){
            if(v[i]<dq.front()) dq.puf(v[i]);
            else dq.pub(v[i]);
        }
        print(dq);
        
    }
    return 0;
}
/*
4
3 1 2 4
3
3 2 1
3
3 1 2
2
1 2
2
2 1
*/