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
#define pb(x) push_back(x);
using ll = long long;
using l = long;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ttl int tt;cin>>tt;while(tt--)
 
void kadene(vector<ll> a, ll n)
{
	ll max_current = a[0], max_global = a[0];

	for(ll i = 1; i < n; ++i)
	{
		max_current = max(a[i], max_current+a[i]);

		if(max_current > max_global)
		{
			max_global = max_current;
		}
	}
	cout << max_global;
}

int main()
{
	fastio;
	ll n;
	cin >> n;
	vector<ll> a(n);

	for(ll i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
		
	kadene(a, n);
	return 0;
}
