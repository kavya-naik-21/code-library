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
        int n,k;
        cin>>n>>k;
        vector<string>s;
        int m=k;
        rep(i,0,n){
            rep(j,0,n){
                if(i==j && i%2==0 && k>0){
                    // cout<<"R";
                    k--;
                }
                // else cout<<".";
            }
            // cout<<endl;
        }
        if(k==0){
           rep(i,0,n){
            rep(j,0,n){
                if(i==j && i%2==0 && m>0){
                    cout<<"R";
                    m--;
                }
                else cout<<".";
            }
            cout<<endl;
            } 
        }
        else cout<<"-1"<<endl;
    }
    return 0;
}
/*
5
100
71345
3259
50555
2050047
*/