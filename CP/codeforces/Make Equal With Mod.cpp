#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>v;
        bool one=false;
        for(int i=0;i<n;i++){
            int a; cin>>a;
            v.push_back(a);
            if(a==1) one=true;
        }
        bool zero=false;
        sort(v.begin(),v.end(),greater<int>());
        for(int i=1;i<n;i++){
            if((v[i-1]-v[i])==1) zero=true;
        }
        if(zero and one) cout<<"no";
        else cout<<"yes";
        cout<<endl;
    }
    return 0;
}

/*
4
4
2 5 6 8
3
1 1 1
5
4 1 7 0 8
4
5 9 17 5

*/
