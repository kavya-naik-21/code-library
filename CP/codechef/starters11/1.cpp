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
    cin >> t;
    // t=1;
    while(t--){
        int n,k;
        cin>>n>>k;
        // n=5;
        vector<int>v;
        rep(i,0,n){
            int temp;
            cin>>temp;
            v.pub(temp);
        }
        map<int,int>mp;
        int ans;
        rep(i,0,n){
            if(v[i]==1) {
                mp[i]=1;
                ans=i;
            }
        }
        int sum=0;
        int dist1[n+1]={ans};
        int dist2[n+1]={ans};
        rep(i,0,n){
            if(v[i]==0) {
                rr(mp){
                    dist2[i]=min((val.first-((i-1)%n+n)%n),dist1[i]);
                }
                rr(mp){
                    if((val.first-((i+1)%n+n)%n)!=dist1[i])
                    dist2[i]=min((val.first-((i+1)%n+n)%n),dist2[i]);
                }
                dist1[i]=min(dist1[i],dist2[i]);
                dist2[i]=min(dist1[i],dist2[i]);
            }
            else if(v[i]==1 && v[((i-1)%n+n)%n]==0 && v[((i+1)%n+n)%n]==0){
                sum+=1+(k-1)*2;
            }
            else if(v[i]==1 && (v[((i-1)%n+n)%n]==1 || v[((i+1)%n+n)%n]==1)){
                sum+=2+(k-1)*2;
            }
        }
    }
    return 0;

}