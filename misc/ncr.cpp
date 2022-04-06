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
constexpr int MAX = 30;
long long dp[MAX + 1][MAX + 1];
long long C[MAX + 1][MAX + 1];
int32_t main()
{
    fastIO;
    int A=3;
    int B=2;
        dp[0][0] = 1;
    for (int i = 0; i <= A; ++i) {
        for (int j = 0; j <= B; ++j) {
            if (i > 0) {
                dp[i][j] += dp[i - 1][j];
            }
            if (j > 0) {
                dp[i][j] += dp[i][j - 1];
            }
            print2d(dp,A+1,B+1);
            cout<<endl;
            cout<<endl;
        }
    }
 cout<<"-------------"<<endl;
     for (int i = 0; i <= A; i++) {
        for (int j = 0; j <= min(i, B); j++) {
            // Base Cases
            if (j == 0 || j == i)
                C[i][j] = 1;
 
            // Calculate value using previously
            // stored values
            else
                C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
                print2d(C,A+1,B+1);
            cout<<endl;
            cout<<endl;
        }
    }
    return 0;
}
