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
#define repu(i, l, r) for(int i=(int)(l);i<=(int)(r);i++)
#define repd(i, l, r) for (int i=(int)(l);i>=(int)(r);i--)
#define clrg(i, l, r) for(int i=(int)(l);i<(int)(r);i++)visited[i]=0;
#define mkset(i,l,r) for(int i=(int)(l);i<(int)r;i++) p[i]=i;
#define print2d(mat,n,m){for(int i=0;i<(int)(n);i++){for(int j=0;j<(m);j++){cout<<mat[i][j]<<" ";}cout<< endl;}}
#define clr(a,x) memset(a,x,sizeof(a))
#define rr(v) for(auto &val:v)
#define print(v) for (const auto itr : v){cout<<itr<<' ';}cout<<"\n";
#define ln length()
#define sz size()
#define mod9 1000000009
#define mod 1000000007
#define elif else if
int find_set(vector<int> &p,int v) {
    if (v == p[v])
        return v;
    return p[v] = find_set(p,p[v]);
}
void union_sets(vector<int> &p,int a, int b) {
    a = find_set(p,a);
    b = find_set(p,b);
    if (a != b)
        p[b] = a;
}
int32_t main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--)
    {
        int n,e;
        cin>>n>>e;
        vector<int>p(n+1);
        mkset(i,0,n+1);
        rep(i,0,e){
            cout<<"ENTERED\n"<<endl;
            int x,y;
            cin>>x>>y;
            union_sets(p,x,y);
        }
        rep(i,0,n+1){
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*
3
4 2
1 2
2 3
5 3
1 2
2 3
1 3
6 3
1 2
3 4
5 6
*/