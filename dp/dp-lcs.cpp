#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(){
    string s1,s2; cin>>s1>>s2;
    int lcs[s1.length()][s2.length()+1];
    for(int i=0;i<=s1.length();i++){
        for(int j=0;j<=s2.length();j++){
            if (i==0 or j==0) lcs[i][j] = 0;
            else if(s1[i-1]==s2[j-1]) lcs[i][j]=lcs[i-1][j-1]+1;
            else lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
        }
    }
    cout<<lcs[s1.length()][s2.length()];
}