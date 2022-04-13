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
        int ones=0,c=0,ans=0;
        for(int i=1;i<n-1;i++) {
            if(v[i]==1) ones++;
            c+=(v[i]%2);
            ans+=v[i]/2;
        }
        if(ones==(n-2) or (n==3 and v[1]%2!=0)) cout<<"-1"<<endl;
        else cout<<(ans+c)<<endl;
    }
    return 0;
}

