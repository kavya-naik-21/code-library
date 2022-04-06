#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s1,s2; cin>>s1>>s2;
        int ans=0,prev=-1;
        for(int i=0;i<n;i++){
            if(s1[i]=='1' and s2[i]=='1')
                if(prev==0) ans++,prev=-1;
                else prev=1;
            else if(s1[i]=='0' and s2[i]=='0')
                if(prev==1) ans+=2,prev=-1;
                else ans++,prev=0;
            else
                 ans+=2,prev=-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}

/*
4
7
0101000
1101100
5
01100
10101
2
01
01
6
000000
111111
1
0
0
1
0
1
1
1
0
1
1
1
2
00
00
2
00
01
*/
