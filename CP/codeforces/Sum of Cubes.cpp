#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        bool flag=false;
        for(int i=1;i<=10000;i++){
            int l=1,r=10000;
            while(l<r){
                int mid=(l+r)/2;
                if(i*i*i+mid*mid*mid==n) { flag=true; break; }
                else if(i*i*i+mid*mid*mid>n) r=mid;
                else l=mid+1;
            }
        }
        cout<<(flag?"yes":"no")<<endl;
    }
    return 0;
}

