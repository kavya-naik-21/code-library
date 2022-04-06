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
        if(v[0]!=n and v[n-1]!=n) {
            cout<<"-1\n";
            continue;
        }
        for(int i=n-1;i>=0;i--){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
/*
4
4
1 3 2 4
1
1
5
1 3 5 4 2
3
3 2 1

*/
