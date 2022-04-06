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
        reverse(all(s));
        // cout<<s<<endl;
        int ans=(s.find('0'));
        int ans2=(s.find('5'));
        int ans3=(s.find('2'));
        int ans4=(s.find('7'));
        int res1=1e18;
        cout<<ans<<endl;
        int fl=0;
        if(ans<=s.ln){

            s[ans]='k';
            // reverse(all(s));
            // ans=s.ln-ans-1;
            cout<<s<<endl;
            int f1=s.find('0');
            cout<<f1<<endl;
            if(f1<=s.ln and f1>=0 and f1>ans) res1=f1-ans-1;
            if(f1<=s.ln and f1>=0 and f1<ans) res1=ans-f1-1;
            cout<<"res1---"<<res1<<endl;
            if(ans2<=s.ln and ans2>=0 and ans2>ans) res1=min(res1,ans2-ans-1);
            if(ans2<=s.ln and ans2>=0 and ans2<ans) res1=min(res1,ans-ans2-1);
            cout<<"res1---"<<res1<<endl;
            cout<<res1+ans<<endl;
            res1=res1+ans;
            fl=1;
        }
                    int res2=1e18;

        if(ans2<=s.ln){
            cout<<"res1 is -"<<endl;
            s[ans2]='k';
            // ans2=s.ln-ans2-1;
            cout<<s<<endl;
            if(ans3<=s.ln and ans3>=0 and ans3>ans2) res2=min(res2,ans3-ans2-1);
            if(ans3<=s.ln and ans3>=0 and ans3<ans2) res2=min(res2,ans2-ans3-1);
            int f2=s.find('7');
            cout<<f2<<endl;
            if(ans4<=s.ln and ans4>=0 and ans4>ans2) res2=min(res2,ans4-ans2-1);
            if(ans4<=s.ln and ans4>=0 and ans4<ans2) res2=min(res2,ans2-ans4-1);
            cout<<res2+ans2<<endl;
            res2=res2+ans2;
        }
        cout<<min(res1,res2)<<endl;
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