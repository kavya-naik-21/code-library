#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define fi first
#define se second
#define pub push_back
#define ii pair<int,int>
#define pi pair<int,ii>
#define all(v) (v).begin(), (v).end()
#define sorta(v) sort(all(v))
#define sortd(v) sort(all(v),greater<int>())
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


bool ismid(int mid,vector<int>&v){
    int count=0;
    rep(i,0,v.sz){
        if(v[i]<=mid) count++;
    }
    return (count>=ceil(v.sz/2.0));
}
void solve(vector<int> &v){
    int l=*min_element(all(v));
    int r=*max_element(all(v));
    cout<<l<<" "<<r<<" ";
    while(l<r){
        int mid=((l+r)/2);
        cout<<mid<<endl;
        if(ismid(mid,v)) r=mid;
        else l=mid+1;
        cout<<l<<" "<<r<<" ";
    }
    cout<<r<<endl;
}
int32_t main()
{
    fastIO;
    int test;
    cin>>test;
    rep(t,0,test){
        // vector<int> v1={4,6,8,11,2,1,3};
        // vector<int> v1={8,3,4,2,6,7,9};
        // vector<int> v1={8,3,7,4,6,6,9};
        vector<int> v1={8,3,7,2,6,9};
        solve(v1);
        
    }
    return 0;
}