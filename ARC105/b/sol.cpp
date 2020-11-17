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
#define fasto ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ttl int tt;cin>>tt;while(tt--)
 

int main()
{
	fasto;
	ll n;
	cin >> n;
	vector<ll> a(n);
	ll i = 0;
	rv(i, n, a);
	ll X = a[0];
	ll x = a[0];
	for(ll i = 0; i < n;++i)
	{
		if(X < a[i])
		{
			X = a[i];
		}
	}

	for(ll i = 0; i < n; ++i)
	{
		if(x > a[i])
		{
			x = a[i];
		}
	}
	ll mx = X;

	if(X == x)
	{
		cout << X;
	}
	else
	{
		for(ll i = 0; i < n; ++i)
		{
			if(a[i] == X)
			{
				mx = mx - x;
				a[i] = mx;
				if(X == x)
				{
					cout << mx;
					break;
				}
			}
		}
	}
	return 0;
}
