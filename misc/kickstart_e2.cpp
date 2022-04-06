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

void permutate(vector<int> a, int l, int r, vector<vector<int>> &arr)
{
    if (l == r)
        arr.push_back(a);
    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            permutate(a, l + 1, r, arr);
            swap(a[l], a[i]);
        }
    }
}
int32_t main()
{
    fastIO;
    int t;
    cin >> t;
    for(int k=1;k<=t;k++)
    {
        int n;
        cin>>n;
        vector<int>a;
        float ans=1.0;
        if(n>1)
        {
            for(int i=1;i<=n;i++) a.push_back(i);
        vector<vector<int>> arr;
        permutate(a, 0, n - 1, arr);
        map<int,int>mp;
        int sum=0;
        for (auto i = arr.begin(); i != arr.end(); i++)
        {
            int count = 0;
            auto temp = *i;
            int mx=-1;
            for (int j = 0; j < n; j++)
            {
                if(temp[j]>mx) {
                    sum++;
                }
                mx=temp[j];
            }
        }
        ans=(float)sum/n;
        }
        cout << "Case #"<<k<<": "<<to_string(ans)<<endl;
    }
    return 0;

}