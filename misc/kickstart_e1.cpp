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

void permutate(string a, int l, int r, vector<string> &arr)
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
        string str;
        cin>>str;
        int n = str.size();
        map<char, int> mp;
        vector<string> arr;
        permutate(str, 0, n - 1, arr);
        int flag = -1;
        for (auto i = arr.begin(); i != arr.end(); i++)
        {
            int count = 0;
            string temp = *i;
            for (int j = 0; j < n; j++)
            {
                if (str[j] != temp[j])
                    count++;
            }
            if (count == n)
            {
                cout << "Case #"<<k<<": "<<temp << endl;
                flag = 1;
                break;
            }
        }
        if (flag == -1)
            cout << "Case #"<<k<<": "<<"IMPOSSIBLE" << endl;
        
    }
    return 0;

}