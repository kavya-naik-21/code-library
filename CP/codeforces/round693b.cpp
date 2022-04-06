#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pub push_back
#define  fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    fast_io;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,temp;
        cin>>n;
        ll sum_1=0,sum_2=0;
        ll count_2=0;
        for(ll i=0;i<n;i++)
        {
           cin>>temp;
           if(temp==1)
           {
               sum_1+=1;
           }
           else
           {
               sum_2+=2;
               count_2++;
           }
        }
        if((sum_1%2)==0 && (sum_1+sum_2)%2==0)
        {
            if(sum_1==0 && count_2%2!=0)
            {
                cout<<"NO"<<endl;
            }
            else
            cout<<"YES"<<endl;

        }
        else
        cout<<"NO"<<endl;

    }
    return 0;
}
/*
5
2
1 1
2
1 2
4
1 2 1 2
3
2 2 2
3
2 1 2*/