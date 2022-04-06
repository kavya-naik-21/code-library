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
            int temp; cin>>temp;
            v.push_back(temp);
        }
        int prev=0,ans=0;
        for(int i=1;i<n;i++){
            if(v[i]==1 and prev!=(i-1)) ans+=(i-prev);
            if(v[i]==1) prev=i;
        }
        cout<<ans<<endl;
    }
    return 0;
}

/*
3
2
1 1
5
1 0 1 0 1
4
1 0 1 1


*/
