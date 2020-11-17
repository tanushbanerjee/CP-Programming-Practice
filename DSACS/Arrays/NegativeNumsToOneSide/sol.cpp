/*******************************************************************************
Author:  Tanush Banerjee 
Email:  samihanbanerjee026@gmail.com
CodeForces Username: samihanbanerjee026
CodeChef Username: tanushbanerjee
 *******************************Macros And Includes******************************/
#include <bits/stdc++.h>
using namespace std;

#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for(i=0; i < n; ++i)
#define Fo(i, k, n) for(i=k; i<n; ++i)
#define rv(n, a) for(int i = 0; i < n; ++i) {cin >> a[i];}
#define max(i, j) (i < j) ? cout<<1:cout<<0;
#define pb(x) push_back(x);
using ll = long long;
using l = long;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ttl int tt;cin>>tt;while(tt--)
 

int main()
{
	fastio;
	vector<int> a;
	rv(a.size(), a);
	vector<int> b, c;

	for(int i = 0; i < a.size(); ++i)
	{
		if(a[i] < 0)
		{
			b.pb(a[i]);
		}
		else
		{
			c .pb(a[i]);
		}
	}
	for(int i = 0; i < b.size(); ++i)
	{
		cout << b[i] << " ";
	}
	for(int i = 0; i < c.size(); ++i)
	{
		cout << c[i] << " ";
	}
	return 0;
}
