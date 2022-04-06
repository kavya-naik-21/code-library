#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int a; cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end(),greater<int>());
        int ans=v[n-1];
        for(int i=1;i<n;i++){
            if((v[i-1]-v[i])>ans) ans=(v[i-1]-v[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}

/*
8
1
10
2
0 0
3
-1 2 0
4
2 10 1 7
2
2 3
5
3 2 -4 -2 0
2
-1 1
1
-2
*/
