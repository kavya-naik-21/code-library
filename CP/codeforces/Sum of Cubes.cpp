#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    map<int,int>mp;
    while(t--){
        int n; cin>>n;
        bool ans=false;
        for(int i=0;i<=10000;i++){
            int l=0,r=10000;
            while(l<r){
                int mid=(l+r)/2;
                if(i*i*i+mid*mid*mid<=n) l=mid+1;
                else r=mid;
            }
            if(i*i*i+l*l*l==n) ans=true;
        }
        cout<<(ans?"yes":"no")<<endl;
    }
    return 0;
}

