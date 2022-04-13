//time complexity: O(N*long(M*10^d)) where d is the number of decimal places.
// Find the Nth root of a number M

#include<bits/stdc++.h>
#define int long long int
using namespace std;

double multiply(double mid,int n){
    double res=1.0;
    for(int i=0;i<n;i++) res*=mid;
    return res;
}
double nthRootOfm(int n,int m){
    double l=1;
    double r=m;
    double eps=1e-6;
    while((r-l)>eps){
        double mid=(l+r)/2.0;
        if(multiply(mid,n)<m) l=mid;
        else r=mid;
    }
    return l;
}

int32_t main(){
    int n,m;
    cin>>n>>m;
    cout<<nthRootOfm(n,m)<<endl;
    return 0;
}