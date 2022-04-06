
#include <bits/stdc++.h>
using namespace std;

int check(int &d, int &k, vector<int> &v, int &c)
{
	if (d == 0) return 0;
	if (d < 0)	return -1;
	for (int i = k - 1; i >= 0; i--){
		d = d - v[i];
		int x = check(d, k, v, c);
		if (x == 0)	{c++; return x;}
		else if (x == -1)	d = d + v[i];
	}
	return -1;
}
bool isPrime(int n)
{
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;

	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}

void printPrime(int k, vector<int> &v)
{
	int i = 2;
	while (k != 0)
	{
		if (isPrime(i))
		{
			v.push_back(i);
			k--;
		}
		i++;
	}
}
// Driver Code
int main()
{
	int d, k;
	cin >> d >> k;
	vector<int> v, ans;
	printPrime(k, v);
	int c = 0;
	int x = -1;
	x = check(d, k, v, c);
	if (x == 0)
		cout << c;
	else
		cout << x;
}
