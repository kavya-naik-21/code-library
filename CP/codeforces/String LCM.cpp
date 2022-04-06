#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    int t; cin>>t;
    while(t--){
        string s,t; cin>>s>>t;
        int n=s.length(),m=t.length();
        int len=(n*m)/__gcd(n,m);
        string str1=s;
        while(s.length()<len) s+=str1;
        string str2=t;
        while(t.length()<len) t+=str2;
        cout<<((t==s)?s:"-1")<<endl;
    }
    return 0;
}

/*
3
baba
ba
aa
aaa
aba
ab

*/
