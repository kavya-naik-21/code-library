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
        int x,n;
        cin>>x>>n;
        if(x%2!=0){
            if(n%4==0)  cout<<x;
            else if(n%4==1) cout<<(x+4*(n/4)+1);
            else if(n%4==2) cout<<(x-1);
            else cout<<(x-4*(n/4+1));
        }
        else{
            if(n%4==0)  cout<<x;
            else if(n%4==1) cout<<(x-4*(n/4)-1);
            else if(n%4==2) cout<<(x+1);
            else cout<<(x+4*(n/4+1));
        }
        cout<<endl;
    }
    return 0;
}

/*

0 1
0 2
10 10
10 99
177 13
10000000000 987654321
-433494437 87178291199
1 0
-1 1




-1
1
11
110
190
9012345679
-87611785637
1
0


*/