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
        string s,t; 
        cin>>s;
        cin>>t;
        map<char,int>mp;
        if(t!="abc") {
            sorta(s);
            cout<<s<<endl;
        }
        else {
            int n=s.ln;
            rep(i,0,n){
                mp[s[i]]++;
            }
            int j=3;
            if(mp['a']!=0){
            while(mp['a']--) cout<<'a';
            while(mp['c']--) cout<<'c';
            while(mp['b']--) cout<<'b';
            }
            else j=1;
            rep(i,j,26)
            {
                while(mp[(char)('a'+i)]--) {
                    cout<<(char)('a'+i);
                }
            }
            cout<<endl;
            
        }
        

    }
    return 0;
}

/*
abacaba
abc
cccba
acb
dbsic
bac
abracadabra
abc
dddddddddddd
cba
bbc
abc
ac
abc
*/