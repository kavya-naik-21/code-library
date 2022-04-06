#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int x=sqrt(n/2),y=sqrt(n/4);
        if((n%2==0 and x*x==(int)(n/2)) or (n%4==0 and y*y==(int)(n/4))) cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
    return 0;
}

/*
3
2
4
6
*/
