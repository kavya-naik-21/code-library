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
    while(t--){
        int n,l;
        cin>>n>>l;
        int d[l+1];
        rep(i,0,n){
            int temp; cin>>temp;
            rep(j,0,l){
                if(temp&(1<<j)) d[l-j-1]++;
            }
        }
        int ans=0;
        rep(i,0,l){
            if(d[i]>(d[i]-n)) ans+=pow(2,i);
        }
        cout<<ans<<endl;
    }
    return 0;
}

/*


*/