#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int ans=0,len=0;
        for(int i=0;i<n-1;){
            if(s[i]=='(' and (s[i+1]==')' or s[i+1]=='(')) {
                ans++;
                len+=2;
                i+=2;
            }
            else if(s[i]==')'){
                int c=i;
                c++;
                while(s[c]=='(') c++;
                if(s[c]==')') {
                    ans++;
                    len+=(c-i)+1;
                    i=c+1;
                }
                else break;
            }
            else break;
        }
        cout<<ans<<" "<<n-len<<endl;
    }
    return 0;
}

