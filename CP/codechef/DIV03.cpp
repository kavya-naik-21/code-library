#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       double u,v,a,s;
       cin>>u>>v>>a>>s;
       double x=(u*u)-2*a*s;
       if(x<0)
       {
           cout<<"No"<<endl;
       }
       else
       {
           if(sqrt(x)>v)
              cout<<"No"<<endl;
            else
            cout<<"Yes"<<endl;
       }


    }
    return 0;
}