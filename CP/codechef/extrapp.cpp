#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

        int x,y;
        ll n,k;
        cin>>n;
        ll i=0;
        vector<ll>binaryNum;
        while(n>0)
        {  
            k = n % 2; 
            binaryNum.push_back(k);
            n = n / 2; 
            i++;
        }
        int f=0;
        ll j;
        ll dec_value1 = 0,dec_value2=0;
                ll product;
        for (j = i - 1; j >= 0; j--) 
        {  
            if(binaryNum[j]==1)
            {
                if(f==0)
                {
                 x=1;
                 y=0;
                 f=1;
                }
                else
                {
                    x=0;
                    y=1;
                    f=0;
                }
            }
            else
            {
                x=1;
                y=1;
            }
            ll g=pow(2,j);
            if(x==1)
            dec_value1=dec_value1+g;
            if(y==1)
            dec_value2=dec_value2+g;    
            product=dec_value1*dec_value2;  
            if(x==0)
                {
                    ll mid;
                    mid=(dec_value1+g)*(dec_value2-g);
                    if(mid>product)
                    {
                        product=mid;
                    dec_value1=dec_value1+g;
                    dec_value2=dec_value2-g;
                    f=1;
                    }
                } 
            if(y==0)
                {
                    ll mid;
                    mid=(dec_value1-g)*(dec_value2+g);
                    if(mid>product)
                    {
                        product=mid;
                    dec_value1=dec_value1-g;
                    dec_value2=dec_value2+g;
                    f=0;
                    }
                }    
        } 
            
        
    cout << product << endl;
    }
    return 0;
}