#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        string str; cin>>str;
        str+='R';
        set<int>s;
        int l=0;
        for(int i=0;i<=str.length();i++){
            if(str[i]=='R') s.insert(i+1-l),l=i+1;
        }
        auto itr=s.end(); itr--;
        cout<<*itr<<endl;
        
    }
    return 0;
}

