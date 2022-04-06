#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n,b,x,y; cin>>n>>b>>x>>y;
        int ans=0,prev=0;
        for(int i=0;i<n;i++){
            if((prev+x)<=b) prev+=x;
            else prev-=y;
            ans+=prev;
        }
        cout<<ans<<endl;
    }
    return 0;
}

/*
3
5 100 1 30
7 1000000000 1000000000 1000000000
4 1 7 3
*/
