#include<bits/stdc++.h>
using namespace std;
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define int long long int
#define fi first
#define se second
#define pub push_back
#define ii pair<int,int>
#define pi pair<int,ii>
#define mk make_pair
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
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>arr;
        int c0=0,c1=0;
        rep(i,0,n){
            if(s[i]=='0') {
                arr.pub(0);
                c0++;
            }
            else {
                arr.pub(1);
                c1++;
            }
        }
        rep(i,0,n){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        int prev;
        if(n%2==0) prev=!arr[0];
        else prev=arr[0];
        int ans=0;
        if(c1!=0 && c0!=0)
        repd(i,n-1,0){
                if(arr[i]!=prev && k>0){
                    ans=max(i+1,ans);
                    k--;
                    prev=arr[i];
                }
        }
        if(k!=0) cout<<"-1"<<endl;
        else cout<<ans<<endl;

    }
    return 0;
}

/*
3
6 2
100101
5 1
101116 
6 1
000000
*/