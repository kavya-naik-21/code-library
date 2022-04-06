#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        if(n%2==0) cout<<"2 "<<n-3<<" 1";
        else{
            int cur=(n-1)/2;
		    if (cur%2==0) cout<<cur-1<<" "<<cur+1<<" "<<1;
		    else cout<<cur-2<<" "<<cur+2<<" "<<1;
        }
        cout<<endl;
    }
    return 0;
}
/*
6
18
63
73
91
438
122690412

*/
