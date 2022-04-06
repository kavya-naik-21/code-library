#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(){
    int n; cin>>n;
    int ans=LLONG_MAX;
    for(int i=0;i<=1000000;i++){
        int l=0,r=1000000;
        while(l<r){
            int mid=(r+l)/2;
            if(i*i*i+i*mid*mid+i*i*mid+mid*mid*mid>=n) r=mid;
            else l=mid+1;
        }
        ans=min(ans,i*i*i+i*l*l+i*i*l+l*l*l);
    }
    cout<<ans<<endl;
}