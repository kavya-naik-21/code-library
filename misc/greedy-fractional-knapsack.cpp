#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};

bool comparator(Item a,Item b){
    double r1=(double)a.value/(double)a.weight;
    double r2=(double)b.value/(double)b.weight;
    return r1>r2;
}

class Solution
{
    public:

    double fractionalKnapsack(int W, Item a[], int n)
    {
        sort(a,a+n,comparator);
        int curr=0;
        double ans=0.0;
        for(int i=0;i<n;i++){
            if(curr+a[i].weight<=W){
                curr+=a[i].weight;
                ans+=a[i].value;
            }
            else{
                int r=W-curr;
                ans+=((double)a[i].value/(double)a[i].weight)*(double)r;
                break;
            }
        }
        return ans;

    }
        
};


int main()
{
	int t;	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
		int n, W;
		cin>>n>>W;		
		Item arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
} 