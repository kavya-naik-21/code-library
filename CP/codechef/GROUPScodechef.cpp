#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        int count_a=0;
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='1')
            {
                count_a++;
                i++;
                while(s[i]=='1' && s[i]!='\0')
                {
                    i++;
                }
            }
            if(s[i]=='\0')
            break;
        }
        cout<<count_a<<endl;
    }
    return 0;
}