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
        string s,g;
        cin>>s;
        char x,y;
        int n=s.ln;
        int cx=0,cy=0;
        if(s[0]!=s[n-1]) {
            x=s[0]; s[0]='(';
            y=s[n-1]; s[n-1]=')';
            cx++;
            cy++;
        
        rep(i,1,n-1){
            if(s[i]==x) { cx++; s[i]='(';}
            elif(s[i]==y) { cy++; s[i]=')';}
        }
        char z=s[n-1];
        if(min(cy,cx)==cx) z=s[0];
        rep(i,0,n){
            if(s[i]!='(' && s[i]!=')') s[i]=z;
        }
        stack<char>st;
        st.push(s[0]);
        bool f=true;
        rep(i,1,n){
            if(s[i]=='(') st.push('(');
            else if(st.sz!=0) st.pop();
            else { f=false; break; }
        }
        if(st.sz!=0 || !f) cout<<"no"<<endl;
        else cout<<"yes"<<endl;
        }
        else cout<<"no"<<endl;

    }
    return 0;
}

/*
4
AABBAC
CACA
BBBBAC
ABCA
*/
