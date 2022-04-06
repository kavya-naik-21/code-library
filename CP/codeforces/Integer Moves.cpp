#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        int x,y; cin>>x>>y;
        double a=sqrt(pow(x,2)+pow(y,2));
        if(x==0 and y==0) cout<<'0';
        else if((a-floor(a))==0) cout<<'1';
        else cout<<'2';
        cout<<endl;
    }
    return 0;
}

/*
3
8 6
0 0
9 15

*/
