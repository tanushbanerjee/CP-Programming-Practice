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
	ll sum_curr = 0;
	ll sum_glob = 0;

	for(int i = 0;i < n; ++i)
	{
		sum_curr = max(a[i], sum_curr*a[i]);

		if(sum_curr > sum_glob)
		{
			sum_glob = sum_curr;
		}
	}
	cout << sum_glob;
}

int main()
{
	fastio;
	int tt;
	cin >> tt;
	while(tt--)
	{
		ll n;
		cin >> n;
		vector<ll> a(n);

		for(int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}
		
		kadene(a, n);
	}
	return 0;
}
