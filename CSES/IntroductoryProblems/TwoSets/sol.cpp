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
#define rv(i, n, a) for(int i = 0; i < n; ++i) {cin >> a[i];}
#define max(i, j) (i < j) ? cout<<1:cout<<0;
#define pb(x) push_back(x);
using ll = long long;
using l = long;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ttl int tt;cin>>tt;while(tt--)
 

int main()
{
	fastio;
	ll n;
	cin >> n;
	vector<ll> v1, v2;
	ll total = n * (n+1)/2;

	if(total & 1)
	{
		cout << "NO";
	}
	else
	{
		cout << "YES" << endl;
		total /= 2LL;
		while(n)
		{
			if(total -n >= 0)
			{
				v1.pb(n);
				total -= n;
			}
			else
			{
				v2.pb(n);
			}
			n--;
		}
		cout << v1.size() << endl;
		for(ll ele : v1)
		{
			cout << ele << " ";
		}
		cout << endl;
		cout << v2.size() << endl;
		for(ll ele : v2)
		{
			cout << ele << " ";
		}
		cout << endl;
		
	}
	return 0;
}
