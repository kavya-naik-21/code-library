#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a,b,c,un,flag=0;
        cin>>a>>b>>c;
        if(a==b && a!=c)
            {
                flag=3;
            }
        else if(a==c && a!=b)
            {
                flag=2;
            }
        else if(b==c && b!=a)
            {
                flag=1;
            }
        else if(a==b && b==c)
            {
                un=a;
            }
            for(int i=4;i<=n;i++)
            {
            cin>>a;
               if(a!=un && flag==0)
               {
                  flag=i;
               }
            }
            cout<<flag<<endl;
    }
    return 0;
}