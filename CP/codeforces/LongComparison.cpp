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
        int x1,x2,p1,p2;
        cin>>x1>>p1>>x2>>p2;
		int mn=min(p1,p2);
		p1-=mn; p2-=mn;
        if(p1>=7) cout<<">"<<endl;
        elif(p2>=7) cout<<"<"<<endl;
		else{
            rep(i,0,p1) x1*=10;
            rep(i,0,p2) x2*=10;
            if(x1<x2) cout<<"<"<<endl;
            elif(x1>x2) cout<<">"<<endl;
            else cout<<"="<<endl;
		}
    }
    return 0;
}

/*
5
2 1
19 0
10 2
100 1
1999 0
2 3
1 0
1 0
99 0
1 2
*/