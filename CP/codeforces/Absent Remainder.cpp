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
        int mn=*min_element(v.begin(),v.end());
        int c=0;
        for(int i=0;i<n,c<n/2;i++){
            if(v[i]!=mn) {
                cout<<v[i]<<" "<<mn<<"\n";
                c++;
            }
        }
    }
    return 0;

}
/*
4
2
1 4
4
2 8 3 4
5
3 8 5 9 7
6
2 7 5 3 4 8

*/
