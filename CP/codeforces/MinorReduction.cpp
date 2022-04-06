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
        string s;
        cin>>s;
        int n=s.ln;
        int i=n-1;
        // cout<<(s[i]-'0'+s[i-1]-'0')<<endl;
        while((s[i]-'0'+s[i-1]-'0')< 10 && i!=0) i--;
        // cout<<i<<endl;
        if(i==0)
        {
            int ans=s.find('0');
            // cout<<"00---->"<<ans<<endl;
            if(ans>=0)
            rep(j,0,n){
                if(j!=ans)
                cout<<s[j];
            }
            else{
                int x=(s[0]-'0'+s[1]-'0');
                // cout<<x<<endl;
                string y;
                y=x+'0';
                // cout<<y<<endl;
                rep(j,2,n){
                    y+=s[j];
                }
                cout<<y;

            }
        }
        else{
            int x=(s[i]-'0'+s[i-1]-'0');
            // cout<<x<<endl;
            char a=(int)(x/10)+'0'; 
            char b=(int)(x%10)+'0';
            // cout<<a<<" "<<b<<endl;
            s[i-1]=a;s[i]=b;
            cout<<s;
        }
        // if(i==0) 
        cout<<endl;
    }
    return 0;
}

/*
2
10057
90
*/