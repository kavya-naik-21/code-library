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
        int ans=0,x=0;
        for(int i=n-1;i>=0;i--){
            if(v[i]==v[n-1]) x++;
            else ans++,x*=2,i=n-x;
        }
        if(n==1) ans=0;
        cout<<ans<<endl;
    }
    return 0;

}
/*
5
3
1 1 1
2
2 1
5
4 4 4 2 4
4
4 2 1 3
1
1

*/
